/* 
This is a basic double-buffered framework to move audio between the SHARC core
and the ADAU1761.  The ADAU1761 supports 8 channels hence there are 4 stereo
pairs or 8 channels of input and output data.

WiringSHARC and this accompanying framework was written by Dan Ledger / Run Jump Labs

Visit the Github page for documentation, example code, issues, etc.
https://github.com/dledge/wiringsharc

Copyright (c) 2017 Analog Devices.  All rights reserved.
*/

#include "ADAU1761_DMA_Framework.h"

// Set up double buffered DMA descriptors
SPORT_DMA_DESC_int TX_DESC_LIST_0_SPT;
SPORT_DMA_DESC_int TX_DESC_LIST_1_SPT;
SPORT_DMA_DESC_int RX_DESC_LIST_0_SPT;
SPORT_DMA_DESC_int RX_DESC_LIST_1_SPT;

// Fixed-point (raw ADC/DAC data) DMA buffers for ping-pong / double-buffered DMA
int section("seg_dmda_nw") SPR_RX_0_Buffer[ADAU1761_SLOTS*AUDIO_BLOCK_SIZE] = {0};
int section("seg_dmda_nw") SPR_RX_1_Buffer[ADAU1761_SLOTS*AUDIO_BLOCK_SIZE] = {0};

int section("seg_dmda_nw") SPR_TX_0_Buffer[ADAU1761_SLOTS*AUDIO_BLOCK_SIZE] = {0};
int section("seg_dmda_nw") SPR_TX_1_Buffer[ADAU1761_SLOTS*AUDIO_BLOCK_SIZE] = {0};


// Floating-point buffers that we will process / operate on
float AudioChannels_In[ADAU1761_SLOTS*AUDIO_BLOCK_SIZE];
float AudioChannels_Out[ADAU1761_SLOTS*AUDIO_BLOCK_SIZE] = {0};

/*
 * This framework sets up an 8 channel TDM link to the ADAU1761.  While the
 * ADAU1761 has a stereo ADC and a stereo DAC, the remaining 6 channels can
 * be used for pre-processed audio channels.
 */

// These first two channels contain the audio from the ADCs
float * AudioChannel_0_Left_In  = AudioChannels_In + AUDIO_BLOCK_SIZE*0;
float * AudioChannel_0_Right_In = AudioChannels_In + AUDIO_BLOCK_SIZE*1;

// These remaining channels can be used for other pre-processed audio on the '1761
float * AudioChannel_1_Left_In  = AudioChannels_In + AUDIO_BLOCK_SIZE*2;
float * AudioChannel_1_Right_In = AudioChannels_In + AUDIO_BLOCK_SIZE*3;
float * AudioChannel_2_Left_In  = AudioChannels_In + AUDIO_BLOCK_SIZE*4;
float * AudioChannel_2_Right_In = AudioChannels_In + AUDIO_BLOCK_SIZE*5;
float * AudioChannel_3_Left_In  = AudioChannels_In + AUDIO_BLOCK_SIZE*6;
float * AudioChannel_3_Right_In = AudioChannels_In + AUDIO_BLOCK_SIZE*7;

// These first two channels contain the audio for the DACs
float * AudioChannel_0_Left_Out  = AudioChannels_Out + AUDIO_BLOCK_SIZE*0;
float * AudioChannel_0_Right_Out = AudioChannels_Out + AUDIO_BLOCK_SIZE*1;

// These remaining channels can be used to send audio for post processing on '1761
float * AudioChannel_1_Left_Out  = AudioChannels_Out + AUDIO_BLOCK_SIZE*2;
float * AudioChannel_1_Right_Out = AudioChannels_Out + AUDIO_BLOCK_SIZE*3;
float * AudioChannel_2_Left_Out  = AudioChannels_Out + AUDIO_BLOCK_SIZE*4;
float * AudioChannel_2_Right_Out = AudioChannels_Out + AUDIO_BLOCK_SIZE*5;
float * AudioChannel_3_Left_Out  = AudioChannels_Out + AUDIO_BLOCK_SIZE*6;
float * AudioChannel_3_Right_Out = AudioChannels_Out + AUDIO_BLOCK_SIZE*7;



// Constants used for scaling between fixed and floating point
#define SCALAR_0dB 	 (2147483648.0) 	// 2^31
#define SCALAR_n6dB  (1073741824.0)		// 2^30
#define SCALAR_n12dB (536870912.0)		// 2^29

