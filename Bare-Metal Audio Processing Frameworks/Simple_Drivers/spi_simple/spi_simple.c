


#include "spi_simple.h"


// Set spi_select0_line to NULL to manually manage the SPI select line
SPI_SIMPLE_RESULT   spi_initialize( sSPI * device, 
                                    SPI_SIMPLE_MODE spi_mode, 
                                    SPI_SIMPLE_SPI_SEL_PIN spi_select_line,
                                    SPI_SIMPLE_TRANSFER_LEN transmit_len, 
                                    uint32_t f_sclk0_freq,
                                    SPI_SIMPLE_DEVICE device_num)

{
    
    ///< Set f_sclk0 frequency which is used to set SPI SCLK freq
    if (f_sclk0_freq > SPI_SIMPLE_MAX_SCLK0_FREQ) {
        return SPI_SIMPLE_INVALID_SCLK0_FREQ;
    } else if ( f_sclk0_freq < 10000000) {
        return SPI_SIMPLE_INVALID_SCLK0_FREQ;
    }
    device->_f_sclk0 = f_sclk0_freq;    

    // Set up control register pointers
    if (device_num == SPI0) {
    	device->pREG_SPI_SLVSEL = pREG_SPI0_SLVSEL;
    	device->pREG_SPI_CTL 	= pREG_SPI0_CTL;
    	device->pREG_SPI_CLK    = pREG_SPI0_CLK;
        device->pREG_SPI_TFIFO  = pREG_SPI0_TFIFO;
        device->pREG_SPI_RFIFO  = pREG_SPI0_RFIFO;
        device->pREG_SPI_TXCTL  = pREG_SPI0_TXCTL;
        device->pREG_SPI_RXCTL  = pREG_SPI0_RXCTL;
        device->pREG_SPI_STAT   = pREG_SPI0_STAT;
    }
    else if (device_num == SPI1) {
        device->pREG_SPI_SLVSEL = pREG_SPI1_SLVSEL;
        device->pREG_SPI_CTL    = pREG_SPI1_CTL;
        device->pREG_SPI_CLK    = pREG_SPI1_CLK;
        device->pREG_SPI_TFIFO  = pREG_SPI1_TFIFO;
        device->pREG_SPI_RFIFO  = pREG_SPI1_RFIFO;
        device->pREG_SPI_TXCTL  = pREG_SPI1_TXCTL;
        device->pREG_SPI_RXCTL  = pREG_SPI1_RXCTL;
        device->pREG_SPI_STAT   = pREG_SPI1_STAT;
    }
    else if (device_num == SPI2) {
        device->pREG_SPI_SLVSEL = pREG_SPI2_SLVSEL;
        device->pREG_SPI_CTL    = pREG_SPI2_CTL;
        device->pREG_SPI_CLK    = pREG_SPI2_CLK;
        device->pREG_SPI_TFIFO  = pREG_SPI2_TFIFO;
        device->pREG_SPI_RFIFO  = pREG_SPI2_RFIFO;
        device->pREG_SPI_TXCTL  = pREG_SPI2_TXCTL;
        device->pREG_SPI_RXCTL  = pREG_SPI2_RXCTL;
        device->pREG_SPI_STAT   = pREG_SPI2_STAT;
    }

    // Configure the SPI port
    if (spi_select_line != SPI_SSEL_MANUAL) {
		*device->pREG_SPI_CTL =  BITM_SPI_CTL_MSTR |     ///< SPI is the master device
								 BITM_SPI_CTL_EMISO |    ///< Enable MISO
								 BITM_SPI_CTL_ASSEL |    ///< Use SPI port select lines
								 (uint8_t) transmit_len << BITP_SPI_CTL_SIZE | ///< Set transmit size
								 0;
    } else {
		*device->pREG_SPI_CTL =  BITM_SPI_CTL_MSTR |     ///< SPI is the master device
								 BITM_SPI_CTL_EMISO |    ///< Enable MISO
								 (uint8_t) transmit_len << BITP_SPI_CTL_SIZE | ///< Set transmit size
								 0;

    }

    // Configure SPI Mode
    if (spi_mode == SPI_MODE_2 || spi_mode == SPI_MODE_3) {
        *device->pREG_SPI_CTL |= BITM_SPI_CTL_CPOL;
    }
    if (spi_mode == SPI_MODE_1 || spi_mode == SPI_MODE_3) {
        *device->pREG_SPI_CTL |= BITM_SPI_CTL_CPHA;
    }

    /// SPI the corresponding SPI slave select register  
    if (spi_select_line != SPI_SSEL_MANUAL) {
		*device->pREG_SPI_SLVSEL = 0xFE00;
		*device->pREG_SPI_SLVSEL |= (1 << (uint8_t) spi_select_line);
    } else {
    /// Otherwise, set up the SPI GPIO pin to be an output
        gpio_setup(spi_select_line, GPIO_OUTPUT );
    }

    /// Setup transfer register
    *device->pREG_SPI_RXCTL =   BITM_SPI_RXCTL_RTI |
                                BITM_SPI_RXCTL_REN |
                                0;

    *device->pREG_SPI_TXCTL =   BITM_SPI_TXCTL_TTI |
                                BITM_SPI_TXCTL_TEN |
                                0;


    ///< Enable the SPI port
    *device->pREG_SPI_CTL |= BITM_SPI_CTL_EN;

    return SPI_SIMPLE_SUCCESS;

}



void spi_end(  sSPI * device ) {

	*device->pREG_SPI_CTL = 0;

}



// Sets the clock frequency for SPI transactions

SPI_SIMPLE_RESULT   spi_setClock( sSPI * device, uint32_t clockFreq) {
	if (clockFreq == 0 || clockFreq > 20000000) {
		return SPI_SIMPLE_INVALID_SCLK0_FREQ;
	}

	*device->pREG_SPI_CLK = device->_f_sclk0/((float) (clockFreq+1));
}

// Performs a simultaneous read and write on MOSI and MISO.  Note: this
// implementation does not rely on the default slave select functionality
// within the SPI peripheral due to timing issues encountered with this
// functionality during testing.

uint32_t    spi_transfer( sSPI * device, uint32_t value) 
{

	uint32_t rx_value;

	// Write value to
	*device->pREG_SPI_TFIFO = value;

	// Wait for transfer to complete
	while (*device->pREG_SPI_STAT & BITM_SPI_STAT_RFE) {}

	rx_value = *device->pREG_SPI_RFIFO;

	return rx_value;

}

SPI_SIMPLE_RESULT 	spi_select( portpin pin ) {

	if (gpio_write( pin, GPIO_LOW ) == GPIO_SUCCESS) {
		return SPI_SIMPLE_SUCCESS;
	} else {
		return SPI_SIMPLE_ERROR;
	}

}

SPI_SIMPLE_RESULT 	spi_deselect( portpin pin ) {

    if (gpio_write( pin, GPIO_HIGH ) == GPIO_SUCCESS) {
		return SPI_SIMPLE_SUCCESS;
	} else {
		return SPI_SIMPLE_ERROR;
	}
}

