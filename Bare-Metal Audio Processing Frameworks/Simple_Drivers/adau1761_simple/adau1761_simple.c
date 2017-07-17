/*********************************************************************************

Copyright(c) 2017 Analog Devices, Inc. All Rights Reserved.

This software is proprietary and confidential.  By using this software you agree
to the terms of the associated Analog Devices License Agreement.

*********************************************************************************/
/**
 * @file       adau1761.c
 * @brief      ADAU1761 SigmaDSP
 * @author     Dan Ledger / Run Jump Labs
 * @date       $Date: 2017-05-18 $
 * @brief      Implementation of a simple ADAU1761 SigmaDSP driver
 */

#include "adau1761_simple.h"
#include <stdio.h>

// SigmaStudio exported NumBytes file
uint16_t ADAU1761_Config_NumBytes[] = {
#if defined (__DIY_DAUGHTER_BOARD__) // SAM + DIY Daughter Board Drivers
#if defined (__LIVE_DRIVER_DEBUG__)
#include "..\..\SigmaStudio Schematics\Converter configurations\SAM Board DIY Configurations\Exported Init Files\NumBytes_ADAU1761.dat"
#else
#include "..\initialization_files\NumBytes_ADAU1761_DIY_v1.1.dat"
#endif

#else	// SAM Drivers
#if defined (__LIVE_DRIVER_DEBUG__)
#include "..\..\SigmaStudio Schematics\Converter configurations\SAM Board Configurations\Default\Exported init files\NumBytes_ADAU1761.dat"
#else
#include "..\initialization_files\NumBytes_ADAU1761_v1.0.dat"
#endif
#endif
};

/// SigmaStudio exported TxBuffer file
uint8_t ADAU1761_Config_TxData[] = {

#if defined (__DIY_DAUGHTER_BOARD__)  // SAM + DIY Daughter Board Drivers
#if defined (__LIVE_DRIVER_DEBUG__)
#include "..\..\SigmaStudio Schematics\Converter configurations\SAM Board DIY Configurations\Exported init files\TxBuffer_ADAU1761.dat"
#else
#include "..\initialization_files\TxBuffer_ADAU1761_DIY_v1.1.dat"
#endif

#else // SAM Drivers
#if defined (__LIVE_DRIVER_DEBUG__)
#include "..\..\SigmaStudio Schematics\Converter configurations\SAM Board Configurations\Default\Exported init files\TxBuffer_ADAU1761.dat"
#else
#include "..\initialization_files\TxBuffer_ADAU1761_v1.0.dat"
#endif
#endif
};



/**
 * @brief      Initialize the ADAU1761 using the auto-generated export file from
 *             SigmaStudio
 *
 * @param      adau1761    A pointer to the instance for this driver
 * @param[in]  device_num  The SHARC TWI peripheral to use (e.g. TWI0, TWI1,
 *                         TWI2)
 *
 * @return     Result indicating success or failure
 */
ADAU1761_SIMPLE_RESULT adau1761_initialize( sADAU1761_Simple * adau1761, TWI_SIMPLE_DEVICE device_num ) {

	/// Set up simple register-driven TWI driver
	if (twi_initialize( &adau1761->twi, 0x38, 112500000, device_num) != TWI_SIMPLE_SUCCESS) {
		return ADAU1761_SIMPLE_ERROR;
	}
    twi_setClock( &adau1761->twi, 100000);

    /// Initialize ADAU1761 with TDM 8-channel talkthru configuration
    ADAU1761_SIMPLE_RESULT resAdau1761 = adau1761_loadBulkRegFile( adau1761,
    															ADAU1761_Config_TxData,
																ADAU1761_Config_NumBytes,
																sizeof(ADAU1761_Config_NumBytes)/sizeof(uint16_t));

    if (resAdau1761 != ADAU1761_SIMPLE_SUCCESS) return resAdau1761;

    /// Start the converter and mute output channels
    adau1761_muteDACs( adau1761 );

    return ADAU1761_SIMPLE_SUCCESS;
}

/**
 * @brief      Enables the ADAU1761 by unmuting the DACs
 *
 * @param      adau1761  A pointer to the instance for this driver
 */
void adau1761_enable( sADAU1761_Simple * adau1761 ) {

    /// Un-mute output channels to enable
    adau1761_unmuteDACs( adau1761 );

}

/**
 * @brief      Changes the sample rate for the ADAU1761
 *
 * @param      adau1761     A pointer to the instance for this driver
 * @param[in]  sample_rate  The sample rate preset (see .h file)
 */
