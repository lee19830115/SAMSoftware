/*********************************************************************************

Copyright(c) 2017 Analog Devices, Inc. All Rights Reserved.

This software is proprietary and confidential.  By using this software you agree
to the terms of the associated Analog Devices License Agreement.

*********************************************************************************/
/**
 * @file       adau1979.h
 * @brief      ADAU1979 ADC
 * @author     Dan Ledger / Run Jump Labs
 * @date       $Date: 2017-05-18 $
 * @brief      This is the primary header file for ADAU1979 ADC. The file
 *             contains the API declarations, data structure and constant
 *             definitions used in the APIs.
 */

#ifndef __ADAU1979_SIMPLE_H__
#define __ADAU1979_SIMPLE_H__

/*=============  I N C L U D E S   =============*/
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#include "..\twi_simple\twi_simple.h"

/*==============  D E F I N E S  ===============*/

#define DEBUG_ADAU1979          (false)


/**
 * Important! Earlier revisions of the automotive daughter board for the SHARC
 * SAM board had both the ADAU1977 and the ADAU1979 mapped to the same I2C / TWI
 * address which is 0x11.  Some of these earlier boards were hand-modified such
 * that the ADDR1 bit of the ADAU1979 was pulled high thus changing its I2C
 * address.
 */
#define ADAU1979_TWI_ADDR	    (0x51)

#if (ADAU1979_TWI_ADDR != 0x11)
#warning The ADAU1979 driver is configured to use a non-standard I2C base address for the ADAU1979 on the automotive extender board. Only do this if you have modified the ADDR0/ADDR1 hardware configuration for thie ADAU1979. Otherwise, set the TWI address to 0x11.
#endif


/// ADAU1979 return values
typedef enum 
{
	ADAU1979_SIMPLE_SUCCESS,   		  		///< The API call is success
	ADAU1979_SIMPLE_CORRUPT_INIT_FILE, 		///< SS-generated initialization file is corrupt
	ADAU1979_SIMPLE_ERROR						///< General failure

} ADAU1979_SIMPLE_RESULT;


/// ADAU1979 device registers
typedef enum
{
    ADAU1979_REG_M_POWER         = (0x00),   /*!< M_POWER */
    ADAU1979_REG_PLL_CONTROL     = (0x01),   /*!< PLL_CONTROL */
    ADAU1979_REG_BST_CONTROL     = (0x02),   /*!< BST_CONTROL */
    ADAU1979_REG_MB_BST_CONTROL  = (0x03),   /*!< MB_BST_CONTROL */
    ADAU1979_REG_BLOCK_POWER_SAI = (0x04),   /*!< BLOCK_POWER_SAI */
    ADAU1979_REG_SAI_CTRL0       = (0x05),   /*!< SAI_CTRL0 */
    ADAU1979_REG_SAI_CTRL1       = (0x06),   /*!< SAI_CTRL1 */
    ADAU1979_REG_SAI_CMAP12      = (0x07),   /*!< SAI_CMAP12 */
    ADAU1979_REG_SAI_CMAP34      = (0x08),   /*!< SAI_CMAP34 */
    ADAU1979_REG_SAI_OVERTEMP    = (0x09),   /*!< SAI_OVERTEMP */
    ADAU1979_REG_POSTADC_GAIN1   = (0x0A),   /*!< POSTADC_GAIN1 */
    ADAU1979_REG_POSTADC_GAIN2   = (0x0B),   /*!< POSTADC_GAIN2 */
    ADAU1979_REG_POSTADC_GAIN3   = (0x0C),   /*!< POSTADC_GAIN3 */
    ADAU1979_REG_POSTADC_GAIN4   = (0x0D),   /*!< POSTADC_GAIN4 */
    ADAU1979_REG_MISC_CONTROL    = (0x0E),   /*!< MISC_CONTROL */
    ADAU1979_REG_ASDC_CLIP       = (0x19),   /*!< ASDC_CLIP */
    ADAU1979_REG_DC_HPF_CAL      = (0x1A),   /*!< DC_HPF_CAL */
} ADAU1979_SIMPLE_CONTROL_REGISTER;


#ifdef __cplusplus
extern "C"{
#endif

/**
 * A simple structure that contains information for a single instance of this
 * driver
 */
typedef struct {
    sTWI twi;      ///< Simple TWI driver
} sADAU1979_Simple;


ADAU1979_SIMPLE_RESULT 	    adau1979_initialize( sADAU1979_Simple * adau1979,
											     TWI_SIMPLE_DEVICE device_num );

uint8_t 				adau1979_read_register( sADAU1979_Simple * adau1979,
												ADAU1979_SIMPLE_CONTROL_REGISTER address );

void 	  				adau1979_write_register( sADAU1979_Simple * adau1979,
												 ADAU1979_SIMPLE_CONTROL_REGISTER address,
										         uint8_t value );

ADAU1979_SIMPLE_RESULT 	    adau1979_loadBulkRegFile( sADAU1979_Simple * adau1979,
												      uint8_t * values,
												      uint16_t * lengths,
												      uint16_t totalLines );



#ifdef __cplusplus
} /// extern "C"
#endif

/// __ADAU1979_SIMPLE_H__
#endif
