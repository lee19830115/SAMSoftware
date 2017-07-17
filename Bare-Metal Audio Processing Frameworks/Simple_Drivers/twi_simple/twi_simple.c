/*********************************************************************************

Copyright(c) 2017 Analog Devices, Inc. All Rights Reserved.

This software is proprietary and confidential.  By using this software you agree
to the terms of the associated Analog Devices License Agreement.

*********************************************************************************/
/**
 * @file       twi_simple.c
 * @brief      A simple device driver for the TWO / I2C Port
 * @author     Dan Ledger / Run Jump Labs
 * @date       $Date: 2017-05-18 $
 * @brief      TWI Simple is a simple driver for the TWI / I2C interface on the
 *             SHARC processor.
 */

#include "twi_simple.h"



/**
 * @brief      Initialize an instance of the TWI driver
 *
 * @param      device        A pointer to the structure for the device driver
 *                           instance
 * @param[in]  address       The TWI / I2C address of the device
 * @param[in]  f_sclk0_freq  The f_sclk0 frequency of the processor
 * @param[in]  device_num    The device number (e.g., TWI0, TWI1, TWI2)
 *
 * @return     { description_of_the_return_value }
 */
TWI_SIMPLE_RESULT twi_initialize( sTWI * device, 
                                  uint8_t address, 
                                  uint32_t f_sclk0_freq, 
                                  TWI_SIMPLE_DEVICE device_num)
{
    /// Memory mapped control registers for each of the three TWI ports
    if (device_num == TWI0) {
        device->pREG_TWI_CTL        = pREG_TWI0_CTL;
        device->pREG_TWI_CLKDIV     = pREG_TWI0_CLKDIV;
        device->pREG_TWI_FIFOCTL    = pREG_TWI0_FIFOCTL;
        device->pREG_TWI_MSTRADDR   = pREG_TWI0_MSTRADDR;
        device->pREG_TWI_ISTAT      = pREG_TWI0_ISTAT;
        device->pREG_TWI_MSTRSTAT   = pREG_TWI0_MSTRSTAT;
        device->pREG_TWI_MSTRCTL    = pREG_TWI0_MSTRCTL;
        device->pREG_TWI_TXDATA8    = pREG_TWI0_TXDATA8;
        device->pREG_TWI_TXDATA16   = pREG_TWI0_TXDATA16;
        device->pREG_TWI_RXDATA8    = pREG_TWI0_RXDATA8;
        device->pREG_TWI_RXDATA16   = pREG_TWI0_RXDATA16;
    }
    else if (device_num == TWI1) {
        device->pREG_TWI_CTL        = pREG_TWI1_CTL;
        device->pREG_TWI_CLKDIV     = pREG_TWI1_CLKDIV;
        device->pREG_TWI_FIFOCTL    = pREG_TWI1_FIFOCTL;
        device->pREG_TWI_MSTRADDR   = pREG_TWI1_MSTRADDR;
        device->pREG_TWI_ISTAT      = pREG_TWI1_ISTAT;
        device->pREG_TWI_MSTRSTAT   = pREG_TWI1_MSTRSTAT;
        device->pREG_TWI_MSTRCTL    = pREG_TWI1_MSTRCTL;
        device->pREG_TWI_TXDATA8    = pREG_TWI1_TXDATA8;
        device->pREG_TWI_TXDATA16   = pREG_TWI1_TXDATA16;
        device->pREG_TWI_RXDATA8    = pREG_TWI1_RXDATA8;
        device->pREG_TWI_RXDATA16   = pREG_TWI1_RXDATA16;
    }
    else if (device_num == TWI2) {
        device->pREG_TWI_CTL        = pREG_TWI2_CTL;
        device->pREG_TWI_CLKDIV     = pREG_TWI2_CLKDIV;
        device->pREG_TWI_FIFOCTL    = pREG_TWI2_FIFOCTL;
        device->pREG_TWI_MSTRADDR   = pREG_TWI2_MSTRADDR;
        device->pREG_TWI_ISTAT      = pREG_TWI2_ISTAT;
        device->pREG_TWI_MSTRSTAT   = pREG_TWI2_MSTRSTAT;
        device->pREG_TWI_MSTRCTL    = pREG_TWI2_MSTRCTL;
        device->pREG_TWI_TXDATA8    = pREG_TWI2_TXDATA8;
        device->pREG_TWI_TXDATA16   = pREG_TWI2_TXDATA16;
        device->pREG_TWI_RXDATA8    = pREG_TWI2_RXDATA8;
        device->pREG_TWI_RXDATA16   = pREG_TWI2_RXDATA16;
    }

    /// Check to see that the clock frequency passed is within valid limits
    if (f_sclk0_freq > TWI_SIMPLE_MAX_SCLK0_FREQ) {
    	return TWI_SIMPLE_INVALID_SCLK0_FREQ;
    } else if ( f_sclk0_freq < 10000000) {
    	return TWI_SIMPLE_INVALID_SCLK0_FREQ;
    }

    /// Set f_sclk0 frequency
    device->_f_sclk0 = f_sclk0_freq;

    /// Set prescalar to f_sclk0_freq / 10MHz
    device->_prescale = (uint8_t) (f_sclk0_freq / 10000000);

    /// Set duty cycle
    device->_dutyCycle = 0.40;

    /// default clock div 100KHz by default
    device->_clkdiv = 0x283C;

    /// Set device address
    device-> _address = address; 

    /// Reset the TWI controller
    *device->pREG_TWI_CTL      = 0x00;                          
    *device->pREG_TWI_CTL      = BITM_TWI_CTL_EN | 
                               ((device->_prescale << BITP_TWI_CTL_PRESCALE) & BITM_TWI_CTL_PRESCALE) |
                               0;

    *device->pREG_TWI_MSTRCTL  = 0;

    /// Clear status bits
    *device->pREG_TWI_MSTRSTAT = ( ENUM_TWI_MSTRSTAT_BUFWRERR_YES | ENUM_TWI_MSTRSTAT_BUFRDERR_YES |
                                   ENUM_TWI_MSTRSTAT_DNAK_YES | ENUM_TWI_MSTRSTAT_ANAK_YES | ENUM_TWI_MSTRSTAT_LOSTARB_YES );

    /// Clearing all pending interrupt flags
    *device->pREG_TWI_ISTAT = 0xFF;
        
    /// set clock
    *device->pREG_TWI_CLKDIV = device->_clkdiv;

    /// Set the device address
    *device->pREG_TWI_MSTRADDR = device->_address;

    return TWI_SIMPLE_SUCCESS;
}