void adau1761_setSampleRate( sADAU1761_Simple * adau1761, ADAU1761_SIMPLE_SAMPLE_RATE sample_rate ) {

	/// Step 1 - set CONVSR bit in R17
	uint8_t converterCtrl = adau1761_readCtrlReg(adau1761, ADAU1761_REG_CONVERTER_0 );
	converterCtrl &= 0xF8;
	converterCtrl |= sample_rate;
	adau1761_writeCtrlReg( adau1761, ADAU1761_REG_CONVERTER_0, converterCtrl );

	/// Step 2 - set DSPSR bit in R17
	uint8_t dspsr = 0x01; // default
	switch (sample_rate) {
		case ADAU1761_SAMPLE_RATE_8000HZ: 	dspsr = 0x06; break;
		case ADAU1761_SAMPLE_RATE_12000HZ: 	dspsr = 0x05; break;
		case ADAU1761_SAMPLE_RATE_16000HZ: 	dspsr = 0x04; break;
		case ADAU1761_SAMPLE_RATE_24000HZ: 	dspsr = 0x03; break;
		case ADAU1761_SAMPLE_RATE_32000HZ: 	dspsr = 0x02; break;
		case ADAU1761_SAMPLE_RATE_48000HZ: 	dspsr = 0x01; break;
		case ADAU1761_SAMPLE_RATE_96000HZ: 	dspsr = 0x00; break;
	}
	adau1761_writeCtrlReg( adau1761, ADAU1761_REG_DSP_SAMPLING_RATE_SETTING, dspsr );

	/// Step 3 - set SPSR bin in R64
	adau1761_writeCtrlReg( adau1761, ADAU1761_REG_SERIAL_PORT_SAMPLING_RATE, sample_rate );

}

/**
 * @brief      Mutes the DACs on the ADAU1761
 *
 * @param      adau1761  A pointer to the instance for this driver
 */
void adau1761_muteDACs( sADAU1761_Simple * adau1761 ) {

	uint8_t leftVolCtrl = adau1761_readCtrlReg(adau1761, ADAU1761_REG_LINE_OUTPUT_LEFT_VOL );
	uint8_t rightVolCtrl = adau1761_readCtrlReg(adau1761, ADAU1761_REG_LINE_OUTPUT_RIGHT_VOL );

	/// Clear LOUTM / ROUTM to mute
	leftVolCtrl  &= 0xFD;
	rightVolCtrl &= 0xFD;

	adau1761_writeCtrlReg( adau1761, ADAU1761_REG_LINE_OUTPUT_LEFT_VOL, leftVolCtrl );
	adau1761_writeCtrlReg( adau1761, ADAU1761_REG_LINE_OUTPUT_RIGHT_VOL, rightVolCtrl );

}

/**
 * @brief      Sets up serial port on ADAU1761 to use TDM mode
 *
 * @param      adau1761  A pointer to the instance for this driver
 */
void adau1761_enablePulseTDMMode( sADAU1761_Simple * adau1761 ) {

	uint8_t sportCtrl = adau1761_readCtrlReg(adau1761, ADAU1761_REG_SERIAL_PORT_0 );

	/// Set LRMOD bit
	sportCtrl |= 0x20;

	adau1761_writeCtrlReg( adau1761, ADAU1761_REG_SERIAL_PORT_0, sportCtrl );
}

/**
 * @brief      Unmutes the DACs on the ADAU1761
 *
 * @param      adau1761  A pointer to the instance for this driver
 */
void adau1761_unmuteDACs( sADAU1761_Simple * adau1761 ) {

	uint8_t leftVolCtrl = adau1761_readCtrlReg(adau1761, ADAU1761_REG_LINE_OUTPUT_LEFT_VOL );
	uint8_t rightVolCtrl = adau1761_readCtrlReg(adau1761, ADAU1761_REG_LINE_OUTPUT_RIGHT_VOL );

	/// Set LOUTM / ROUTM to unmute
	leftVolCtrl  |= 0x02;
	rightVolCtrl |= 0x02;

	adau1761_writeCtrlReg( adau1761, ADAU1761_REG_LINE_OUTPUT_LEFT_VOL, leftVolCtrl );
	adau1761_writeCtrlReg( adau1761, ADAU1761_REG_LINE_OUTPUT_RIGHT_VOL, rightVolCtrl );

}


/**
 * @brief      Reads a control register from the ADAU1761 using its 16-bit
 *             address.  See the ADAU1761 datasheet for more info on control
 *             registers.
 *
 * @param      adau1761  Pointer to the instance of this driver
 * @param[in]  address   The control register address to read
 *
 * @return     The value of the control register
 */
uint8_t adau1761_readCtrlReg( sADAU1761_Simple * adau1761, ADAU1761_SIMPLE_CONTROL_REGISTER address ) {

    uint8_t addr[2], value;
    addr[0] = address >> 8;
    addr[1] = address & 0xff;

    twi_write_block_r( &adau1761->twi, addr, 2, true );
    value = twi_read( &adau1761->twi );

    return value;
}


/**
 * @brief      Writes an 8-bit value to a control register on the ADAU1761 using
 *             its 16-bit control register address.  See the ADAU1761 datasheet
 *             for more info on control registers.
 *
 * @param      adau1761  Pointer to the instance of this driver
 * @param[in]  address   The control register address to write
 * @param[in]  value     The value to write to the control register
 */
