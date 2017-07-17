#ifndef _AUTOMOTIVE_DMA_FRAMEWORK
#define _AUTOMOTIVE_DMA_FRAMEWORK

#include <stddef.h>
#include <math.h>

//#include <sys/platform.h>
//#include <sys/adi_core.h>
#include <services/int/adi_int.h>
#include <defSC589.h>
#include <cdefSC589.h>
#include <sruSC589.h>
#include "adi_initialize.h"

// DMA Constants
#define MSIZE (2)
#define PSIZE (2)

#define SLEN 23		// 24 bit data
#define ADAU1452_SLOTS 		(16)		// Number of TDM channels

#define COUNT (AUDIO_BLOCK_SIZE*ADAU1452_SLOTS)	// total data per frame
#define ADAU1452_YMOD (-(COUNT*4-AUDIO_BLOCK_SIZE*4)+4)	// de-interleave data with DMA controller
#define ADAU1452_XMOD (AUDIO_BLOCK_SIZE*4)

#define MP_OFFSET	(uint32_t)0x28000000
#define MP_OFFSET1	0x28000000

#define Sport_DMA_enable(dmaID,enable)\
         	*pREG_DMA##dmaID##_CFG &=(0xffffffff ^ (0x1<<BITP_DMA_CFG_EN));\
         	*pREG_DMA##dmaID##_CFG |=BITM_DMA_CFG_EN;

#define Sport_enable(deviceID,hSportID,secEnable,priEnable)\
		  *pREG_SPORT##deviceID##_CTL_##hSportID &= (0xffffffff ^((0x1<<BITP_SPORT_CTL_SPENSEC)|(0x1 << BITP_SPORT_CTL_SPENPRI)));\
		  *pREG_SPORT##deviceID##_CTL_##hSportID |=(secEnable<<BITP_SPORT_CTL_SPENSEC)|(priEnable << BITP_SPORT_CTL_SPENPRI);

// Chained DMA descriptor
typedef volatile struct
  {
 	 void 	 	* Next_Desc;
 	 int32_t 	* Start_ADDR;
  } SPORT_DMA_DESC_int;

typedef enum {
  	SPORT_PRIMARY=(0),
  	SPORT_SECONDARY=(1)
  } SPORT_Type;

#ifdef __cplusplus
extern "C"{
#endif

extern SPORT_DMA_DESC_int TX_DESC_LIST_0_SPT;
extern SPORT_DMA_DESC_int TX_DESC_LIST_1_SPT;
extern SPORT_DMA_DESC_int RX_DESC_LIST_0_SPT;
extern SPORT_DMA_DESC_int RX_DESC_LIST_1_SPT;

extern float * AudioChannel_0_Left_In;
extern float * AudioChannel_0_Right_In;
extern float * AudioChannel_1_Left_In;
extern float * AudioChannel_1_Right_In;
extern float * AudioChannel_2_Left_In;
extern float * AudioChannel_2_Right_In;
extern float * AudioChannel_3_Left_In;
extern float * AudioChannel_3_Right_In;
extern float * AudioChannel_4_Left_In;
extern float * AudioChannel_4_Right_In;
extern float * AudioChannel_5_Left_In;
extern float * AudioChannel_5_Right_In;
extern float * AudioChannel_6_Left_In;
extern float * AudioChannel_6_Right_In;
extern float * AudioChannel_7_Left_In;
extern float * AudioChannel_7_Right_In;

extern float * AudioChannel_0_Left_Out;
extern float * AudioChannel_0_Right_Out;
extern float * AudioChannel_1_Left_Out;
extern float * AudioChannel_1_Right_Out;
extern float * AudioChannel_2_Left_Out;
extern float * AudioChannel_2_Right_Out;
extern float * AudioChannel_3_Left_Out;
extern float * AudioChannel_3_Right_Out;
extern float * AudioChannel_4_Left_Out;
extern float * AudioChannel_4_Right_Out;
extern float * AudioChannel_5_Left_Out;
extern float * AudioChannel_5_Right_Out;
extern float * AudioChannel_6_Left_Out;
extern float * AudioChannel_6_Right_Out;
extern float * AudioChannel_7_Left_Out;
extern float * AudioChannel_7_Right_Out;

extern float * ADAU1977_Mic_In0;
extern float * ADAU1977_Mic_In1;
extern float * ADAU1977_Mic_In2;
extern float * ADAU1977_Mic_In3;

extern float * ADAU1979_Jack_In_Left;
extern float * ADAU1979_Jack_In_Right;
extern float * ADAU1979_Ch0;
extern float * ADAU1979_Ch1;
extern float * ADAU1979_Ch2;
extern float * ADAU1979_Ch3;

extern float * ADAU1966_Jack_Out_P19_Left;
extern float * ADAU1966_Jack_Out_P19_Right;
extern float * ADAU1966_Jack_Out_P20_Left;
extern float * ADAU1966_Jack_Out_P20_Right;


void 	ADAU1452_DMA_Framework_Start( void );
void 	processAudioCallback( void );

#ifdef __cplusplus
}
#endif

#endif	//_AUTOMOTIVE_DMA_FRAMEWORK
