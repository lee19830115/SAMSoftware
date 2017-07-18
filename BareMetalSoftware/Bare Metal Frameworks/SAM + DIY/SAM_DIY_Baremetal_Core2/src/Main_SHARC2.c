/*
 * This is the main set of processing routines for SHARC Core 2.  When SHARC
 * Core 1 has a new block of audio data, it passes it to Core 2 via the shared
 * memory structure and then generates an interrupt in Core 2 (SOFT7).  Core 2
 * processes the audio and places it into the shared output buffers.
 *
 * When Core 2 is not processing audio, it is continually running a large FFT on
 * the incoming audio stream.  This processing is happening in the main processing
 * loop which repeats indefinitely.
 *
 * This arrangement is like a hardware-based OS.  Audio is processed in a high
 * priority thread (interrupt service routine) that interrupts a lower priority
 * thread (while(1) loop running in main) that is running an FFT.
 *
 * For more information, see the documentation on the Github repo:
 * https://github.com/analogdevicesinc/SAMSoftware/tree/master/BareMetalSoftware
 *
 */

// Our shared memory structure in shared L2 memory
#include "..\..\multicore_audio_simple\multicore_audio_simple.h"

#include <stdlib.h>
#include <math.h>

#include <adi_fft_wrapper.h>
#include <filter.h>
#include <window.h>
#include <signal.h>

/*
 * By looking at the DMA counters, we can determine how far along the background
 * DMA is.  If this DMA is almost complete, we know we're using most of our
 * compute resources.  On the other hand, if the DMA is still close to the
 * start of the transfer, we know that we have plenty of CPU left!
 */
float getCPULoad( void ) {

	// In the automotive framework, we use DMA channel 12
	uint16_t currentYCnt = multiCoreAudioCtrl->audio_block_size
						   - (*pREG_DMA1_YCNT_CUR);

	uint16_t currentXCnt = multiCoreAudioCtrl->audio_channel_count
						   - (*pREG_DMA1_XCNT_CUR);

	float totalSampPerFrame = (float) multiCoreAudioCtrl->audio_block_size *
								multiCoreAudioCtrl->audio_channel_count;

	return 100.0 * (float) (currentYCnt*multiCoreAudioCtrl->audio_channel_count +
						    currentXCnt) * (1.0/totalSampPerFrame);

}


/*
 * Variables and defines for our reverb processing
 */
#define REVERB_LINES (8)
#define MAX_REVERB_SIZE (12000)
#define CLEAN_MIX (0.5)
#define FEEDBACK (0.8)

// Define a block for delay lines for our reverb and place them in external SDRAM
float section("seg_sdram") reverbLines_L[REVERB_LINES][MAX_REVERB_SIZE];
float section("seg_sdram") reverbLines_R[REVERB_LINES][MAX_REVERB_SIZE];

// Define delay line lengths and pointers
uint32_t	reverbPtrs_L[REVERB_LINES] = {0};
uint32_t	reverbPtrs_R[REVERB_LINES] = {0};
uint32_t	reverbLen_L[REVERB_LINES] = {812, 1912, 2202, 3402, 4522, 6432, 9432, 10800};
uint32_t	reverbLen_R[REVERB_LINES] = {712, 1812, 2102, 3302, 4422, 7432, 8321, 11924};

bool 		reverbEnabled = true;

/*
 * Variables and defines for our continuous large FFT background operation.  We
 * are optionally zero stuffing the FFT.  FFT_DATA_SIZE is the number of words
 * we want to process in the FFT.  The remaining inputs will be zeroed.  The
 * FFT_SIZE variable is the actual size of the FFT.
 */
#define FFT_DATA_SIZE (2048)
#define FFT_SIZE (4096)

// buffer our data with a circular buffer
float 	fft_circ_buffer[FFT_DATA_SIZE];
uint32_t fft_circ_ptr = 0;

// Declare FFT buffers and ensure they're aligned properly
#pragma align 32
float 	fft_input_data[FFT_SIZE];
#pragma align 32
float 	fft_output_mag[FFT_SIZE/2];
#pragma align 32
float	fft_output_mag_log[FFT_SIZE/2];
#pragma align 32
complex_float fft_output_data[FFT_SIZE];

int     twiddle_stride = 1;

bool	processFFT = false;

/*
 * This is our audio processing call back function.  SHARC Core 1 will assert
 * an interrupt that will kick off this function here in SHARC Core 2 every
 * time a new audio block is ready
 */
