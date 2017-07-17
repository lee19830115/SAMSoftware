# Bare-Metal Frameworks for the SAM

This folder structure contains a set of bare-metal processing frameworks for the SAM board.  These frameworks are designed to be used as a starting point for bare metal audio processing projects.  They're designed to be easy to understand.  They also demonstrate a number of useful techniques and approaches on the SHARC for efficient audio processing.  The frameworks are written entirely in C.

The folder structure is as follows:

  * **simple_drivers** - contains a set of drivers for the various ADCs and DACs on the SAM board and the automotive expander daughter board.  This folder also contains drivers for commonly used SHARC peripherals including I2C/TWI, SPI, UART and GPIO.  These drivers have been written to be simple, easy to understand and easy to employ.  They're build using a similar set of principles as the Arduino driver model.  The bare metal frameworks rely on these drivers.
  * **SigmaStudio Schematics** - contains a set of SigmaStudio schematics that contain the configurations for each of the ADCs and DACs used on these boards.  SigmaStudio generates a set of initialization files from these schematics that the simple_drivers simply load into the device at startup.  
  * **Bare Metal Frameworks** - contains CCES projects containing the bare metal processing frameworks
    - **SAM + Automotive Board** - contains a 16-channel audio processing framework for use with the SAM board along with the automotive expander board (8 ADCs, 16 DACs, A2B, S/PDIF).
    - **SAM + DIY** - contains an 8-channel audio processing framework for use with the SAM board, or with the SAM board along with the DIY daughter board.

## Framework architecture ##
These frameworks demonstrate a number SHARC capabilities and programming techniques for efficient and simple audio processing.

All three cores are used in the framework and they are responsible for the following tasks:

  * ARM / Core0 -
    - Initialize all of the exteral ADCs and DACs using the simple_drivers and the auto init files generated from SigmaStudio.
    - Wait for push button events and respond to them
    - Control the LEDs
  * SHARC 1 / Core 1
    - Initialize the double-buffered audio DMA system.  Once this is running, this SHARC core gets an interrupt each time a new block of audio is ready.
    - Manage the general audio plumbing - pass blocks of audio to SHARC 2 / Core 2 for processing.  Read audio back from Core 2 and sent to DACs.
    - Measure signal level in DBs
  * SHARC 2 / Core 2
    - Process audio blocks as they become available from Core 1
    - Run a reverb algorithm on the audio
    - Run a 4K FFT every time a new 32-word block of audio arrives using the FFT accelerator.

The audio flows through the cores in a pipelined manner as such:

  ADCs -> SHARC Core 1 -> SHARC Core 2 -> DACs

When SHARC Core 1 is processing the current frame of audio, SHARC Core 2 is processing the previous frame.  This way, both cores can be fully utilized.

Below is a set of approaches that are used within the bare metal frameworks

### DMA-based Audio I/O Framework ###

SHARC processors have a powerful DMA subsystem that is capable of moving data between peripherals and memory in the background.  In addition, this DMA engine can also de-interleave data arriving from multi-channel ADCs (and interleave data transmitted to multichannel DACs) so that the data from each channel shows up contiguously in an array.  

When a new block of audio is ready, the DMA engine generates an interrupt.  The bare metal framework responds to this interrupt, converts the received audio to floating point, and converts the floating point buffers to be transmitted to fixed point.  The SHARC has a single-cycle assembly language function to convert between fixed and floating point.  When casting variables in C between fixed and float, this instruction will typically be used by the compiler.  Once this is done, a user call-back function called processAudio() is called.  This function can be found in the Main_SHARC1.c file.

The audio block size is defined as a preprocessor variable (AUDIO_BLOCK_SIZE) within the project settings.  It is currently set at 32 words which provides a nice mix of low latency and efficient processing.  To change this, right click on each of the three projects, and select properties.  From here, C/C++ Build->Settings.  Then select the Compiler (SHARC and ARM) and C++ Compiler (ARM) and select the Preprocessor sub-item.  Here, you will see AUDIO_BLOCK_SIZE=32 defined.

### Very simple multi-core memory sharing ###

While CCES comes with an implementation of the MC-API multi-core communications API, it is complex.  Instead, these bare metal projects share a common C structure that is placed in shared L2 memory that all three cores can read and write to.  Most importantly, the method described here does not require modification of the default LDF file nor does it require altering any memory protection settings.

In the root directory of each of the two bare metal frameworks is a fourth folder called "multicore_audio_simple".  This folder contains a .h file which defines the shared structure and a .c file which declares an instance and places this structure into a memory segment normally used by MC-API that all three cores have access to.

SHARC Core 1 can set a global flag...
```
multiCoreAudioCtrl->audio_ready = true;
```

And SHARC Core 2 can poll that flag...
```
while (1) {
  if (multiCoreAudioCtrl->audio_ready) {
    multiCoreAudioCtrl->audio_ready = false;

    // process audio
  }
}

```

As you can see, this requires far fewer lines of code than doing the same thing with MC-API.

When using this approach, there are two important considerations:

1. Do not enable MC-API in these projects.  This approach uses memory that is normally reserved for MC-API and these accesses will conflict with MC-API operation.
2. Because we are manually placing a C structure in memory, it's important to keep an eye on its size so it doesn't over-flow into adjacent memory segments.  A simple helper routine is provided that should be run by one of the cores at initialization which simply checks the size of the struct and ensure it isn't larger than the segment it is being placed in.  The example below shows how this is implemented on the ARM core.