/**
 * @brief      Single byte write over I2C / TWI / Wire interface
 *
 * @param      device  A pointer to the instance for this driver
 * @param[in]  value   The 8-bit value to write
 */
void twi_write(sTWI * device, uint8_t value) {

    /// load 8-bit TX data register with value to transmit
    (*device->pREG_TWI_TXDATA8) = value;

    /// Enable master transmitter
    (*device->pREG_TWI_MSTRCTL)  =   (1<<6) |  // set count to a 1
                            BITM_TWI_MSTRCTL_EN | // enable 
                            0;

    /// wait for transmission to complete
    while(!((*device->pREG_TWI_ISTAT) & BITM_TWI_ISTAT_MCOMP)) {}

    /// Clear completion status bit
    (*device->pREG_TWI_ISTAT) |= BITM_TWI_ISTAT_MCOMP;

}

/**
 * @brief      Single byte write over I2C / TWI / Wire interface with option to
 *             suppress stop bit (rstart = true)
 *
 * @param      device  A pointer to the instance for this driver
 * @param[in]  value   The value to write
 * @param[in]  rstart  Whether or not to send a stop bit at the end of the
 *                     transmission. If rstart = true, a stop bit will not be
 *                     sent
 */
void twi_write_r(sTWI * device, uint8_t value, bool rstart) {
           
    /// Load 8-bit TX data register with value to transmit
	(*device->pREG_TWI_TXDATA8) = value;

    /// Enable master transmitter
	(*device->pREG_TWI_MSTRCTL)  =   (1<<6) |  ///< set count to a 1
                                     BITM_TWI_MSTRCTL_EN | ///< enable
                                     0;

    /// Check to see if we're supressing the stop bit after the transmission
    if (rstart) {
    	(*device->pREG_TWI_MSTRCTL)  |=  BITM_TWI_MSTRCTL_RSTART; //< repeated start enabled
    }      

    /// Wait for transmission to complete
    while(!((*device->pREG_TWI_ISTAT & BITM_TWI_ISTAT_MCOMP))) {}

    (*device->pREG_TWI_ISTAT) |= BITM_TWI_ISTAT_MCOMP;

}


