/*********************************************************************************

Copyright(c) 2017 Analog Devices, Inc. All Rights Reserved.

This software is proprietary and confidential.  By using this software you agree
to the terms of the associated Analog Devices License Agreement.

*********************************************************************************/
/**
 * @file       adau1977.c
 * @brief      ADAU1977 ADC
 * @author     Dan Ledger / Run Jump Labs
 * @date       $Date: 2017-05-18 $
 * @brief      Implementation of a simple ADAU1979 ADC driver
 */


#include "adau1977_simple.h"
#include <stdio.h>


/// SigmaStudio exported NumBytes file
uint16_t ADAU1977_Config_NumBytes[] = {
#if defined (__LIVE_DRIVER_DEBUG__)
#include "..\..\SigmaStudio Schematics\Converter configurations\Automotive Board Configurations\Default\Exported init files\NumBytes_ADAU1977.dat"
#else
#include "..\initialization_files\NumBytes_ADAU1977_v1.0.dat"
#endif
};

/// SigmaStudio exported TxBuffer file
uint8_t ADAU1977_Config_TxData[] = {
#if defined (__LIVE_DRIVER_DEBUG__)
#include "..\..\SigmaStudio Schematics\Converter configurations\Automotive Board Configurations\Default\Exported init files\TxBuffer_ADAU1977.dat"
#else
#include "..\initialization_files\TxBuffer_ADAU1977_v1.0.dat"
#endif
};



/**
 * @brief      Initialize the ADAU1977 using the auto-generated export file from
 *             SigmaStudio
 *
 * @param      adau1977    A pointer to the instance for this driver
 * @param[in]  device_num  The SHARC TWI peripheral to use (e.g. TWI0, TWI1,
 *                         TWI2)
 *
 * @return     Result indicating success or failure
 */
ADAU1977_SIMPLE_RESULT     adau1977_initialize( sADAU1977_Simple * adau1977, 
                                                TWI_SIMPLE_DEVICE device_num )
{
    ADAU1977_SIMPLE_RESULT resAdau1977 = ADAU1977_SIMPLE_SUCCESS;

    /// Set up simple register-driven TWI driver
    if (twi_initialize( &adau1977->twi,
                        ADAU1977_TWI_ADDR, 
                        112500000, 
                        device_num) != TWI_SIMPLE_SUCCESS) {
        return ADAU1977_SIMPLE_ERROR;
    }

    /// Set TWI/I2C clock to 100 kHz 
    twi_setClock( &adau1977->twi, 100000);

    /// Initialize ADAU1979 with TDM configuration 
    resAdau1977 = adau1977_loadBulkRegFile( adau1977,
                                            ADAU1977_Config_TxData,
                                            ADAU1977_Config_NumBytes,
                                            sizeof(ADAU1977_Config_NumBytes)/sizeof(uint16_t));

    return resAdau1977;

}

/**
 * @brief      Reads a control register value on the ADAU1977
 *
 * @param      adau1977  A pointer to the instance for this driver
 * @param[in]  address   The control register address (see .h file for valid
 *                       control register names)
 *
 * @return     The 8-bit value of the control register that was read
 */
uint8_t adau1977_read_register( sADAU1977_Simple * adau1977, 
                                ADAU1977_SIMPLE_CONTROL_REGISTER address )
{
    uint8_t value;

    /// Write address byte and don't send I2C/TWI stop bit
    twi_write_r( &adau1977->twi,
                 address,
                 true );

    /// Read control register and return this value
    value = twi_read( &adau1977->twi );
    return value;
}

/**
 * @brief      Writes a control register on the ADAU1977
 *
 * @param      adau1977  A pointer to the instance for this driver
 * @param[in]  address   The control register address (see .h file for valid
 *                       control register names)
 * @param[in]  value     The value to be written
 */
void    adau1977_write_register( sADAU1977_Simple * adau1977, 
                                 ADAU1977_SIMPLE_CONTROL_REGISTER address,
                                 uint8_t value )
{
    uint8_t seq[2];

    seq[0] = address;
    seq[1] = value;

    twi_write_block(&adau1977->twi, seq, 2);

}

/**
 * @brief      The SigmaStudio tools can dump a set of configuration files for
 *             easy device set up via Action -> Export System Files.  Amongst
 *             these files will be a lenght and a data file that need to be
 *             imported (See the ADAU1979 testing code for an example).
 *
 * @param      adau1977    Pointer to the instance of this driver
 * @param      values      A pointer to an array of values initialized with the
 *                         "TxBuffer" file generated from SigmaStudio
 * @param      lengths     A pointer to an array of length values initialized
 *                         with the "NumBytes" file generated from SigmaStudio
 * @param[in]  totalLines  The total lines to process.  This is essentially the
 *                         number of elements in the lengths array.
 *
 * @return     Result indicating success or failure
 */
ADAU1977_SIMPLE_RESULT adau1977_loadBulkRegFile( sADAU1977_Simple * adau1977, 
                                              uint8_t * values, 
                                              uint16_t * lengths, 
                                              uint16_t totalLines ) {

    int i,j;
    uint16_t length;
    volatile int v;

#if (DEBUG_ADAU1977)
        printf(" adau1977_loadBulkRegFile(): Total lines to load %d\n",totalLines);
#endif

    for (i=0; i < totalLines; i++) {
        length = *lengths++;

#if (DEBUG_ADAU1977)
        printf(" adau1977_loadBulkRegFile(): Line %d, count %d, val[0] %#02x\n",i,length,*values);
#endif

        // Look for any corrupted values in the initialization
        if (length > 10000 || length == 0) {
            return ADAU1977_SIMPLE_CORRUPT_INIT_FILE;
        } else {

            /**
             * Perform a bulk write. We start with byte 1 since byte 0 is always
             * in the SS output file. 
             */
            twi_write_block(&adau1977->twi, &values[1], length-1);
        }

        /// Increment our pointer in our values array using the lastest length value
        values += length;

        /// Add a short delay between blocks
        for ( j=0; j < 10000; j++ ) { v++; }
    }

    return ADAU1977_SIMPLE_SUCCESS;

}
