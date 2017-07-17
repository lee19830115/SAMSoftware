#include "adau1452_simple.h"

#include <services/gpio/adi_gpio.h>

// For debug messages
#include <stdio.h>

// SigmaStudio exported file
uint16_t ADAU1452_Config_NumBytes[] = {
#if defined (__LIVE_DRIVER_DEBUG__)
#include "..\..\SigmaStudio Schematics\Converter configurations\Automotive Board Configurations\Default\Exported init files\NumBytes_ADAU1452.dat"
#else
#include "..\initialization_files\NumBytes_ADAU1452_v1.2.dat"
#endif
};

// SigmaStudio exported file
uint8_t ADAU1452_Config_TxData[] = {
#if defined (__LIVE_DRIVER_DEBUG__)
#include "..\..\SigmaStudio Schematics\Converter configurations\Automotive Board Configurations\Default\Exported init files\TxBuffer_ADAU1452.dat"
#else
#include "..\initialization_files\TxBuffer_ADAU1452_v1.2.dat"
#endif
};


/**
 * @brief      Initialize the ADAU1452 using the auto-generated export file from
 *             SigmaStudio
 *
 * @param      adau1452    A pointer to the instance for this driver
 * @param[in]  portpin	   The GPIO pin to use as the SPI slave select line
 * @param[in]  device_num  The SHARC SPI peripheral to use (e.g. SPI0, SPI1,
 *                         SPI2)
 *
 * @return     Result indicating success or failure
 */
ADAU1452_SIMPLE_RESULT 	adau1452_initialize(     sADAU1452_Simple * adau1452, 
												 uint32_t portpin,
												 SPI_SIMPLE_DEVICE device_num )
{

	ADAU1452_SIMPLE_RESULT resAdau1452 = ADAU1452_SIMPLE_SUCCESS;

	int i,j;
	volatile int v;


	// This delay is necessary after a cold start to ensure the ADAU1452 is ready to be booted
	for ( j=0; j < 100000000; j++ ) { v++; }

	/// Set up simple register-driven TWI driver
	if (spi_initialize( &adau1452->spi, 
						SPI_MODE_3,
						SPI_SSEL_MANUAL,
						SPI_WORDLEN_8BIT,
						112500000, 
						device_num) != SPI_SIMPLE_SUCCESS) {
		return ADAU1452_SIMPLE_ERROR;
	}

	/// We need to manually manage the slave select line since it needs to span multiple bytes per transaction
	adau1452->portpin = portpin;

	/// Use SPI helper functions to set up that GPIO pin
	gpio_setup(portpin, GPIO_OUTPUT);


	/// Max speed of ADAU1452 SPI clock is ~3MHz until after PLL locks
	/// Set initially to 300K
	/// TODO - flip this back to 3MHz once everything is working
	spi_setClock( &adau1452->spi, 300000);

    /// We need to perform 3 dummy writes to the ADAU1452 to put into SPI mode
    /// See page 35 of the datasheet more details.
	for (i = 0; i < 3; i++) {

		spi_select(adau1452->portpin);

		///< Add a short delay
		for ( j=0; j < 1000; j++ ) { v++; }

		spi_transfer( &adau1452->spi, 0x0 );

		///< Add a short delay
		for ( j=0; j < 1000; j++ ) { v++; }

		spi_deselect(adau1452->portpin);

		///< Add a short delay
		for ( j=0; j < 1000; j++ ) { v++; }
	}

	for ( j=0; j < 100000; j++ ) { v++; }

    /// Initialize ADAU1761 with TDM 8-channel talkthru configuration
    resAdau1452 = adau1452_loadBulkRegFile( adau1452,
											ADAU1452_Config_TxData,
											ADAU1452_Config_NumBytes,
											sizeof(ADAU1452_Config_NumBytes)/sizeof(uint16_t));

    /// Read the core status register to be sure the processor has been initialized
    uint16_t coreStatusReg;

    coreStatusReg = adau1452_read_word(adau1452, ADAU1452_REG_CORE_STATUS);

    if ((coreStatusReg&0x1) != 0x1) {

    	//printf("ADAU1452 initialization error! CORE_STATUS = %#08x\n",coreStatusReg);
    	return ADAU1452_SIMPLE_ERROR;
    }

    if (resAdau1452 != ADAU1452_SIMPLE_SUCCESS) return resAdau1452;

    /// Start the converter and mute output channels

    return ADAU1452_SIMPLE_SUCCESS;
}

/**
 * @brief      { function_description }
 *
 * @param      adau1452    The adau 1452
 * @param[in]  subaddress  The subaddress
 * @param      value       The value
 * @param[in]  count       The count
 *
 * @return     { description_of_the_return_value }
 */