/**
 * @brief      Multi-byte write over I2c / TWI / Wire.  When rstart = true, the
 *             interface will not send a stop bit at the end of the transfer so
 *             it can be immediately followed by a read.
 *
 *             When writing to control registers on devices connected to this
 *             port, this is typically required when doing a read of a specific
 *             register address.  Write the address with this  rstart = true,
 *             and immediately follow this with a read.
 *
 *             The SHARC's TWI port does support a block transfer but it is
 *             limited in size. It cannot support the larger transfer block
 *             sizes required to send a SigmaDSP initialization block to a
 *             SigmaDSP, for example. Therefore, this routine doesn't rely 
 *
 * @param      device  A pointer to the instance for this driver
 * @param      values  A pointer to the buffer to be written
 * @param[in]  count   The number of bytes to write
 * @param[in]  rstart  Whether or not to send a stop bit at the end of the
 *                     transmission. If rstart = true, a stop bit will not be
 *                     sent.
 */
void twi_write_block_r(sTWI * device, uint8_t * values, uint16_t count, bool rstart) {

	int i;

	for (i=0;i<count-1;i++) {
        /// Load value into TX register
		(*device->pREG_TWI_TXDATA8) = values[i];

        /// Set up the transfer
		(*device->pREG_TWI_MSTRCTL)  =   (2<<6) |  // set count to a 1
                                         BITM_TWI_MSTRCTL_EN | // enable
                                         0;	

        /// Wait for transfer to complete
        while(!((*device->pREG_TWI_ISTAT) & BITM_TWI_ISTAT_TXSERV)) {}
        (*device->pREG_TWI_ISTAT) |= BITM_TWI_ISTAT_TXSERV;

	}
	// send final write with stop bit

    if (rstart) {
    	(*device->pREG_TWI_MSTRCTL)  |=  BITM_TWI_MSTRCTL_RSTART; // repeated start enabled
    }    

    (*device->pREG_TWI_TXDATA8) = values[count-1];

    while(!((*device->pREG_TWI_ISTAT) & BITM_TWI_ISTAT_MCOMP)) {}
    (*device->pREG_TWI_ISTAT) |= BITM_TWI_ISTAT_MCOMP;

}



/**
 * @brief      Standard multi-byte write followed by an optional I2C stop bit
 *
 * @param      device  A pointer to the instance for this driver
 * @param      values  A pointer to the buffer to be written
 * @param[in]  count   The number of bytes to write
 */
void twi_write_block(sTWI * device, uint8_t * values, uint16_t count) {
    twi_write_block_r(device, values, count, false);
}



/**
 * @brief      Standard single-byte TWI read
 *
 * @param      device  A pointer to the instance for this driver
 *
 * @return     returns the 8-bit value that was read
 */
uint8_t  twi_read(sTWI * device) {

    // Enable master transmitter
	(*device->pREG_TWI_MSTRCTL)  =   BITM_TWI_MSTRCTL_DIR | // receive mode
                            (1 << 6) |  // set count to a 1
                            BITM_TWI_MSTRCTL_EN | // enable 
                            0;

    // wait for transmission to complete
    while(!((*device->pREG_TWI_ISTAT) & BITM_TWI_ISTAT_MCOMP)) {
    	// TODO - add timeout code
    }
    (*device->pREG_TWI_ISTAT) |= BITM_TWI_ISTAT_MCOMP;

    uint8_t val = (*device->pREG_TWI_RXDATA8);

    return val;
}


