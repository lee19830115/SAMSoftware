/* 
This is a basic double-buffered framework to move audio between the SHARC core
and the ADAU1761.  The ADAU1761 supports 8 channels hence there are 4 stereo
pairs or 8 channels of input and output data.

WiringSHARC and this accompanying framework was written by Dan Ledger / Run Jump Labs

Visit the Github page for documentation, example code, issues, etc.
https://github.com/dledge/wiringsharc

Copyright (c) 2017 Analog Devices.  All rights reserved.
*/

#ifndef _ADAU1761_DMA_FRAMEWORK
#define _ADAU1761_DMA_FRAMEWORK

#include <stddef.h>
#include <math.h>

#include <sys/platform.h>
#include <sys/adi_core.h>
#include <services/int/adi_int.h>
#include <defSC589.h>
#include <cdefSC589.h>
#include <sruSC589.h>
#include "adi_initialize.h"

// Process Audio in-place
//#define INPLACE_AUDIO_PROCESSING	true

// DMA Constants
#define MSIZE (2)
#define PSIZE (2)

#define SLEN 23		// 24 bit data
#define ADAU1761_SLOTS 		(8)		// 8 channels of data

// Note: AUDIO_BLOCK_SIZE is set in project->settings
#define COUNT (AUDIO_BLOCK_SIZE*ADAU1761_SLOTS)	// total data per frame
#define ADAU1761_YMOD (-(COUNT*4-AUDIO_BLOCK_SIZE*4)+4)	// deinterleave data with DMA controller
#define ADAU1761_XMOD (AUDIO_BLOCK_SIZE*4)

#define MP_OFFSET	(uint32_t)0x28000000
#define MP_OFFSET1	0x28000000

#define Sport_DMA_enable(dmaID,enable)\
         	*pREG_DMA##dmaID##_CFG &=(0xffffffff ^ (0x1<<BITP_DMA_CFG_EN));\
         	*pREG_DMA##dmaID##_CFG |=BITM_DMA_CFG_EN;

#define Sport_enable(deviceID,hSportID,secEnable,priEnable)\
		  *pREG_SPORT##deviceID##_CTL_##hSportID &= (0xffffffff ^((0x1<<BITP_SPORT_CTL_SPENSEC)|(0x1 << BITP_SPORT_CTL_SPENPRI)));\
		  *pREG_SPORT##deviceID##_CTL_##hSportID |=(secEnable<<BITP_SPORT_CTL_SPENSEC)|(priEnable << BITP_SPORT_CTL_SPENPRI);

// Chained DMA descriptor
typedef struct
  {
 	 void 	 	* Next_Desc;
 	 int32_t 	* Start_ADDR;
  } SPORT_DMA_DESC_int;

#ifdef __cplusplus
extern "C"{
#endif

// Floating point audio buffers
extern float * AudioChannel_0_Left_In;
extern float * AudioChannel_0_Right_In;
extern float * AudioChannel_1_Left_In;
extern float * AudioChannel_1_Right_In;
extern float * AudioChannel_2_Left_In;
extern float * AudioChannel_2_Right_In;
extern float * AudioChannel_3_Left_In;
extern float * AudioChannel_3_Right_In;

extern float * AudioChannel_0_Left_Out;
extern float * AudioChannel_0_Right_Out;
extern float * AudioChannel_1_Left_Out;
extern float * AudioChannel_1_Right_Out;
extern float * AudioChannel_2_Left_Out;
extern float * AudioChannel_2_Right_Out;
extern float * AudioChannel_3_Left_Out;
extern float * AudioChannel_3_Right_Out;

void ADAU1761_Start( void );
void processAudioCallback( void );

#ifdef __cplusplus
}
#endif

#endif	//_ADAU1761_DMA_FRAMEWORK