```
/*
 * Ensure that any shared memory structures we have using the
 * multicore_audio_simple code has not grown beyond the segments in which
 * it is supposed to live
 */
if (!checkSharedMemoryStructureSizes()) {
  printf("multicore_audio_simple: one of the structures is too big");
  while(1) {}
}
```

Note: It's important that MC-API isn't added to these projects as the MC-API libraries use the same memory region.

### Dual Core Audio Processing ###

Each of the SHARC processors relies on a set of floating point input and output buffers in the shared memory structure.  As mentioned above, the audio flows as follows: ADCs -> SHARC Core 1 -> SHARC Core 2 -> DACs.

When SHARC Core 1 has prepared audio buffers for SHARC Core 2, SHARC Core 1 raises/asserts a system "user" interrupt that Core 2 is listening for.  When this interrupt arrives, SHARC Core 2 processes the audio.

Example of audio processing on SHARC Core 2.  This is the totality of what is required to process audio on SHARC Core 2.

```
void processAudio(void) {
  int i;
  for (i=0;i<AUDIO_BLOCK_SIZE;i++) {
    // process our audio (gain = 0.5)
    multiCoreAudioCtrl->Core_2_Audio_Out_L[i] = 0.5 * multiCoreAudioCtrl->Core_2_Audio_In_L[i];
    multiCoreAudioCtrl->Core_2_Audio_Out_R[i] = 0.5 * multiCoreAudioCtrl->Core_2_Audio_In_R[i];
  }

  // clear the interrupt
  *pREG_SEC0_END = INTR_SOFT7;
}

setup() {
  // set up the interrupt and set processAudio as callback
  adi_int_InstallHandler( INTR_SOFT7,
							(ADI_INT_HANDLER_PTR) processAudio,
							NULL,
							true);

```

That's it!

### Audio benchmarking using DMA ###
A useful trick for assessing how much CPU your audio processing is using is to look at the progress of the DMA running in the background when you've finished processing audio.  If the DMA running in the background is close to completion when you've finished processing your audio, it means you're using most of the processing power available for that core.  On the other hand, if the DMA is only 20% complete, it basically means you're using 20% of the processing power.

Each of the SHARC Cores has a routine defined in Main called `getCPULoad`.  This function reads the current DMA progress and from this, calculates a percentage of CPU load being utilized for processing.  It should be called within the callback right after we finish processing audio.  The bare metal frameworks currently save this to the shared C structure so the ARM can "see" how much CPU both of the SHARC cores are using.

```
void processAudio( void ) {
	int i;

	for (i=0;i<AUDIO_BLOCK_SIZE;i++) {
    // Some amazing audio algoritm here
  }

  // Calculate CPU load and save in our shared memory structure
  multiCoreAudioCtrl->sharc_core2_cpuload = getCPULoad();
}
```

## Hardware ##

There are essentially three different hardware configurations that these bare metal frameworks support.

1. SAM board
2. SAM board with DIY daughter board
3. SAM board with automotive daughter board

Because the DIY daughter board relies on the ADAU1761 on the SAM board, it uses the same bare metal framework.  The automotive framework does not support the ADAU1761 presently.

### Automotive Board ###

## Configuration ##

### Hardware Configuration ###

There are a few modifications that need to be made to the automotive board before it can be used.

1. A jumper needs to be placed J16 (not populated by default) on the left-most position.  This connects the on-board 12.288MHz crystal to ADAU1452.  The other positions can be used to select the MCLK from the A2B bus or an external MCLK from a pin header.
2. Two jumpers need to be placed on P3 and P4 to connect TWI1 from the SAM board to the TWI/I2C devices on the automotive board.  The SAM board has other components that sit on the TWI0 bus so best to use TWI1 to minimize the loading of the TWI0 bus.  The drivers in the SS framework are set to use TWI1 at the moment.
3. The ADAU1452 can either boot from an on-board SPI flash or from an external SPI device.  The switch should be set as shown below in the SPI_BOOT mode (unless you have programmed the SPI flash memory and don't want the SAM board to initialize the processor).  Even in SELF-BOOT mode, where the ADAU1452 processor boots from an external flash, the remain converters on the automotive board still need to be initialized (via TWI).
4. The ADAU1977 and the ADAU1979 sit at the same I2C/TWI address. The good news is that they share a memory map and by initializing one device, the other can be initialized too at the same time.  A simple modification can be made whereby R132 can be lifted and connected to VCC instead of GND.  This will change the I2C address of the ADAU1979 from 0x11 to 0x51.  Note! The SS framework is currently configured to program the ADAU1979 at address 0x51. However, this can be changed back to 0x11 in the Simple_Drivers\adau1979_simple\adau1979_simple.h file (line 42).  Make sure to do this before building your project.

![](https://github.com/dledge/ADI002-SAM-Framework/blob/master/Documentation/Automotive%20diagram.PNG)

The image below shows how the various components connect together.

![](https://github.com/dledge/ADI002-SAM-Framework/blob/master/Documentation/Automotive%20block%20diagram.PNG)