/**
 * @brief      Standard single-byte TWI read with the option to suppress the
 *             stop bit at the end of the transacation
 *
 * @param      device  A pointer to the instance for this driver
 * @param[in]  rstart  Whether or not to suppress the stop bit (true = suppress it, false = do not suppress it)
 *
 * @return     returns the 8-bit value that was read
 */
uint8_t twi_read_r(sTWI * device, bool rstart) {
    // Enable master transmitter
	(*device->pREG_TWI_MSTRCTL)  =    BITM_TWI_MSTRCTL_DIR | // receive mode
                            (1 << 6) |  // set count to a 1
                            BITM_TWI_MSTRCTL_EN | // enable
							BITM_TWI_MSTRCTL_RSTART | // do not send stop bit after read
							0;

    // wait for transmission to complete
    while(!((*device->pREG_TWI_ISTAT) & BITM_TWI_ISTAT_MCOMP)) {
    	// TODO - add timeout code
    }

    (*device->pREG_TWI_ISTAT) |= BITM_TWI_ISTAT_MCOMP;

    uint8_t val = (*device->pREG_TWI_RXDATA8);

    return val;
}


/**
 * @brief      Multi-byte block read with the option to suppress the stop bit at
 *             the end of the transmission
 *
 * @param      device  A pointer to the instance for this driver
 * @param      values  Pointer to an array where this data will be read to
 * @param[in]  count   The number of bytes to be read
 * @param[in]  rstart  Whether or not to suppress the stop bit (true = suppress it, false = do not suppress it)
 */
void twi_read_block_r(sTWI * device, uint8_t * values, uint16_t count, bool rstart) {

    int i;
    for (i=0;i<count-1;i++) {

    	(*device->pREG_TWI_MSTRCTL)  =   BITM_TWI_MSTRCTL_DIR | // receive mode
                                (2 << 6) |  // set count to a 1
                                BITM_TWI_MSTRCTL_EN | // enable 
                                0;

        // wait for reception to complete
        while(!((*device->pREG_TWI_ISTAT) & BITM_TWI_ISTAT_RXSERV)) {}
        (*device->pREG_TWI_ISTAT) |= BITM_TWI_ISTAT_RXSERV;

        values[i] = (*device->pREG_TWI_RXDATA8);
    }
    // send final write with stop bit

    if (rstart) {
    	(*device->pREG_TWI_MSTRCTL)  |=  BITM_TWI_MSTRCTL_RSTART; // repeated start enabled
    }  

    while(!((*device->pREG_TWI_ISTAT) & BITM_TWI_ISTAT_MCOMP)) { }
    (*device->pREG_TWI_ISTAT) |= BITM_TWI_ISTAT_MCOMP;

    values[count-1] = (*device->pREG_TWI_RXDATA8);
}


/**
 * @brief      { function_description }
 *
 * @param      device  The device
 * @param      values  The values
 * @param[in]  count   The count
 */
void twi_read_block(sTWI * device, uint8_t * values, uint16_t count) {

	twi_read_block_r(device, values, count, false);

}

/**
 * @brief      Set the I2C / TWI / Wire clock rate using the actual desired
 *             clock rate (e.g. 100000)
 *
 * @param      device     The device
 * @param[in]  clockFreq  The clock frequency
 */
bool twi_setClock(sTWI * device, uint32_t clockFreq)
{
    float x = 1 / (float) clockFreq;
    float period = x / (100*1E-9);  // divide by 100ns

    float clocksHigh = period * device->_dutyCycle;
    float clocksLow = period * (1.0-device->_dutyCycle);

    // TODO: have this return an enum with invalid clock frequency
    if (clocksHigh > 255.0) {
        return false;
    }
    if (clocksLow > 255.0) {
        return false;
    }

    device->_clkdiv = (((uint8_t) clocksHigh) << 8) + (uint8_t) clocksLow;
    (*device->pREG_TWI_CLKDIV) = device->_clkdiv;

    return true;
 }
