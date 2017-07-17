/*
 **
 ** Source file generated on July 12, 2017 at 09:35:47.	
 **
 ** Copyright (C) 2017 Analog Devices Inc., All Rights Reserved.
 **
 ** This file is generated automatically based upon the options selected in 
 ** the Pin Multiplexing configuration editor. Changes to the Pin Multiplexing
 ** configuration should be made by changing the appropriate options rather
 ** than editing this file.
 **
 ** Selected Peripherals
 ** --------------------
 ** SPI0 (CLK, MISO, MOSI)
 **
 ** GPIO (unavailable)
 ** ------------------
 ** PC09, PC10, PC11
 */

#include <sys/platform.h>
#include <stdint.h>

#define SPI0_CLK_PORTC_MUX  ((uint32_t) ((uint32_t) 0<<18))
#define SPI0_MISO_PORTC_MUX  ((uint32_t) ((uint32_t) 0<<20))
#define SPI0_MOSI_PORTC_MUX  ((uint32_t) ((uint32_t) 0<<22))

#define SPI0_CLK_PORTC_FER  ((uint32_t) ((uint32_t) 1<<9))
#define SPI0_MISO_PORTC_FER  ((uint32_t) ((uint32_t) 1<<10))
#define SPI0_MOSI_PORTC_FER  ((uint32_t) ((uint32_t) 1<<11))

int32_t adi_initpinmux(void);

/*
 * Initialize the Port Control MUX and FER Registers
 */
int32_t adi_initpinmux(void) {
    /* PORTx_MUX registers */
    *pREG_PORTC_MUX = SPI0_CLK_PORTC_MUX | SPI0_MISO_PORTC_MUX
     | SPI0_MOSI_PORTC_MUX;

    /* PORTx_FER registers */
    *pREG_PORTC_FER = SPI0_CLK_PORTC_FER | SPI0_MISO_PORTC_FER
     | SPI0_MOSI_PORTC_FER;
    return 0;
}

