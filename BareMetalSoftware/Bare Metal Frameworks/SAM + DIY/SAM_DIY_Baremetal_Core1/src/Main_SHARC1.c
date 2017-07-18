/*
 * This file contains the primary audio processing functionality.  It sets up the
 * audio DMA which provides a double-buffered audio processing framework.
 * When a new buffer of audio is ready, the processAudioCallback() function
 * is called.  While the ADAU1761 is 2 channel ADC and DAC, 8 channels of
 * audio are passed between the ADAU1761 and the SHARC.  Pre-processing and
 * post-processing can be done via SigmaStudio using the remaining 6 channels.
 *
 * For more information, see the documentation on the Github repo:
 * https://github.com/analogdevicesinc/SAMSoftware/tree/master/BareMetalSoftware
 *
 */

#include <math.h>
#include <stdio.h>

#include <sys/adi_core.h>

// The ADAU1761 DMA set up and double-buffering framework
#include "ADAU1761_DMA_Framework.h"

// Support for GPIO and timer ticks
#include "..\..\..\..\Simple_Drivers\sysctrl_simple\simple_sysctrl.h"

// Support for simple multi-core data sharing
#include "..\..\multicore_audio_simple\multicore_audio_simple.h"

/*
 * This function calculates the signal level and uses the LEDs as a level
 * meter.  The AUDIO_LEVEL_LEN dictates the size of the delay line used
 * in the optimized average function.  A larger value will result in a
 * longer average.
 */

// Length of average delay line used in level meter
#define AUDIO_LEVEL_LEN	(64)
float calculateAudioLevels( float * audio_buffer) {

	// Current audio level linear
	static float AudioLevel = 0.0;
	// Audio delay line used for average processing
	static float audioLevelDelayLine[AUDIO_LEVEL_LEN] = {0};
	// Delay line pointer
	static uint32_t levelPtr = 0;

	int i;
	float level = 0.0;

	for (i = 0; i<AUDIO_BLOCK_SIZE; i++) {
		level += fabs(audio_buffer[i]);
	}
	// Perform our running average optimization (one add, one sub, one mult)!
	level *= (1.0/AUDIO_BLOCK_SIZE);
	AudioLevel += level;
	AudioLevel -= audioLevelDelayLine[levelPtr];

	audioLevelDelayLine[levelPtr++] = level;
	if (levelPtr >= AUDIO_LEVEL_LEN) levelPtr = 0;

	return 20.0*log10f(AudioLevel);
}


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
 * This callback is called every time we have a new audio buffer that is ready
 * for processing!  It's currently configured for in-place processing so if no
 * processing is done to the audio, it is passed through unaffected.
 */
void 	processAudioCallback( ) {

	int i;

	/*
	 * Before we begin any audio processing in this SHARC core, first take care
	 * of some plumbing.  We're going to send the audio frame we processed during
	 * the last block over to SHARC Core 2.  And then we're going to copy the audio
	 * that SHARC Core 2 processed during the last block and send it to the DACs.
	 *
	 * This gives us the following audio flow:
	 *   ADCs -> SHARC Core 1 -> SHARC Core 2 -> DACs
	 *
	 */

	for (i=0;i<AUDIO_BLOCK_SIZE;i++) {

		// ADC data to SHARC Core 1 audio processing inputs
		multiCoreAudioCtrl->Core_1_Audio_In_L[i] = AudioChannel_0_Left_In[i];
		multiCoreAudioCtrl->Core_1_Audio_In_R[i] = AudioChannel_0_Right_In[i];

		// SHARC Core 1 audio processing output (from last frame) to SHARC Core 2
		multiCoreAudioCtrl->Core_2_Audio_In_L[i] = multiCoreAudioCtrl->Core_1_Audio_Out_L[i];
		multiCoreAudioCtrl->Core_2_Audio_In_R[i] = multiCoreAudioCtrl->Core_1_Audio_Out_R[i];

		// SHARC Core 2 audio processing output (from last frame) to DACs
		AudioChannel_0_Left_Out[i]  = multiCoreAudioCtrl->Core_2_Audio_Out_L[i];
		AudioChannel_0_Right_Out[i] = multiCoreAudioCtrl->Core_2_Audio_Out_R[i];

	}

	// Raise an interrupt in SHARC Core 2 to trigger audio processing
	*pREG_SEC0_RAISE = INTR_SOFT7;

	/**************************************************************************/
	/**************************************************************************/
	/**************************************************************************/

	/*
	 * And here is where we actually process our audio!  I'm sure you can come up
	 * with something more interesting than passing the audio through :)
	 */
	for (i=0;i<AUDIO_BLOCK_SIZE;i++) {
		multiCoreAudioCtrl->Core_1_Audio_Out_L[i] = multiCoreAudioCtrl->Core_1_Audio_In_L[i];
		multiCoreAudioCtrl->Core_1_Audio_Out_R[i] = multiCoreAudioCtrl->Core_1_Audio_In_R[i];
	}

	/**************************************************************************/
	/**************************************************************************/
	/**************************************************************************/

	// Calculate our audio levels for display on the LEDs
	multiCoreAudioCtrl->audioLevelDb = calculateAudioLevels( AudioChannel_0_Left_In );

	// Calculate our CPU load using DMA progress
	multiCoreAudioCtrl->sharc_core1_cpuload = getCPULoad();

	// Toggle LEDs to show sign of life
	static uint16_t tglCntr = 0;
	if (tglCntr++ > 128) {
		tglCntr = 0;
		multiCoreAudioCtrl->SHARC1_LED_status = !multiCoreAudioCtrl->SHARC1_LED_status;
	}




}

//*****************************************************************************



/*
 * This setup() routine runs once at start-up and it's where we set everything up.
 * It's called from main() in Startup_Code_Corex.c
 */
void 	setup()
{

	/*
	 * Since this SHARC core sets up the audio DMAs, set these parameters in
	 * our common C struct so the other cores can use these values if needed.
	 * Note that AUDIO_BLOCK_SIZE should be defined as a pre-processor value
	 * across all three cores.
	 */
	multiCoreAudioCtrl->audio_block_size = AUDIO_BLOCK_SIZE;
	multiCoreAudioCtrl->audio_channel_count = ADAU1761_SLOTS;

}


/*
 * This loop function is like a thread with a low priority.  It is called within
 * a while(1) loop from Startup_Code_Corex.c.
 */
void	loop()
{


}

