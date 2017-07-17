/*********************************************************************************

Copyright(c) 2017 Analog Devices, Inc. All Rights Reserved.

This software is proprietary and confidential.  By using this software you agree
to the terms of the associated Analog Devices License Agreement.

*********************************************************************************/
/**
 * @file       adi_adau1966.c
 * @brief      ADAU1966 DAC
 * @author     Dan Ledger / Run Jump Labs
 * @date       $Date: 2017-05-18 $
 * @brief      Implementation of a simple ADAU1966 DAC driver
 */

#include "adau1966_simple.h"
#include <stdio.h>

/**
 * Initialization block revision history:
 * v1.0 Initial driver release
 * v1.1 L/R clock was inverted input so channels 0-3 showing up as 4-7.
 */

/// SigmaStudio exported NumBytes file
uint16_t ADAU1966_Config_NumBytes[] = {
#if defined (__LIVE_DRIVER_DEBUG__)
#include "..\..\SigmaStudio Schematics\Converter configurations\Automotive Board Configurations\Default\Exported init files\NumBytes_ADAU1966.dat"
#else
#include "..\initialization_files\NumBytes_ADAU1966_v1.1.dat"
#endif
};

/// SigmaStudio exported TxBuffer file
uint8_t ADAU1966_Config_TxData[] = {
#if defined (__LIVE_DRIVER_DEBUG__)
#include "..\..\SigmaStudio Schematics\Converter configurations\Automotive Board Configurations\Default\Exported init files\TxBuffer_ADAU1966.dat"
#else
#include "..\initialization_files\TxBuffer_ADAU1966_v1.1.dat"
#endif
};


/**
 * @brief      Initialize the ADAU1966 using the auto-generated export file from
 *             SigmaStudio
 *
 * @param      adau1966    A pointer to the instance for this driver
 * @param[in]  device_num  The SHARC TWI peripheral to use (e.g. TWI0, TWI1,
 *                         TWI2)
 *
 * @return     Result indicating success or failure
 */
ADAU1966_SIMPLE_RESULT 	adau1966_initialize( sADAU1966_Simple * adau1966,
											 TWI_SIMPLE_DEVICE device_num ) 
{

	ADAU1966_SIMPLE_RESULT resAdau1966 = ADAU1966_SIMPLE_SUCCESS;

	/// Set up simple register-driven TWI driver
	if (twi_initialize( &adau1966->twi, 
						ADAU1966_TWI_ADDR, 
						112500000, 
						device_num) != TWI_SIMPLE_SUCCESS) {
		return ADAU1966_SIMPLE_ERROR;
	}

	twi_setClock( &adau1966->twi, 100000);


    /// Initialize ADAU1761 with TDM 8-channel talkthru configuration
    resAdau1966 = adau1966_loadBulkRegFile( adau1966,
											ADAU1966_Config_TxData,
											ADAU1966_Config_NumBytes,
											sizeof(ADAU1966_Config_NumBytes)/sizeof(uint16_t));

    return resAdau1966;

}





/**
 * @brief      Reads a control register from the ADAU1966 using its 16-bit
 *             address.  See the ADAU1966 datasheet for more info on control
 *             registers.
 *
 * @param      adau1966  Pointer to the instance of this driver
 * @param[in]  address   The control register address to read
 *
 * @return     The value of the control register
 */
uint8_t adau1966_readCtrlReg( sADAU1966_Simple * adau1966, ADAU1966_SIMPLE_CONTROL_REGISTER address ) {

    uint8_t value;

    ///< Write address byte and don't send I2C/TWI stop bit
    twi_write_r( &adau1966->twi,
				 address,
				 true );

    ///> Read control register
    value = twi_read( &adau1966->twi );

    return value;
}


/**
 * @brief      Writes an 8-bit value to a control register on the ADAU1966 using
 *             its 16-bit control register address.  See the ADAU1966 datasheet
 *             for more info on control registers.
 *
 * @param      adau1966  Pointer to the instance of this driver
 * @param[in]  address   The control register address to write
 * @param[in]  value     The value to write to the control register
 */
void adau1966_writeCtrlReg( sADAU1966_Simple * adau1966, ADAU1966_SIMPLE_CONTROL_REGISTER address, uint8_t value ) {
    uint8_t seq[2];

    seq[0] = address;
    seq[1] = value;

    twi_write_block(&adau1966->twi, seq, 2);
}


/**
 * @brief      The SigmaStudio tools can dump a set of configuration files for
 *             easy device set up via Action -> Export System Files.  Amongst
 *             these files will be a lenght and a data file that need to be
 *             imported (See the ADAU1966 testing code for an example).  This
 *             typically starts the ADAU1966 DSP at the end of the loading
 *             process so device set up becomes incredibly simple.
 *
 * @param      adau1966    Pointer to the instance of this driver
 * @param      values      The values
 * @param      lengths     The lengths
 * @param[in]  totalLines  The total lines
 *
 * @return     { description_of_the_return_value }
 */
ADAU1966_SIMPLE_RESULT adau1966_loadBulkRegFile( sADAU1966_Simple * adau1966, uint8_t * values, uint16_t * lengths, uint16_t totalLines ) {

    int i,j;
    uint16_t length;
    volatile int v;

#if DEBUG_ADAU1966
        printf(" adau1966_loadBulkRegFile(): Total lines to load %d\n",totalLines);
#endif

    for (i=0; i < totalLines; i++) {
        length = *lengths++;

#if DEBUG_ADAU1966
        printf(" adau1966_loadBulkRegFile(): Line %d, count %d, val[0] %#02x\n",i,length,*values);
#endif

        // Look for any corrupted values in the initialization
        if (length > 10000 || length == 0) {
        	return ADAU1966_SIMPLE_CORRUPT_INIT_FILE;
        } else {
            /// perform a bulk write
        	/// Start with byte 1 since byte 0 is always in the SS output file
            twi_write_block(&adau1966->twi, &values[1], length-1);
        }

        values += length;

        /// Add a short delay between blocks
        for ( j=0; j < 10000; j++ ) { v++; }
    }

	return ADAU1966_SIMPLE_SUCCESS;

}
