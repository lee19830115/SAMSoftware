/*
 **
 ** sru_config.c source file generated on July 12, 2017 at 09:35:49.	
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
    /* SPT4A_CLK_I, SPT5A_CLK_I, SPT4B_CLK_I, SPT5B_CLK_I, SPT6B_CLK_I, SPT6A_CLK_I */
    *pREG_DAI1_CLK0 = (unsigned int) 0x252628ca;

    /* SPT5A_D1_I, SPT5B_D0_I, SPT6A_D0_I, SPT5B_D1_I, SPT6A_D1_I */
    *pREG_DAI1_DAT1 = (unsigned int) 0x0f38b2be;

    /* SPT4B_D1_I, SPT4B_D0_I, SPT5A_D0_I, SPT4A_D1_I, SPT4A_D0_I */
    *pREG_DAI1_DAT0 = (unsigned int) 0x3e144f8d;

    /* SPT6B_FS_I, SPT4B_FS_I, SPT5A_FS_I, SPT6A_FS_I, SPT5B_FS_I, SPT4A_FS_I */
    *pREG_DAI1_FS0 = (unsigned int) 0x2736aceb;

    /* DAI1_PB09_I, DAI1_PB12_I, DAI1_PB11_I, DAI1_PB10_I */
    *pREG_DAI1_PIN2 = (unsigned int) 0x0366bf7e;

    /* DAI1_PB16_I, DAI1_PB15_I, DAI1_PB14_I, DAI1_PB13_I */
    *pREG_DAI1_PIN3 = (unsigned int) 0x03a71498;

    /* DAI1_PB04_I, DAI1_PB02_I, DAI1_PB03_I, DAI1_PB01_I */
    *pREG_DAI1_PIN0 = (unsigned int) 0x0fdfbf7e;

    /* DAI1_PBEN11_I, DAI1_PBEN13_I, DAI1_PBEN12_I, DAI1_PBEN15_I, DAI1_PBEN14_I */
    *pREG_DAI1_PBEN2 = (unsigned int) 0x1a001000;

    /* DAI1_PBEN10_I, DAI1_PBEN09_I, DAI1_PBEN06_I, DAI1_PBEN08_I, DAI1_PBEN07_I */
    *pREG_DAI1_PBEN1 = (unsigned int) 0x0000d30f;

    /* DAI1_PBEN05_I, DAI1_PBEN01_I, DAI1_PBEN02_I, DAI1_PBEN03_I, DAI1_PBEN04_I */
    *pREG_DAI1_PBEN0 = (unsigned int) 0x0e000000;

    /* PADS0 DAI0 Port Input Enable Control Register */
    *pREG_PADS0_DAI0_IE = (unsigned int) 0x001FFFFE;

    /* PADS0 DAI1 Port Input Enable Control Register */
    *pREG_PADS0_DAI1_IE = (unsigned int) 0x001FFFFE;

    return 0;
}

