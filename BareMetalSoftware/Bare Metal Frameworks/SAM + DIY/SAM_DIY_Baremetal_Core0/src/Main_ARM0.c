/*
 * This project provides a bare metal framework for the SAM board.
 *
 * DIY BOARD SUPPORT
 * It can also be used with the "DIY" expansion board which provided MIDI
 * connectivity and instrument level inputs and outputs via 1/4" jacks.
 * If the DIY board is connected, a preprocessor variable should be set
 * under Project->properties -> C/C++ Build->Settings->C Compiler as
 * well as under C++ Compiler.  This variable is __DIY_DAUGHTER_BOARD__.
 * When this variable is set, the certain GPIOs will be enabled.  Furthermore,
 * a different set of ADAU1761 initialization files will be used.
 *
 * SHARED MEMORY BETWEEN CORES
 * This project provides a simple mechanism for sharing information between the
 * cores via the files in the "multicore_audio_simple" folder.  This mechanism
 * relies on the same memory allocated for MCAPI so in order to use it, be sure
 * that MCAPI is not being used in the project (it is not in this one).  It works
 * by placing a shared data structure in the L2 memory that is accessible by
 * all three cores.
 *
 * DMA-BASED AUDIO FRAMEWORK
 * SHARC Core 0 sets up a DMA from the serial ports connected to the ADAU1761.
 * This DMA framework is double buffered and generates a callback function when
 * a new block of data is ready.  The framework may be configured to process
 * data in-place or to separate incoming and outgoing data.  To configure the
 * framework for in-place audio processing, define a preprocessor variable called
 * INPLACE_AUDIO_PROCESSING in ADAU1761_DMA_Framework.h.  The size of the audio
 * block is also configured in this same file.  A larger audio block will improve
 * processing efficiency (with diminishing returns happening around 128 or 256
 * word blocks).  A shorter block size will result in lower audio latency.  The
 * project is configured with a default block size of 32 words.
 *
 * DUAL CORE AUDIO PROCESSING
 * This demo is currently set up to use both cores for audio processing using
 * the shared memory structure described above.  A set of semaphores is also used
 * in that project to let core 2 know when a new block of audio is ready for it to
 * process.
 *
 * DAI Configuration
 * The DAI/SRU is configured as follows using the CCES SRU configuration plug-in
 * for Core 0 (ARM core).  The serial port DAI signals are replicated on DAI13-
 * 16 for debug purposes as DAI01-04 aren't exposed anywhere on the PCB.
 * DAI01 - ADAU1761 Data out [output]
 * DAI02 - ADAU1761 Data in  [input]
 * DAI03 - ADAU1761 BCLK in	 [input]
 * DAI04 - ADAU1761 FS in    [input]
 * DAI05 - ADAU1761 ADDR0(0) [output]
 * DAI06 - ADAU1761 ADDR1(0) [output]
 * DAI07 - AD2425W BCLK		 [output]
 * DAI08 - AD2425W LRCLK     [output]
 * DAI09 - AD2425W DTX0      [output]
 * DAI13 - DAI01		     [output]
 * DAI14 - DAI02             [output]
 * DAI15 - DAI03             [output]
 * DAI16 - DAI04             [output]
 *
 * For more information, see the documentation on the Github repo:
 * https://github.com/analogdevicesinc/SAMSoftware/tree/master/BareMetalSoftware
 *
 *
*/

// Drivers for ADAD1761 and simple system functionality (clocks, GPIO, etc.)
#include "..\..\..\..\Simple_Drivers\adau1761_simple\adau1761_simple.h"

// Simple system functionality (clocks, GPIO, etc.)
#include "..\..\..\..\Simple_Drivers\sysctrl_simple\simple_sysctrl.h"

// Common files for sharing data between 3 cores
#include "..\..\multicore_audio_simple\multicore_audio_simple.h"

#include <sys/adi_core.h>
#include <stdio.h>

// Simple C based driver for ADAU1761
sADAU1761_Simple adau1761_simple;

// Defines what the SAM LEDs should be doing
typedef enum {LED_SIGNS_OF_LIFE=0, LED_LEVEL_METER=1} sam_led_mode;
sam_led_mode SAM_LED_Mode = LED_SIGNS_OF_LIFE;

// Call back for PB1 on SAM board
void sam_pb1_callback() {

	// PB1 will toggle between our two modes
	SAM_LED_Mode = !SAM_LED_Mode;

	multiCoreAudioCtrl->SAM_PB_1_Pressed = true;
}

// Call back for PB2 on SAM board
void sam_pb2_callback() {
	multiCoreAudioCtrl->SAM_PB_2_Pressed = true;
}


#ifdef __DIY_DAUGHTER_BOARD__

// Call back for PB1 on SAM DIY daughter board
void diy_pb1_callback() {

	// PB1 will toggle between our two modes
	SAM_LED_Mode = !SAM_LED_Mode;

	multiCoreAudioCtrl->DIY_PB_1_Pressed = true;
}

// Call back for PB2 on SAM DIY daughter board
void diy_pb2_callback() {
	multiCoreAudioCtrl->DIY_PB_2_Pressed = true;
}