void processAudio( void ) {
	int i, j;
	static uint16_t tglCntr = 0;
	float out_l, out_r;

	if (reverbEnabled) {

		// Calculate our really simple reverb
		for (i=0;i<AUDIO_BLOCK_SIZE;i++) {

			// Get input samples
			out_l = CLEAN_MIX * multiCoreAudioCtrl->Core_2_Audio_In_L[i];
			out_r = CLEAN_MIX * multiCoreAudioCtrl->Core_2_Audio_In_R[i];

			for (j=0;j<REVERB_LINES;j++) {
				out_l += (1.0-CLEAN_MIX)*(1.0/REVERB_LINES)*reverbLines_L[j][reverbPtrs_L[j]];
				out_r += (1.0-CLEAN_MIX)*(1.0/REVERB_LINES)*reverbLines_R[j][reverbPtrs_R[j]];

				reverbLines_L[j][reverbPtrs_L[j]] = multiCoreAudioCtrl->Core_2_Audio_In_L[i] + FEEDBACK*reverbLines_L[j][reverbPtrs_L[j]];
				reverbLines_R[j][reverbPtrs_R[j]] = multiCoreAudioCtrl->Core_2_Audio_In_R[i] + FEEDBACK*reverbLines_R[j][reverbPtrs_R[j]];

				if (reverbPtrs_L[j]++ > reverbLen_L[j]) reverbPtrs_L[j] = 0;
				if (reverbPtrs_R[j]++ > reverbLen_R[j]) reverbPtrs_R[j] = 0;

			}

			// Store output samples
			multiCoreAudioCtrl->Core_2_Audio_Out_L[i] = out_l;
			multiCoreAudioCtrl->Core_2_Audio_Out_R[i] = out_r;

		}
	} else {
		// If reverb not enabled, just pass audio through
		for (i=0;i<AUDIO_BLOCK_SIZE;i++) {
			multiCoreAudioCtrl->Core_2_Audio_Out_L[i] = multiCoreAudioCtrl->Core_2_Audio_In_L[i];
			multiCoreAudioCtrl->Core_2_Audio_Out_R[i] = multiCoreAudioCtrl->Core_2_Audio_In_R[i];
		}
	}

	// Buffer audio for background FFT
	for (i = 0; i<AUDIO_BLOCK_SIZE; i++) {
		fft_circ_buffer[fft_circ_ptr++] = multiCoreAudioCtrl->Core_2_Audio_In_L[i];
		if (fft_circ_ptr >= FFT_DATA_SIZE) fft_circ_ptr = 0;
	}

	// Calculate our CPU load using DMA progress
	multiCoreAudioCtrl->sharc_core2_cpuload = getCPULoad();

	// Toggle LED to show signs of life
	if (tglCntr++ > 128) {
		tglCntr = 0;
		multiCoreAudioCtrl->SHARC2_LED_status = !multiCoreAudioCtrl->SHARC2_LED_status;
	}

	// If we get word from the ARM core that PB1 has been pressed, toggle reverb
	if (multiCoreAudioCtrl->SAM_PB_2_Pressed) {
		multiCoreAudioCtrl->SAM_PB_2_Pressed = 0;
		reverbEnabled = !reverbEnabled;
	}

	// Clear the software interrupt raised by SHARC Core 1 when we're done processing
	*pREG_SEC0_END = INTR_SOFT7;

	// Kick of an FFT
	processFFT = true;

}


/*
 * This setup() routine runs once at start-up and it's where we set everything up.
 * It's called from main() in Startup_Code_Corex.c
 */
void setup() {

	int i = 0;

	// Zero out delay lines used for reverb
	float * reverblines_l = (float *) reverbLines_L;
	float * reverblines_r = (float *) reverbLines_R;
	for(i=0;i<REVERB_LINES*MAX_REVERB_SIZE;i++) {
		reverblines_l[i] = 0.0;
	}
	for(i=0;i<REVERB_LINES*MAX_REVERB_SIZE;i++) {
		reverblines_r[i] = 0.0;
	}

	/*
	 * Setup our software interrupt that we'll trigger from Core 1 when a new
	 * audio block is ready
	 */
	adi_int_InstallHandler( INTR_SOFT7,
							(ADI_INT_HANDLER_PTR) processAudio,
							NULL,
							true);

}


/*
 * This loop function is like a thread with a low priority.  It is called within
 * a while(1) loop from Startup_Code_Corex.c.
 */
void loop() {

	int i;

	/*
	 * If the processFFT flag is set, begin processing the FFT.
	 */
	if (processFFT) {

		processFFT = false;

		// Copy audio data into FFT buffer
		uint32_t fft_circ_ptr_local = fft_circ_ptr;

		// copy points and window we want to run through FFT accelerator here
		for (i = 0; i < FFT_DATA_SIZE; i++) {
			fft_input_data[i] = fft_circ_buffer[fft_circ_ptr_local++];
			if (fft_circ_ptr_local >= FFT_DATA_SIZE) fft_circ_ptr_local = 0;
		}

		// Use the FFT accelerator to compute our 4K FFT!
		complex_float *result = accel_rfft(fft_input_data, fft_output_data,
										   accel_twiddles_4096, twiddle_stride,
										   1.0, FFT_SIZE);

		// Calculate magnitude and place in our shared memory
		fft_magnitude (fft_output_data, fft_output_mag, FFT_SIZE/2, 1);

		// Convert linear to dB
		for (i=0;i<FFT_SIZE/2;i++) {
			fft_output_mag_log[i] = 20.0 * log10f(fft_output_mag[i]);
		}
	}
}
