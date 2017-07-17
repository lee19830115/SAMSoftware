/*
 * These two files (.c/.h) provide a simple means of sharing data between the
 * three cores without relying on a complex framework like MCAPI.  This approach
 * uses the default LDF file which is nice since no modifications are necessary
 * from the "stock" setup.  However, this approach uses memory that is allocated
 * for MCAPI so it is important that the MCAPI plugin is not used while this
 * approach is being used.
 *
 * In the default LDF file, there is a block of memory that begins at address
 * 0x20080000 which all three cores have write access to.  This approach
 * relies on a simple C structure that is declared and manually located at
 * this address.  Since we are not relying on the linker to place this memory
 * structure, it's important to ensure we do not overflow this segment, which
 * has a length of 0x1000 bytes.  The function called
 * checkSharedMemoryStructureSizes() will check the size of the structure
 * and return false if the structure has exceeded this size.  This should be
 * called by one of the cores at startup.
 */

#include "multicore_audio_simple.h"

// Create an instance of our structure that both cores can access in L2 Block 0
sMultiCoreAudioCtrl * multiCoreAudioCtrl = (sMultiCoreAudioCtrl *) 0x20080000;


/*
 * Since we are manually managing the memory in these shared memory segments,
 * we need to be sure that size of the structure does not exceed the size of the
 * segment it is going into.
 */
bool checkSharedMemoryStructureSizes() {
	if (sizeof(sMultiCoreAudioCtrl) > 0x1000) return false;
	return true;
}
