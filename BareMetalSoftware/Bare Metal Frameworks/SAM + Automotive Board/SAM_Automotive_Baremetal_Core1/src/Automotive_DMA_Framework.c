/* 
This is a basic double-buffered framework to move audio between the SHARC core
and the ADCs / DACs
*/


#include "Automotive_DMA_Framework.h"

// Set up double buffered DMA descriptors
SPORT_DMA_DESC_int TX_DESC_LIST_0_SPT;
SPORT_DMA_DESC_int TX_DESC_LIST_1_SPT;
SPORT_DMA_DESC_int RX_DESC_LIST_0_SPT;
SPORT_DMA_DESC_int RX_DESC_LIST_1_SPT;


// Fixed-point (raw ADC/DAC data) DMA buffers for ping-pong / double-buffered DMA
int section("seg_dmda_nw") SPR_RX_0_Buffer[ADAU1452_SLOTS*AUDIO_BLOCK_SIZE] = {0};
int section("seg_dmda_nw") SPR_RX_1_Buffer[ADAU1452_SLOTS*AUDIO_BLOCK_SIZE] = {0};

int section("seg_dmda_nw") SPR_TX_0_Buffer[ADAU1452_SLOTS*AUDIO_BLOCK_SIZE] = {0};
int section("seg_dmda_nw") SPR_TX_1_Buffer[ADAU1452_SLOTS*AUDIO_BLOCK_SIZE] = {0};

// Floating-point buffers that we will process / operate on
float AudioChannels_In[ADAU1452_SLOTS*AUDIO_BLOCK_SIZE];
float AudioChannels_Out[ADAU1452_SLOTS*AUDIO_BLOCK_SIZE] = {0};

float * AudioChannel_0_Left_In  = AudioChannels_In + AUDIO_BLOCK_SIZE*0;
float * AudioChannel_0_Right_In = AudioChannels_In + AUDIO_BLOCK_SIZE*1;
float * AudioChannel_1_Left_In  = AudioChannels_In + AUDIO_BLOCK_SIZE*2;
float * AudioChannel_1_Right_In = AudioChannels_In + AUDIO_BLOCK_SIZE*3;
float * AudioChannel_2_Left_In  = AudioChannels_In + AUDIO_BLOCK_SIZE*4;
float * AudioChannel_2_Right_In = AudioChannels_In + AUDIO_BLOCK_SIZE*5;
float * AudioChannel_3_Left_In  = AudioChannels_In + AUDIO_BLOCK_SIZE*6;
float * AudioChannel_3_Right_In = AudioChannels_In + AUDIO_BLOCK_SIZE*7;

/*
 * There are only 8 channels of audio input on the automotive board; however
 * the ADAU1452 can route other channels to the remaining 8 TDM slots such
 * as pre-processed audio from the 8 ADC channels.
 */
float * AudioChannel_4_Left_In  = AudioChannels_In + AUDIO_BLOCK_SIZE*8;
float * AudioChannel_4_Right_In = AudioChannels_In + AUDIO_BLOCK_SIZE*9;
float * AudioChannel_5_Left_In  = AudioChannels_In + AUDIO_BLOCK_SIZE*10;
float * AudioChannel_5_Right_In = AudioChannels_In + AUDIO_BLOCK_SIZE*11;
float * AudioChannel_6_Left_In  = AudioChannels_In + AUDIO_BLOCK_SIZE*12;
float * AudioChannel_6_Right_In = AudioChannels_In + AUDIO_BLOCK_SIZE*13;
float * AudioChannel_7_Left_In  = AudioChannels_In + AUDIO_BLOCK_SIZE*14;
float * AudioChannel_7_Right_In = AudioChannels_In + AUDIO_BLOCK_SIZE*15;

/*
 * The output channels correspond to the 16 DAC channels on the AD1966
 */