ADAU1452_SIMPLE_RESULT adau1452_write_block( sADAU1452_Simple * adau1452,
									  ADAU1452_SIMPLE_CONTROL_REGISTER subaddress, 
									  uint8_t * value, 
									  uint16_t count ) {

	int i, j;

	// Assert the SPI select line
	spi_select( adau1452->portpin );

	///< 7-bit address (0x0) followed by write bit (0x0)
	spi_transfer( &adau1452->spi, 0x0 );	

	///< Write MSB of subaddress
	spi_transfer( &adau1452->spi, (subaddress >> 8) );	

	///< Write LSB of subaddress
	spi_transfer( &adau1452->spi, (subaddress & 0xFF) );	

	for (i = 0; i < count; i++) {

		///< Write MSB of subaddress
		spi_transfer( &adau1452->spi, (uint32_t) *value );
		value++;

	}	

	// De-assert the SPI select line
	spi_deselect(adau1452->portpin);

	///< Add a short delay
	volatile int v=0;
	for ( j=0; j < 1000; j++ ) { v++; }

	return ADAU1452_SIMPLE_SUCCESS;

}

/**
 * @brief      { function_description }
 *
 * @param      adau1452    The adau 1452
 * @param[in]  subaddress  The subaddress
 *
 * @return     { description_of_the_return_value }
 */
uint16_t adau1452_read_word( sADAU1452_Simple * adau1452, uint16_t subaddress ) {

	int j;

	/// Assert the SPI select line
	spi_select(adau1452->portpin);

	/// 7-bit address (0x0) followed by read bit (0x1)
	spi_transfer( &adau1452->spi, 0x1 );

	/// Write MSB of subaddress
	spi_transfer( &adau1452->spi, (subaddress >> 8) );

	/// Write LSB of subaddress
	spi_transfer( &adau1452->spi, (subaddress & 0xFF) );


	uint16_t value = 0;

	value |= (spi_transfer( &adau1452->spi, 0 ) << 8);
	value |= spi_transfer( &adau1452->spi, 0 );

	// De-assert the SPI select line
	spi_deselect(adau1452->portpin);

	///< Add a short delay
	volatile int v=0;
	for ( j=0; j < 1000; j++ ) { v++; }


	return value;

}

/**
 * @brief      { function_description }
 *
 * @param      adau1452    The adau 1452
 * @param      values      The values
 * @param      lengths     The lengths
 * @param[in]  totalLines  The total lines
 *
 * @return     { description_of_the_return_value }
 */
ADAU1452_SIMPLE_RESULT adau1452_loadBulkRegFile( sADAU1452_Simple * adau1452,
												uint8_t * values,
												uint16_t * lengths,
												uint16_t totalLines ) {

    int i,j;
    uint16_t length;
    volatile int v;

#ifdef DEBUG_ADAU1452
        printf(" adau1452_loadBulkRegFile(): Total lines to load %d\n",totalLines);
#endif

    for (i=0; i < totalLines; i++) {

    	uint16_t subaddress;

        length = *lengths++;

#ifdef DEBUG_ADAU1452
        printf(" adau1452_loadBulkRegFile(): Line %d, count %d, val[0] %#02x\n",i,length,*values);
#endif

        /// Look for any corrupted values in the initialization
        if (length > 10000 || length == 0) {
        	return ADAU1452_SIMPLE_CORRUPT_INIT_FILE;
        } else {

        	subaddress = (values[0]<<8 | values[1]);

            /// perform a bulk write
        	adau1452_write_block(adau1452, subaddress, &values[2], length - 2);

        	if (length >= 4) {
        		uint16_t firstValue = (values[2]<<8) + values[3];

        		/// Check to see if we are enabling the PLL because if so, we need to wait a moment
				if (subaddress == ADAU1452_REG_PLL_ENABLE && firstValue == 0x01) {

	#ifdef DEBUG_ADAU1452
					printf(" adau1452_loadBulkRegFile(): Just wrote PLL Enable, waiting for lock\n");

					uint16_t pll = adau1452_read_word(adau1452, ADAU1452_REG_PLL_ENABLE);
					printf(" adau1452_loadBulkRegFile(): ADAU1452_REG_PLL_ENABLE: %#04x\n",pll);

	#endif



					/// Wait for PLL to lock
					/// TODO - add a timeout function
					uint32_t timeOutCntr = 0;
					while (adau1452_read_word(adau1452, ADAU1452_REG_PLL_LOCK) != 0x01) {
						// short delay
						for ( j=0; j < 10000; j++ ) { v++; }

						if (timeOutCntr++ > 10000) {
							printf(" adau1452_loadBulkRegFile(): Waiting for PLL lock has timed out\n");
							return ADAU1452_SIMPLE_ERROR;
						}
					}

				}
        	}
        }

        values += length;

        // Add a short delay between blocks
        for ( j=0; j < 10000; j++ ) { v++; }
    }

    return ADAU1452_SIMPLE_SUCCESS;

}