void adau1761_writeCtrlReg( sADAU1761_Simple * adau1761, ADAU1761_SIMPLE_CONTROL_REGISTER address, uint8_t value ) {
    uint8_t seq[3];
    seq[0] = address >> 8;
    seq[1] = address & 0xff;
    seq[2] = value;

    twi_write_block(&adau1761->twi, seq, 3);
}


/**
 * @brief      Writes to the parameter RAM on the ADAU1761 so parameters can be
 *             modified in real time. Note: the DSP within the ADAU1761 needs to
 *             be running before the parameter RAM can be accessed.   This is
 *             usually accomplished by loading a bulk register / memory
 *             configuration file.  Attempting to access parameter accesses.
 *
 * @param      adau1761  Pointer to the instance of this driver
 * @param[in]  address   The parameter memory address to write
 * @param[in]  value     The value to write
 */
void adau1761_writeParameterRAM( sADAU1761_Simple * adau1761, uint16_t address, uint32_t value ) {

    uint8_t seq[6];
    seq[0] = address >> 8;
    seq[1] = address & 0xff;

    // MSB first
    seq[2] = (value >> 24) & 0xff;
    seq[3] = (value >> 16) & 0xff;
    seq[4] = (value >> 8) & 0xff;
    seq[5] = (value) & 0xff;

    twi_write_block(&adau1761->twi, seq, 6);

}


/**
 * @brief      Reads from the parameter RAM on the ADAU1761 so parameters can be
 *             modifiedin real time. Note: the DSP within the ADAU1761 needs to
 *             be running before theparameter RAM can be accessed.   This is
 *             usually accomplished by loading abulk register / memory
 *             configuration file.  Attempting to access parametermemory before
 *             the device has been configured will result in
 *             unpredictable accesses.
 *
 * @param      adau1761  Pointer to the instance of this driver
 * @param[in]  address   The parameter memory address to read
 *
 * @return     The read value
 */
uint32_t adau1761_readParameterRAM( sADAU1761_Simple * adau1761, uint16_t address ) {
    uint8_t addr[2], rx_buffer[4];
    uint32_t result = 0;
    addr[0] = address >> 8;
    addr[1] = address & 0xff;

    twi_write_block_r(&adau1761->twi, addr, 2, true);
    twi_read_block(&adau1761->twi, rx_buffer, 4);

    result |= (rx_buffer[0] << 24);
    result |= (rx_buffer[1] << 16);
    result |= (rx_buffer[2] << 8);
    result |= (rx_buffer[3]);

    return result;
}


/**
 * @brief      The SigmaStudio tools can dump a set of configuration files for
 *             easy device set up via Action -> Export System Files.  Amongst
 *             these files will be alenght and a data file that need to be
 *             imported (See the ADAU1761 testing codefor an example).  This
 *             typically starts the ADAU1761 DSP at the end of theloading
 *             process so device set up becomes incredibly simple.
 *
 * @param      adau1761    Pointer to the instance of this driver
 * @param      values      The values
 * @param      lengths     The lengths
 * @param[in]  totalLines  The total lines
 *
 * @return     { description_of_the_return_value }
 */
ADAU1761_SIMPLE_RESULT adau1761_loadBulkRegFile( sADAU1761_Simple * adau1761, uint8_t * values, uint16_t * lengths, uint16_t totalLines ) {

    int i,j;
    uint16_t length;
    volatile int v;

#if defined(DEBUG_ADAU1761)
        printf(" adau1761_loadBulkRegFile(): Total lines to load %d\n",totalLines);
#endif

    for (i=0; i < totalLines; i++) {

        length = *lengths++;

#if defined(DEBUG_ADAU1761)
        printf(" adau1761_loadBulkRegFile(): Line %d, count %d, val[0] %#02x\n",i,length,*values);
#endif
        
        // Look for any corrupted values in the initialization
        if (length > 10000 || length == 0) {
        	return ADAU1761_SIMPLE_CORRUPT_INIT_FILE;
        } else {
            // perform a bulk write
            twi_write_block(&adau1761->twi, values, length);
        }

        values += length;

        // Add a delay between the blocks. Without a sufficient delay between
        // blocks, the ADAU1761 won't initialize properly after a cold boot.
        for ( j=0; j < 100000; j++ ) { v++; }
    }

    // Confirm that the DSP Core is running
    uint8_t dspRun = adau1761_readCtrlReg(adau1761, ADAU1761_REG_DSP_RUN );

    if (dspRun & 0x1) {
    	return ADAU1761_SIMPLE_SUCCESS;
    }
    else {
#if defined(DEBUG_ADAU1761)
        printf(" adau1761_loadBulkRegFile(): Error - DSP Core not running\n");
#endif
    	return ADAU1761_SIMPLE_ERROR;
    }
}