float * AudioChannel_0_Left_Out  = AudioChannels_Out + AUDIO_BLOCK_SIZE*0;
float * AudioChannel_0_Right_Out = AudioChannels_Out + AUDIO_BLOCK_SIZE*1;
float * AudioChannel_1_Left_Out  = AudioChannels_Out + AUDIO_BLOCK_SIZE*2;
float * AudioChannel_1_Right_Out = AudioChannels_Out + AUDIO_BLOCK_SIZE*3;
float * AudioChannel_2_Left_Out  = AudioChannels_Out + AUDIO_BLOCK_SIZE*4;
float * AudioChannel_2_Right_Out = AudioChannels_Out + AUDIO_BLOCK_SIZE*5;
float * AudioChannel_3_Left_Out  = AudioChannels_Out + AUDIO_BLOCK_SIZE*6;
float * AudioChannel_3_Right_Out = AudioChannels_Out + AUDIO_BLOCK_SIZE*7;
float * AudioChannel_4_Left_Out  = AudioChannels_Out + AUDIO_BLOCK_SIZE*8;
float * AudioChannel_4_Right_Out = AudioChannels_Out + AUDIO_BLOCK_SIZE*9;
float * AudioChannel_5_Left_Out  = AudioChannels_Out + AUDIO_BLOCK_SIZE*10;
float * AudioChannel_5_Right_Out = AudioChannels_Out + AUDIO_BLOCK_SIZE*11;
float * AudioChannel_6_Left_Out  = AudioChannels_Out + AUDIO_BLOCK_SIZE*12;
float * AudioChannel_6_Right_Out = AudioChannels_Out + AUDIO_BLOCK_SIZE*13;
float * AudioChannel_7_Left_Out  = AudioChannels_Out + AUDIO_BLOCK_SIZE*14;
float * AudioChannel_7_Right_Out = AudioChannels_Out + AUDIO_BLOCK_SIZE*15;

float * ADAU1977_Mic_In0 = AudioChannels_In + AUDIO_BLOCK_SIZE*0;
float * ADAU1977_Mic_In1 = AudioChannels_In + AUDIO_BLOCK_SIZE*1;
float * ADAU1977_Mic_In2 = AudioChannels_In + AUDIO_BLOCK_SIZE*2;
float * ADAU1977_Mic_In3 = AudioChannels_In + AUDIO_BLOCK_SIZE*3;
float * ADAU1979_Ch0     = AudioChannels_In + AUDIO_BLOCK_SIZE*4;
float * ADAU1979_Ch1     = AudioChannels_In + AUDIO_BLOCK_SIZE*5;
float * ADAU1979_Ch2     = AudioChannels_In + AUDIO_BLOCK_SIZE*6;
float * ADAU1979_Ch3     = AudioChannels_In + AUDIO_BLOCK_SIZE*7;

float * ADAU1979_Jack_In_Left  = AudioChannels_In + AUDIO_BLOCK_SIZE*4;
float * ADAU1979_Jack_In_Right = AudioChannels_In + AUDIO_BLOCK_SIZE*5;

float * ADAU1966_Jack_Out_P19_Left  = AudioChannels_Out + AUDIO_BLOCK_SIZE*0;
float * ADAU1966_Jack_Out_P19_Right = AudioChannels_Out + AUDIO_BLOCK_SIZE*1;
float * ADAU1966_Jack_Out_P20_Left  = AudioChannels_Out + AUDIO_BLOCK_SIZE*2;
float * ADAU1966_Jack_Out_P20_Right = AudioChannels_Out + AUDIO_BLOCK_SIZE*3;


// Constants used for scaling between fixed and floating point
#define SCALAR_0dB 	 (2147483648.0) 	// 2^31
#define SCALAR_n6dB  (1073741824.0)		// 2^30
#define SCALAR_n12dB (536870912.0)		// 2^29

#define SCALAR_0dB_RECIP   (1/SCALAR_0dB)
#define SCALAR_n6dB_RECIP  (1/SCALAR_n6dB)
#define SCALAR_n12dB_RECIP (1/SCALAR_n12dB)



volatile uint32_t dmaDescriptor_tx_0, dmaDescriptor_tx_1, dmaDescriptor_rx_0, dmaDescriptor_rx_1;


