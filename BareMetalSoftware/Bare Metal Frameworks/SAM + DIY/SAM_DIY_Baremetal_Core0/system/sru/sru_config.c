/*
 **
 ** sru_config.c source file generated on July 12, 2017 at 09:36:01.	
 **
 ** Copyright (C) 2014-2017 Analog Devices Inc., All Rights Reserved.
 **
 ** This file is generated automatically based upon the options selected in 
 ** the SRU Configuration editor. Changes to the SRU configuration should
 ** be made by changing the appropriate options rather than editing this file.
 **
 ** Only registers with non-default values are written to this file.
 **
 */
 
#include <stdint.h>
#include <sys/platform.h>

int32_t adi_SRU_Init(void);

/*
 * Initialize the Signal Routing Unit
 */
int32_t adi_SRU_Init(void)
{
    /* SPT2B_CLK_I, SPT0B_CLK_I, SPT1B_CLK_I, SPT1A_CLK_I, SPT0A_CLK_I, SPT2A_CLK_I */
    *pREG_DAI0_CLK0 = (unsigned int) 0x252f7842;

    /* SPDIF0_TX_DAT_I */
    *pREG_DAI0_DAT4 = (unsigned int) 0x0000003e;

    /* SPDIF0_RX_I */
    *pREG_DAI0_DAT5 = (unsigned int) 0x3e000000;

    /* SPT1A_D0_I, SPT0B_D0_I, SPT0B_D1_I, SPT0A_D0_I, SPT0A_D1_I */
    *pREG_DAI0_DAT0 = (unsigned int) 0x08f81fbe;

    /* SPT2A_D1_I, SPT1A_D1_I, SPT1B_D0_I, SPT2A_D0_I, SPT1B_D1_I */
    *pREG_DAI0_DAT1 = (unsigned int) 0x0ff8b289;

    /* SPT1A_FS_I, SPT2A_FS_I, SPT0B_FS_I, SPT2B_FS_I, SPT0A_FS_I, SPT1B_FS_I */
    *pREG_DAI0_FS0 = (unsigned int) 0x273f7863;

    /* DAI0_PB02_I, DAI0_PB01_I, DAI0_PB04_I, DAI0_PB03_I */
    *pREG_DAI0_PIN0 = (unsigned int) 0x0fdfbf14;

    /* DAI0_PB16_I, DAI0_PB14_I, DAI0_PB15_I, DAI0_PB13_I */
    *pREG_DAI0_PIN3 = (unsigned int) 0x00608080;

    /* DAI0_PB06_I, DAI0_PB05_I, DAI0_PB08_I, DAI0_PB07_I */
    *pREG_DAI0_PIN1 = (unsigned int) 0x0060bf7e;

    /* DAI0_PB12_I, DAI0_PB10_I, DAI0_PB11_I, DAI0_PB09_I */
    *pREG_DAI0_PIN2 = (unsigned int) 0x03668c81;

    /* DAI0_PBEN07_I, DAI0_PBEN06_I, DAI0_PBEN09_I, DAI0_PBEN08_I, DAI0_PBEN10_I */
    *pREG_DAI0_PBEN1 = (unsigned int) 0x13041041;

    /* DAI0_PBEN15_I, DAI0_PBEN12_I, DAI0_PBEN11_I, DAI0_PBEN13_I, DAI0_PBEN14_I */
    *pREG_DAI0_PBEN2 = (unsigned int) 0x010415d6;

    /* DAI0_PBEN03_I, DAI0_PBEN02_I, DAI0_PBEN01_I, DAI0_PBEN05_I, DAI0_PBEN04_I */
    *pREG_DAI0_PBEN0 = (unsigned int) 0x01000001;

    /* DAI0_PBEN16_I, DAI0_PBEN17_I, DAI0_PBEN18_I, DAI0_PBEN20_I, DAI0_PBEN19_I */
    *pREG_DAI0_PBEN3 = (unsigned int) 0x1d71f781;

    /* PADS0 DAI0 Port Input Enable Control Register */
    *pREG_PADS0_DAI0_IE = (unsigned int) 0x001FFFFE;

    /* PADS0 DAI1 Port Input Enable Control Register */
    *pREG_PADS0_DAI1_IE = (unsigned int) 0x001FFFFE;

    return 0;
}

