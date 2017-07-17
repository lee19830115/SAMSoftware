#ifndef __ADI_SPI_SIMPLE_H__
#define __ADI_SPI_SIMPLE_H__

#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#include "../gpio_simple/gpio_simple.h"

#define SPI_SIMPLE_MAX_SCLK0_FREQ 	(112500000)

#ifdef __cplusplus
extern "C"{
#endif

typedef enum SPI_SIMPLE_DEVICE {
	SPI0 = (0),
	SPI1 = (1),
	SPI2 = (2)
} SPI_SIMPLE_DEVICE;


typedef enum SPI_SIMPLE_RESULT
{
	SPI_SIMPLE_SUCCESS,   		  		// The API call is success
	SPI_SIMPLE_INVALID_SCLK0_FREQ,     	// Invalid valid for SCLK
	SPI_SIMPLE_ERROR

} SPI_SIMPLE_RESULT;


typedef enum SPI_SIMPLE_TRANSFER_LEN {
	SPI_WORDLEN_8BIT 	= (0),
	SPI_WORDLEN_16BIT 	= (1),
	SPI_WORDLEN_32BIT 	= (2)
} SPI_SIMPLE_TRANSFER_LEN;

typedef enum SPI_SIMPLE_MODE {
	SPI_MODE_0 	= (0),
	SPI_MODE_1 	= (1),
	SPI_MODE_2 	= (2),
	SPI_MODE_3 	= (3)
} SPI_SIMPLE_MODE;

typedef enum SPI_SIMPLE_SPI_SEL_PIN {
	SPI_SSEL_MANUAL = (0),
	SPI_SSEL_1 	= (1),
	SPI_SSEL_2 	= (2),
	SPI_SSEL_3 	= (3),
	SPI_SSEL_4 	= (4),
	SPI_SSEL_5 	= (5),
	SPI_SSEL_6 	= (6),
	SPI_SSEL_7 	= (7)

} SPI_SIMPLE_SPI_SEL_PIN;

typedef struct {
	uint8_t port;
	uint8_t	pin;
} gpioPortPin;

typedef struct {

    ///< Memory mapped control registers for the SPI driver
	volatile uint32_t * pREG_SPI_CTL;
	volatile uint32_t * pREG_SPI_STAT;
	volatile uint32_t * pREG_SPI_SLVSEL;
	volatile uint32_t * pREG_SPI_RFIFO;
	volatile uint32_t * pREG_SPI_RXCTL;
	volatile uint32_t * pREG_SPI_TFIFO;
	volatile uint32_t * pREG_SPI_TXCTL;

    uint32_t _f_sclk0;

	volatile uint32_t * pREG_SPI_CLK;
    uint8_t _address;       ///< TWI device address
    uint16_t _clkdiv;       ///< Resulting clock divider
    uint8_t _prescale;      ///< Resulting clock prescalar
    float   _dutyCycle;     ///< TWI clock duty cycle
	uint32_t _ssel_gpio;
                            
} sSPI;


SPI_SIMPLE_RESULT   spi_initialize( sSPI * device, 
                                    SPI_SIMPLE_MODE spi_mode, 
                                    SPI_SIMPLE_SPI_SEL_PIN spi_select_line,
                                    SPI_SIMPLE_TRANSFER_LEN transmit_len, 
                                    uint32_t f_sclk0_freq,
                                    SPI_SIMPLE_DEVICE device_num);


void spi_end(sSPI * device);

SPI_SIMPLE_RESULT 	spi_setClock(sSPI * device, uint32_t clockFreq);
uint32_t 			spi_transfer(sSPI * device, uint32_t value);

SPI_SIMPLE_RESULT 	spi_select( uint32_t portpin );
SPI_SIMPLE_RESULT 	spi_deselect( uint32_t portpin );

#ifdef __cplusplus
} // extern "C"
#endif

#endif
