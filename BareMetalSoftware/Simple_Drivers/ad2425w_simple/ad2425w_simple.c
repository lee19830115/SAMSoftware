#include "ad2425w_simple.h"

// For debug messages
#include <stdio.h>


AD2425W_SIMPLE_RESULT 	ad2425w_initialize( sAD2425W_Simple * ad2425w,
											AD2425W_SIMPLE_MODE mode,
											portpin irq_io0,
											portpin mstr,
											TWI_SIMPLE_DEVICE device_num )
{
	uint8_t twi_address;

	///< Set up gpio pins for the ad2425w
	if (gpio_setup( irq_io0, GPIO_INPUT ) != GPIO_SUCCESS) {
		return AD2425W_SIMPLE_INVALID_GPIO;
	}
	if (gpio_setup( mstr, GPIO_OUTPUT ) != GPIO_SUCCESS) {
		return AD2425W_SIMPLE_INVALID_GPIO;
	}

	if (mode == AD2425W_SIMPLE_MASTER ) {
		twi_address = AD2425W_TWI_ADDR;
		gpio_write( mstr, GPIO_HIGH );
	} else {
		twi_address = AD2425W_TWI_ADDR | 0x1;
		gpio_write( mstr, GPIO_LOW );
	}

	///< Set up simple register-driven TWI driver
	if (twi_initialize( &ad2425w->twi,
						twi_address, 
						112500000, 
						device_num) != TWI_SIMPLE_SUCCESS) {
		return AD2425W_SIMPLE_ERROR;
	}

	ad2425w->_irq_pin = irq_io0;
	ad2425w->_mstr_pin = mstr;

	return AD2425W_SIMPLE_SUCCESS;
}
