#include <stdbool.h>
#include <stdint.h>

/*
 * This structure lives in L2 memory where the MCAPI memory normally live
 * It's important to ensure that MCAPI is not enabled if you are using this
 * simpler approach for multi-core communications.  See the description in
 * the .c file for more information.
 *
 * This file is included in each of the three projects.  If a new variable /
 * field is added to this structure, it will be available on all three cores.
 */

typedef struct {

	// Functionality to move audio around
	float Core_1_Audio_In_L[AUDIO_BLOCK_SIZE];
	float Core_1_Audio_In_R[AUDIO_BLOCK_SIZE];
	float Core_1_Audio_Out_L[AUDIO_BLOCK_SIZE];
	float Core_1_Audio_Out_R[AUDIO_BLOCK_SIZE];

	float Core_2_Audio_In_L[AUDIO_BLOCK_SIZE];
	float Core_2_Audio_In_R[AUDIO_BLOCK_SIZE];
	float Core_2_Audio_Out_L[AUDIO_BLOCK_SIZE];
	float Core_2_Audio_Out_R[AUDIO_BLOCK_SIZE];

	uint16_t audio_block_size;
	uint16_t audio_channel_count;

	float sharc_core1_cpuload;
	float sharc_core2_cpuload;
	float audioLevelDb;

	bool SHARC1_LED_status;
	bool SHARC2_LED_status;

	bool SAM_PB_1_Pressed;
	bool SAM_PB_2_Pressed;

 // If the DIY Guitar / MIDI board is installed on the SAM board, expose
 // additional functionality.
#ifdef __DIY_DAUGHTER_BOARD__
	bool DIY_PB_1_Pressed;
	bool DIY_PB_2_Pressed;
	bool DIY_PB_3_Pressed;

	float DIY_Pot_1_Val;
	float DIY_Pot_2_Val;
	float DIY_Pot_3_Val;
#endif

} sMultiCoreAudioCtrl;

extern sMultiCoreAudioCtrl * multiCoreAudioCtrl;
bool checkSharedMemoryStructureSizes(void);