// DMA handler is called each time the DMA controller loads a block of audio data (N channels x M samples)
void DMA_Handler_ADAU1452(void)
{
	int i,j;

	// Clear DMA interrupt
	*pREG_DMA10_STAT|=BITM_DMA_STAT_IRQDONE;

	// Set for no headroom - just need to be careful with the audio processing
	// not to exceed +/- 1.0
	float scalar = SCALAR_0dB;
	float scalarRecip = SCALAR_0dB_RECIP;

	if (TX_DESC_LIST_0_SPT.Next_Desc != *pREG_DMA12_DSCPTR_NXT)
	{
		for (i=0;i<ADAU1452_SLOTS*AUDIO_BLOCK_SIZE;i++)
		{
			SPR_TX_0_Buffer[i] = (int) (AudioChannels_Out[i] * scalar);
		}
		for (i=0;i<ADAU1452_SLOTS*AUDIO_BLOCK_SIZE;i++)
		{
			AudioChannels_In[i] = ((float) (SPR_RX_0_Buffer[i])) * scalarRecip;
		}
	}
	else
	{
		for (i=0;i<ADAU1452_SLOTS*AUDIO_BLOCK_SIZE;i++)
		{
			SPR_TX_1_Buffer[i] = (int) (AudioChannels_Out[i] * scalar);
		}
		for (i=0;i<ADAU1452_SLOTS*AUDIO_BLOCK_SIZE;i++)
		{
			AudioChannels_In[i] = ((float) (SPR_RX_1_Buffer[i])) * scalarRecip;
		}
	}

	// Call audio processing callback function
	processAudioCallback( );
}