#define SCALAR_0dB_RECIP   (1/SCALAR_0dB)
#define SCALAR_n6dB_RECIP  (1/SCALAR_n6dB)
#define SCALAR_n12dB_RECIP (1/SCALAR_n12dB)

float Audio_Input_Channel_Levels[ADAU1761_SLOTS] = {0};

// DMA handler is called each time the DMA controller loads a block of audio data (N channels x M samples)
void DMA_Handler_ADAU1761(void)
{
	int i,j;
	float sample;

	// Clear DMA interrupt
	*pREG_DMA1_STAT |= BITM_DMA_STAT_IRQDONE;

	// Set for no headroom - just need to be careful with the audio processing
	// not to exceed +/- 1.0
	float scalar = SCALAR_0dB;
	float scalarRecip = SCALAR_0dB_RECIP;

	for (i=0;i<ADAU1761_SLOTS;i++) {
		Audio_Input_Channel_Levels[i] = 0.0;
	}

	if(TX_DESC_LIST_0_SPT.Next_Desc != *pREG_DMA0_DSCPTR_NXT)
	{
		for (i=0;i<ADAU1761_SLOTS*AUDIO_BLOCK_SIZE;i++)
				{
					SPR_TX_0_Buffer[i] = (int) (AudioChannels_Out[i] * scalar);
				}
				for (i=0;i<ADAU1761_SLOTS*AUDIO_BLOCK_SIZE;i++)
				{
					AudioChannels_In[i] = ((float) (SPR_RX_0_Buffer[i])) * scalarRecip;
				}
	}
	else
	{
		for (i=0;i<ADAU1761_SLOTS*AUDIO_BLOCK_SIZE;i++)
		{
			SPR_TX_1_Buffer[i] = (int) (AudioChannels_Out[i] * scalar);
		}
		for (i=0;i<ADAU1761_SLOTS*AUDIO_BLOCK_SIZE;i++)
		{
			AudioChannels_In[i] = ((float) (SPR_RX_1_Buffer[i])) * scalarRecip;
		}
	}

	for (i=0;i<ADAU1761_SLOTS;i++) {
		Audio_Input_Channel_Levels[i] = 20.0*log10f(Audio_Input_Channel_Levels[i]*(1.0/AUDIO_BLOCK_SIZE));
	}

	// Call audio processing callback function
	processAudioCallback( );
}


int dmaDescriptor_tx_0, dmaDescriptor_tx_1, dmaDescriptor_rx_0, dmaDescriptor_rx_1;

