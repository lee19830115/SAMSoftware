/*
 * This project provides a bare metal framework for the SAM board with the
 * automotive extender board attached (ADAU1452 + several converters).
 *
 * SHARED MEMORY BETWEEN CORES
 * This project provides a simple mechanism for sharing information between the
 * cores via the files in the "multicore_audio_simple" folder.  This mechanism
 * relies on the same memory allocated for MCAPI so in order to use it, be sure
 * that MCAPI is not being used in the project (it is not in this one).  It works
 * by placing a shared data structure in the L2 memory that is accessible by
 * all three cores.  The ARM handles the push buttons and LEDs and uses this
 * shared structure to send push button events and gathers audio levels from
 * SHARC Core 1 to display audio levels.
 *
 * DMA-BASED AUDIO FRAMEWORK
 * SHARC Core 0 sets up a DMA from the serial ports connected to the ADAU1761.
 * This DMA framework is double buffered and generates a callback function when
 * a new block of data is ready.  The framework may be configured to process
 * data in-place or to separate incoming and outgoing data.  To configure the
 * framework for in-place audio processing, define a preprocessor variable called
 * INPLACE_AUDIO_PROCESSING in Automotive_DMA_Framework.h.  The size of the audio
 * block is also configured in this same file.  A larger audio block will improve
 * processing efficiency (with diminishing returns happening around 128 or 256
 * word blocks).  A shorter block size will result in lower audio latency.  The
 * project is configured with a default block size of 16 words.  This is a
 * global preprocessor variable defined in the project settings for each core.
 *
 * DUAL CORE AUDIO PROCESSING
 * This demo is currently set up to use both cores for audio processing using
 * the shared memory structure described above.  A set of semaphores is also used
 * in that project to let core 2 know when a new block of audio is ready for it to
 * process.
 *
 * For more information, see the documentation on the Github repo:
 * https://github.com/analogdevicesinc/SAMSoftware/tree/master/BareMetalSoftware
 *
 */

// Drivers for the various audio converters / processors on the auto board
#include "..\..\..\..\Simple_Drivers\adau1452_simple\adau1452_simple.h"
#include "..\..\..\..\Simple_Drivers\adau1966_simple\adau1966_simple.h"
#include "..\..\..\..\Simple_Drivers\adau1977_simple\adau1977_simple.h"
#include "..\..\..\..\Simple_Drivers\adau1979_simple\adau1979_simple.h"

// Simple system functionality (clocks, GPIO, etc.)
#include "..\..\..\..\Simple_Drivers\sysctrl_simple\simple_sysctrl.h"

// Common files for sharing data between 3 cores
#include "..\..\multicore_audio_simple\multicore_audio_simple.h"

#include <sys/adi_core.h>
#include <stdio.h>

// Simple C based driver for various converters
sADAU1452_Simple adau1452_simple;
sADAU1966_Simple adau1966_simple;
sADAU1977_Simple adau1977_simple;
sADAU1979_Simple adau1979_simple;

// Defines what the SAM LEDs should be doing
typedef enum {LED_SIGNS_OF_LIFE=0, LED_LEVEL_METER=1} sam_led_mode;
sam_led_mode SAM_LED_Mode = LED_SIGNS_OF_LIFE;

// Call backs for the two PBs on the SAM board
void pb1_callback() {

	// PB1 will toggle between our two modes
	SAM_LED_Mode = !SAM_LED_Mode;

	multiCoreAudioCtrl->SAM_PB_1_Pressed = true;
}
void pb2_callback() {
	multiCoreAudioCtrl->SAM_PB_2_Pressed = true;
}

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

	// And attach call backs
    attachInterrupt(SAM_PB1, pb1_callback, FALLING);
    attachInterrupt(SAM_PB2, pb2_callback, FALLING);

	// start ADAU1542 on SPI port 0 / SPI0
	if (adau1452_initialize( &adau1452_simple,
							 ((ADI_GPIO_PORT_C << 16) + 12),
							 SPI0 )
							 != ADAU1452_SIMPLE_SUCCESS) {
		errorIndicator();
	}

	/* Initialize the ADAU1966 using TWI1.  Make sure to put jumpers on P3 and P4
	 * to link TWI to header pins!
	 */
	if (adau1966_initialize( &adau1966_simple, TWI1 )
							!= ADAU1966_SIMPLE_SUCCESS) {
		errorIndicator();
	}

	/* Initialize both the ADAU1977 and the ADAU1979 at the same time since they
	 * accidentally share an I2C address.
	 */
	if (adau1977_initialize( &adau1977_simple, TWI1 )
							!= ADAU1977_SIMPLE_SUCCESS) {
		errorIndicator();
	}

	/*
	 * Do this for modified boards where ADAU1979 has an I2C address of 0x51.
	 * Otherwise, leave it commented out or the initialization routine will
	 * stall here.
	 */

#if 1
	if (adau1979_initialize( &adau1979_simple, TWI1 )
							!= ADAU1979_SIMPLE_SUCCESS) {
		errorIndicator();
	}
#endif

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

		if (dB_AudioLevel > -40.0) 	digitalWrite(SAM_LED10, HIGH);
		else						digitalWrite(SAM_LED10, LOW);

		if (dB_AudioLevel > -25.0) 	digitalWrite(SAM_LED11, HIGH);
		else						digitalWrite(SAM_LED11, LOW);

		if (dB_AudioLevel > -10.0) 	digitalWrite(SAM_LED12, HIGH);
		else						digitalWrite(SAM_LED12, LOW);
	}

	else if (SAM_LED_Mode == LED_SIGNS_OF_LIFE) {

	/*
	 * In this mode, each core toggles an LED (directly if ARM, indirectly if
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