void ADAU1452_DMA_Framework_Start() {

    /* PADS0 DAI0 and DAI1 Port Input Enable Control Register */
    *pREG_PADS0_DAI0_IE = (unsigned int) 0x001FFFFE;
    *pREG_PADS0_DAI1_IE = (unsigned int) 0x001FFFFE;

    *pREG_SPU0_SECUREP74=0x3;	// SPORT 4A DMA
    *pREG_SPU0_SECUREP76=0x3;	// SPORT 5A DMA

	// Configuration for ADAU1452
	volatile uint32_t * pREG_DMA_TX_DSCPTR_NXT = (volatile uint32_t *) pREG_DMA12_DSCPTR_NXT;
	volatile uint32_t * pREG_DMA_RX_DSCPTR_NXT = (volatile uint32_t *) pREG_DMA10_DSCPTR_NXT;

	volatile uint32_t * pREG_DMA_TX_CFG = pREG_DMA12_CFG;
	volatile uint32_t * pREG_DMA_RX_CFG = pREG_DMA10_CFG;

	volatile uint32_t * pREG_SPORT_TX_CTL  = pREG_SPORT5_CTL_A;
	volatile uint32_t * pREG_SPORT_TX_MCTL = pREG_SPORT5_MCTL_A;
	volatile uint32_t * pREG_SPORT_TX_CS0  = pREG_SPORT5_CS0_A;
	volatile uint32_t * pREG_SPORT_RX_CTL  = pREG_SPORT4_CTL_A;
	volatile uint32_t * pREG_SPORT_RX_MCTL = pREG_SPORT4_MCTL_A;
	volatile uint32_t * pREG_SPORT_RX_CS0  = pREG_SPORT4_CS0_A;

	SPORT_Type TX_SPORT_TYPE = SPORT_PRIMARY;
	SPORT_Type RX_SPORT_TYPE = SPORT_PRIMARY;

	uint8_t INTR_SPORT_DMA = INTR_SPORT4_A_DMA;

	int DMA_TX_Config=(		((0		<< BITP_DMA_CFG_WNR  ) & BITM_DMA_CFG_WNR  ) |	  //SPORT write data (memory read) to DAC
			                ((1 	<< BITP_DMA_CFG_TWOD ) & BITM_DMA_CFG_TWOD ) |
	   						((0 	<< BITP_DMA_CFG_INT  ) & BITM_DMA_CFG_INT  ) |
	   						((MSIZE 	<< BITP_DMA_CFG_MSIZE) & BITM_DMA_CFG_MSIZE) |	//4 bytes - memory transfer size
	   						((PSIZE 	<< BITP_DMA_CFG_PSIZE) & BITM_DMA_CFG_PSIZE) |	//4 bytes - peripheral transfer size
	   						((0	 	<< BITP_DMA_CFG_SYNC ) & BITM_DMA_CFG_SYNC ) |
	   						((0	<< BITP_DMA_CFG_TWAIT) & BITM_DMA_CFG_TWAIT) |
	   						((0	<< BITP_DMA_CFG_TRIG ) & BITM_DMA_CFG_TRIG ) |
	   						ENUM_DMA_CFG_FETCH02);


	int DMA_RX_Config=(		((1		<< BITP_DMA_CFG_WNR  ) & BITM_DMA_CFG_WNR  ) |		//SPORT receives data (memory write) from ADC
							((1 	<< BITP_DMA_CFG_TWOD ) & BITM_DMA_CFG_TWOD ) |
		   					((2 	<< BITP_DMA_CFG_INT  ) & BITM_DMA_CFG_INT  ) |		//enable interrupt (on YCNT expired for 2D-DMA) upon buffer read complete
		   					((MSIZE 	<< BITP_DMA_CFG_MSIZE) & BITM_DMA_CFG_MSIZE) |
		   					((PSIZE 	<< BITP_DMA_CFG_PSIZE) & BITM_DMA_CFG_PSIZE) |
		   					((0	 	<< BITP_DMA_CFG_SYNC ) & BITM_DMA_CFG_SYNC ) |
		   					((0	<< BITP_DMA_CFG_TWAIT) & BITM_DMA_CFG_TWAIT) |
		   					((1	<< BITP_DMA_CFG_TRIG ) & BITM_DMA_CFG_TRIG ) |			//enable trigger
		   					ENUM_DMA_CFG_FETCH02);										//descriptor "list" mode


	dmaDescriptor_tx_0 =(uint32_t)&TX_DESC_LIST_0_SPT | MP_OFFSET ; // TX data - was 0
	dmaDescriptor_tx_1 =(uint32_t)&TX_DESC_LIST_1_SPT | MP_OFFSET ; // TX data - was 2

	dmaDescriptor_rx_0 =(uint32_t)&RX_DESC_LIST_0_SPT | MP_OFFSET ; // RX data - was 1
	dmaDescriptor_rx_1 =(uint32_t)&RX_DESC_LIST_1_SPT | MP_OFFSET ; // RX data - was 3

	TX_DESC_LIST_0_SPT.Next_Desc  = (void *) dmaDescriptor_tx_1;
	TX_DESC_LIST_0_SPT.Start_ADDR = (int32_t *) (((uint32_t) SPR_TX_0_Buffer*4) | MP_OFFSET);

	TX_DESC_LIST_1_SPT.Next_Desc  = (void *) dmaDescriptor_tx_0;
	TX_DESC_LIST_1_SPT.Start_ADDR = (int32_t *) (((uint32_t) SPR_TX_1_Buffer*4) | MP_OFFSET);

	RX_DESC_LIST_0_SPT.Next_Desc  = (void *) dmaDescriptor_rx_1;
	RX_DESC_LIST_0_SPT.Start_ADDR = (int32_t *) (((uint32_t) SPR_RX_0_Buffer*4) | MP_OFFSET);

	RX_DESC_LIST_1_SPT.Next_Desc  = (void *) dmaDescriptor_rx_0;
	RX_DESC_LIST_1_SPT.Start_ADDR = (int32_t *) (((uint32_t) SPR_RX_1_Buffer*4) | MP_OFFSET);

	*pREG_DMA_TX_DSCPTR_NXT = (uint32_t) &TX_DESC_LIST_0_SPT | MP_OFFSET;
	*pREG_DMA_RX_DSCPTR_NXT = (uint32_t) &RX_DESC_LIST_0_SPT | MP_OFFSET;

	volatile uint32_t * pREG_DMA_TX_XCNT = pREG_DMA12_XCNT;
	volatile uint32_t * pREG_DMA_RX_XCNT = pREG_DMA10_XCNT;
	volatile uint32_t * pREG_DMA_TX_YCNT = pREG_DMA12_YCNT;
	volatile uint32_t * pREG_DMA_RX_YCNT = pREG_DMA10_YCNT;

	volatile int32_t * pREG_DMA_TX_XMOD = pREG_DMA12_XMOD;
	volatile int32_t * pREG_DMA_RX_XMOD = pREG_DMA10_XMOD;
	volatile int32_t * pREG_DMA_TX_YMOD = pREG_DMA12_YMOD;
	volatile int32_t * pREG_DMA_RX_YMOD = pREG_DMA10_YMOD;

	*pREG_DMA_TX_XCNT = ADAU1452_SLOTS;
	*pREG_DMA_RX_XCNT = ADAU1452_SLOTS;

	*pREG_DMA_TX_YCNT = AUDIO_BLOCK_SIZE;
	*pREG_DMA_RX_YCNT = AUDIO_BLOCK_SIZE;

	// specified in bytes
	*pREG_DMA_TX_XMOD = ADAU1452_XMOD;
	*pREG_DMA_RX_XMOD = ADAU1452_XMOD;

	*pREG_DMA_TX_YMOD = ADAU1452_YMOD;
	*pREG_DMA_RX_YMOD = ADAU1452_YMOD;

	*pREG_DMA_TX_CFG = DMA_TX_Config | (4 << BITP_DMA_CFG_FLOW) ;  //descriptor list mode = 4
	*pREG_DMA_RX_CFG = DMA_RX_Config | (4 << BITP_DMA_CFG_FLOW) ;

	/* DAC Data (Transmit)	 */
    *pREG_SPORT_TX_CTL  = 0x0200b1F2;	// Opmode = 0 (DSP style TDM), DIFS
  	*pREG_SPORT_TX_MCTL = (ADAU1452_SLOTS-1) << 8 | 0x11;   // (DSP style TDM)
	*pREG_SPORT_TX_CS0  = 0x0000FFFF;   // 16 DAC channels

	/* ADC Data (Receive) */
    *pREG_SPORT_RX_CTL  = 0x0000b1F2;// Opmode = 0 (TDM style TDM)
	*pREG_SPORT_RX_MCTL = (ADAU1452_SLOTS-1) << 8 | 0x11;   // (DSP style TDM)
	*pREG_SPORT_RX_CS0  = 0x0000FFFF;   // 16 ADC channels

    // Set up interrupt handler for RX Sport
	adi_int_InstallHandler(INTR_SPORT_DMA, (ADI_INT_HANDLER_PTR) DMA_Handler_ADAU1452, NULL, true);

	//Enable Sport and Associated DMA

	// Enable TX DMA and Primary side of TX SPORT
	*pREG_DMA_TX_CFG    &= (0xffffffff ^ (0x1<<BITP_DMA_CFG_EN));  // Enable SPORT DMA
	*pREG_DMA_TX_CFG    |= BITM_DMA_CFG_EN;
	*pREG_SPORT_TX_CTL  &= (0xffffffff ^((0x1<<BITP_SPORT_CTL_SPENSEC)|(0x1 << BITP_SPORT_CTL_SPENPRI)));
	*pREG_SPORT_TX_CTL  |= ((((uint8_t) TX_SPORT_TYPE)) << BITP_SPORT_CTL_SPENSEC)|
						   (((!(uint8_t)TX_SPORT_TYPE)) << BITP_SPORT_CTL_SPENPRI);

	// Enable RX DMA and Primary side of RX SPORT
	*pREG_DMA_RX_CFG &= (0xffffffff ^ (0x1<<BITP_DMA_CFG_EN));  // Enable SPORT DMA
	*pREG_DMA_RX_CFG |= BITM_DMA_CFG_EN;
	*pREG_SPORT_RX_CTL &= (0xffffffff ^((0x1<<BITP_SPORT_CTL_SPENSEC)|(0x1 << BITP_SPORT_CTL_SPENPRI)));
	*pREG_SPORT_RX_CTL  |= ((((uint8_t) RX_SPORT_TYPE))  << BITP_SPORT_CTL_SPENSEC)|
						   (((!(uint8_t)RX_SPORT_TYPE)) << BITP_SPORT_CTL_SPENPRI);


}



