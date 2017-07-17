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