// Start this framework
void ADAU1761_Start() {

	// SPORT 0A = Transmit = DMA0
	// SPORT 0B = Receive = DMA1

    /* PADS0 DAI0 and DAI1 Port Input Enable Control Register */
    *pREG_PADS0_DAI0_IE = (unsigned int) 0x001FFFFE;
    *pREG_PADS0_DAI1_IE = (unsigned int) 0x001FFFFE;

    /* Enable SPU for DMAs */
	*pREG_SPU0_SECUREP66=0x3;	// SPORT 0A DMA0
    *pREG_SPU0_SECUREP67=0x3;	// SPORT 0B DMA1

	// Configuration for ADAU1761
	volatile uint32_t * pREG_DMA_TX_DSCPTR_NXT = (volatile uint32_t *) pREG_DMA0_DSCPTR_NXT;
	volatile uint32_t * pREG_DMA_RX_DSCPTR_NXT = (volatile uint32_t *) pREG_DMA1_DSCPTR_NXT;

	volatile uint32_t * pREG_DMA_TX_CFG = pREG_DMA0_CFG;
	volatile uint32_t * pREG_DMA_RX_CFG = pREG_DMA1_CFG;

	volatile uint32_t * pREG_SPORT_TX_CTL  = pREG_SPORT0_CTL_A;
	volatile uint32_t * pREG_SPORT_TX_MCTL = pREG_SPORT0_MCTL_A;
	volatile uint32_t * pREG_SPORT_TX_CS0  = pREG_SPORT0_CS0_A;

	volatile uint32_t * pREG_SPORT_RX_CTL  = pREG_SPORT0_CTL_B;
	volatile uint32_t * pREG_SPORT_RX_MCTL = pREG_SPORT0_MCTL_B;
	volatile uint32_t * pREG_SPORT_RX_CS0  = pREG_SPORT0_CS0_B;

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


	dmaDescriptor_tx_0 =(uint32_t)&TX_DESC_LIST_0_SPT | MP_OFFSET ; // TX data
	dmaDescriptor_tx_1 =(uint32_t)&TX_DESC_LIST_1_SPT | MP_OFFSET ; // TX data

	dmaDescriptor_rx_0 =(uint32_t)&RX_DESC_LIST_0_SPT | MP_OFFSET ; // RX data
	dmaDescriptor_rx_1 =(uint32_t)&RX_DESC_LIST_1_SPT | MP_OFFSET ; // RX data

	*pREG_DMA_TX_DSCPTR_NXT = (uint32_t)&TX_DESC_LIST_0_SPT | MP_OFFSET;
	*pREG_DMA_RX_DSCPTR_NXT = (uint32_t)&RX_DESC_LIST_0_SPT | MP_OFFSET;

	TX_DESC_LIST_0_SPT.Next_Desc  = (void *)dmaDescriptor_tx_1;
	TX_DESC_LIST_0_SPT.Start_ADDR = (int32_t *) (((uint32_t) SPR_TX_0_Buffer*4) | MP_OFFSET);

	TX_DESC_LIST_1_SPT.Next_Desc  = (void *)dmaDescriptor_tx_0;
	TX_DESC_LIST_1_SPT.Start_ADDR = (int32_t *) (((uint32_t) SPR_TX_1_Buffer*4) | MP_OFFSET);

	RX_DESC_LIST_0_SPT.Next_Desc  = (void *) dmaDescriptor_rx_1;
	RX_DESC_LIST_0_SPT.Start_ADDR = (int32_t *) (((uint32_t) SPR_RX_0_Buffer*4) | MP_OFFSET);

	RX_DESC_LIST_1_SPT.Next_Desc  = (void *) dmaDescriptor_rx_0;
	RX_DESC_LIST_1_SPT.Start_ADDR = (int32_t *) (((uint32_t) SPR_RX_1_Buffer*4) | MP_OFFSET);


	volatile uint32_t * pREG_DMA_TX_XCNT = pREG_DMA0_XCNT;
	volatile uint32_t * pREG_DMA_RX_XCNT = pREG_DMA1_XCNT;

	volatile uint32_t * pREG_DMA_TX_YCNT = pREG_DMA0_YCNT;
	volatile uint32_t * pREG_DMA_RX_YCNT = pREG_DMA1_YCNT;

	volatile int32_t * pREG_DMA_TX_XMOD = pREG_DMA0_XMOD;
	volatile int32_t * pREG_DMA_RX_XMOD = pREG_DMA1_XMOD;

	volatile int32_t * pREG_DMA_TX_YMOD = pREG_DMA0_YMOD;
	volatile int32_t * pREG_DMA_RX_YMOD = pREG_DMA1_YMOD;

	*pREG_DMA_TX_XCNT = ADAU1761_SLOTS;
	*pREG_DMA_RX_XCNT = ADAU1761_SLOTS;

	*pREG_DMA_TX_YCNT = AUDIO_BLOCK_SIZE;
	*pREG_DMA_RX_YCNT = AUDIO_BLOCK_SIZE;

	// specified in bytes
	*pREG_DMA_TX_XMOD = ADAU1761_XMOD;
	*pREG_DMA_RX_XMOD = ADAU1761_XMOD;

	*pREG_DMA_TX_YMOD = ADAU1761_YMOD;
	*pREG_DMA_RX_YMOD = ADAU1761_YMOD;

	*pREG_DMA_TX_CFG = DMA_TX_Config | (4 << BITP_DMA_CFG_FLOW) ;  //descriptor list mode = 4
	*pREG_DMA_RX_CFG = DMA_RX_Config | (4 << BITP_DMA_CFG_FLOW) ;


	/* DAC Data To ADAU1761 (Transmit)	 */
	*pREG_SPORT0_CTL_A  = 0x0200b1F2;	// 50% TDM
  	*pREG_SPORT0_MCTL_A = 0x00000711;   // TDM
	*pREG_SPORT0_CS0_A  = 0x000000FF;   // 8 DAC channels

	/* ADC Data From ADAU1761 (Receive) */
	*pREG_SPORT0_CTL_B  = 0x0000b1F2;	// 50% TDM
	*pREG_SPORT0_MCTL_B = 0x00000711;   // TDM
	*pREG_SPORT0_CS0_B  = 0x000000FF;   // 8 ADC channels


	   // Set up interrupt handler for SPORT0B (RX)
	adi_int_InstallHandler(INTR_SPORT0_B_DMA, (ADI_INT_HANDLER_PTR) DMA_Handler_ADAU1761, NULL, true);

	Sport_DMA_enable(0,1);
	Sport_enable(0,A,0,1);

	Sport_DMA_enable(1,1);
	Sport_enable(0,B,0,1);

}


