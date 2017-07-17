#ifndef __ADI_TWI_SIMPLE_H__
#define __ADI_TWI_SIMPLE_H__

#include <sys/platform.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#define TWI_SIMPLE_MAX_SCLK0_FREQ 	(112500000)

/**
 * Structure for the TWI_simple driver instance
 */


#ifdef __cplusplus
extern "C"{
#endif


typedef enum TWI_SIMPLE_DEVICE {
	TWI0,
	TWI1,
	TWI2
} TWI_SIMPLE_DEVICE;


typedef enum TWI_SIMPLE_RESULT
{
	TWI_SIMPLE_SUCCESS,   		  		// The API call is success
	TWI_SIMPLE_INVALID_DEVICE_NUM,     	// Invalid peripheral
	TWI_SIMPLE_INVALID_SCLK0_FREQ     	// Invalid valid for SCLK

} TWI_SIMPLE_RESULT;

typedef struct {

    ///< Memory mapped control registers for the TWI driver
    volatile uint16_t * pREG_TWI_CTL;
    volatile uint16_t * pREG_TWI_CLKDIV;
    volatile uint16_t * pREG_TWI_FIFOCTL;
    volatile uint16_t * pREG_TWI_MSTRADDR;
    volatile uint16_t * pREG_TWI_ISTAT;
    volatile uint16_t * pREG_TWI_MSTRSTAT;
    volatile uint16_t * pREG_TWI_MSTRCTL;

    volatile uint16_t * pREG_TWI_TXDATA8;
    volatile uint16_t * pREG_TWI_TXDATA16;
    volatile uint16_t * pREG_TWI_RXDATA8;
    volatile uint16_t * pREG_TWI_RXDATA16;

    uint32_t _f_sclk0;
    uint8_t _address;       ///< TWI device address
    uint16_t _clkdiv;       ///< Resulting clock divider
    uint8_t _prescale;      ///< Resulting clock prescalar
    float   _dutyCycle;     ///< TWI clock duty cycle
                            
} sTWI;


TWI_SIMPLE_RESULT 	twi_initialize(sTWI * device, uint8_t address, uint32_t f_sclk0_freq, TWI_SIMPLE_DEVICE device_num);
void 	twi_write(sTWI * device, uint8_t value);
void 	twi_write_r(sTWI * device, uint8_t value, bool rstart);
void 	twi_write_block_r(sTWI * device, uint8_t * values, uint16_t count, bool rstart);
void 	twi_write_block(sTWI * device, uint8_t * values, uint16_t count);
uint8_t 	twi_read(sTWI * device);
uint8_t 	twi_read_r(sTWI * device, bool rstart);
void 	twi_read_block_r(sTWI * device, uint8_t * values, uint16_t count, bool rstart);
void 	twi_read_block(sTWI * device, uint8_t * values, uint16_t count);
bool 	twi_setClock(sTWI * device, uint32_t clockFreq);


#ifdef __cplusplus
} // extern "C"
#endif

#endif 