// Call back for PB3 on SAM DIY daughter board
void diy_pb3_callback() {
	multiCoreAudioCtrl->DIY_PB_3_Pressed = true;
}

#endif


/*
 * If any of the converter setup routines encounter an error, flash the LEDs
 * on the SAM board rapidly.
 */
void errorIndicator() {

	while(1) {
		digitalToggle(SAM_LED10);
		delay(100);
		digitalToggle(SAM_LED11);
		delay(100);
	}
}

/*
 * This setup() routine runs once at start-up and it's where we set everything up.
 * It's called from main() in Startup_Code_Corex.c
 */
void setup() {

	// Set up LEDs on SAM board
	pinMode(SAM_LED10, OUTPUT);
	pinMode(SAM_LED11, OUTPUT);
	pinMode(SAM_LED12, OUTPUT);

	// Set up the PBs as inputs on SAM board
	pinMode(SAM_PB1, INPUT);
	pinMode(SAM_PB2, INPUT);

	// Attach a call back to each of these interrupts on the falling edge
    attachInterrupt(SAM_PB1, sam_pb1_callback, FALLING);
    attachInterrupt(SAM_PB2, sam_pb2_callback, FALLING);

#ifdef __DIY_DAUGHTER_BOARD__

    // Set DIY PBs as inputs and attach handlers
	pinMode(DIY_SHIELD_PB_1, INPUT);
	pinMode(DIY_SHIELD_PB_2, INPUT);
	pinMode(DIY_SHIELD_PB_3, INPUT);

	// Attach call back for thsee
    attachInterrupt(DIY_SHIELD_PB_1, diy_pb1_callback, FALLING);
    attachInterrupt(DIY_SHIELD_PB_2, diy_pb2_callback, FALLING);
    attachInterrupt(DIY_SHIELD_PB_3, diy_pb3_callback, FALLING);

    // Set DIY LEDs as outputs
	pinMode(DIY_SHIELD_LED_1, OUTPUT);
	pinMode(DIY_SHIELD_LED_2, OUTPUT);
	pinMode(DIY_SHIELD_LED_3, OUTPUT);
	pinMode(DIY_SHIELD_LED_4, OUTPUT);

#endif

	// Initialize the ADAU1761 which is connected to TWI0
	if (adau1761_initialize( &adau1761_simple, TWI0 ) != ADAU1761_SIMPLE_SUCCESS) {
		errorIndicator();
	}

	// Enable ADAU1761
	adau1761_enable( &adau1761_simple );

}

/*
 * This loop function is like a thread with a low priority.  It is called within
 * a while(1) loop from Startup_Code_Corex.c.
 */
void loop() {

	/*
	 * In this first mode, we are using the three LEDs on the SAM board as a simple
	 * VU meter.
	 */
	// Get the current audio level as calculated by SHARC Core 1 via our shared mem structure
	float dB_AudioLevel = multiCoreAudioCtrl->audioLevelDb;
	if (dB_AudioLevel && SAM_LED_Mode == LED_LEVEL_METER) {

#ifdef __DIY_DAUGHTER_BOARD__
		if (dB_AudioLevel > -40.0) 	digitalWrite(DIY_SHIELD_LED_1, HIGH);
		else						digitalWrite(DIY_SHIELD_LED_1, LOW);

		if (dB_AudioLevel > -30.0) 	digitalWrite(DIY_SHIELD_LED_2, HIGH);
		else						digitalWrite(DIY_SHIELD_LED_2, LOW);

		if (dB_AudioLevel > -20.0) 	digitalWrite(DIY_SHIELD_LED_3, HIGH);
		else						digitalWrite(DIY_SHIELD_LED_3, LOW);

		if (dB_AudioLevel > -10.0) 	digitalWrite(DIY_SHIELD_LED_4, HIGH);
		else						digitalWrite(DIY_SHIELD_LED_4, LOW);
#else

		if (dB_AudioLevel > -30.0) 	digitalWrite(SAM_LED10, HIGH);
		else						digitalWrite(SAM_LED10, LOW);

		if (dB_AudioLevel > -20.0) 	digitalWrite(SAM_LED11, HIGH);
		else						digitalWrite(SAM_LED11, LOW);

		if (dB_AudioLevel > -10.0) 	digitalWrite(SAM_LED12, HIGH);
		else						digitalWrite(SAM_LED12, LOW);

#endif

	}

	else if (SAM_LED_Mode == LED_SIGNS_OF_LIFE) {

	/*
	 * In this second mode, each core toggles an LED (directly if ARM, indirectly if
	 * SHARC) to indicate that it's alive.  The SHARCs strobe the LED flag
	 * when they've processed a block of audio so a strobing LED for a SHARC
	 * core means that it's both running and audio events are being generated
	 */

		// ARM sign of life LED
		static uint32_t led_cntr = 0;
		if (led_cntr++ > 100000) {
			digitalToggle(SAM_LED10);
			led_cntr = 0;
		}
		// SHARC Core 1 sign of life LED pulse
		digitalWrite(SAM_LED11, (uint8_t) multiCoreAudioCtrl->SHARC1_LED_status);
		// SHARC Core 2 sign of life LED pulse
		digitalWrite(SAM_LED12, (uint8_t) multiCoreAudioCtrl->SHARC2_LED_status);
	}

}

