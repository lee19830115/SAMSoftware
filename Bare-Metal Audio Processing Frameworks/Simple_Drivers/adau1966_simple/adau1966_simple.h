/*********************************************************************************

Copyright(c) 2017 Analog Devices, Inc. All Rights Reserved.

This software is proprietary and confidential.  By using this software you agree
to the terms of the associated Analog Devices License Agreement.

*********************************************************************************/
/**
 * @file       adau1966.h
 * @brief      ADAU1966 DAC
 * @author     Dan Ledger / Run Jump Labs
 * @date       $Date: 2017-05-18 $
 * @brief      This is the primary header file for ADAU1966 DAC. The file
 *             contains the API declarations, data structure and constant
 *             definitions used in the APIs.
 */

#ifndef __ADAU1966_SIMPLE_H__
#define __ADAU1966_SIMPLE_H__


/*=============  I N C L U D E S   =============*/
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#include "..\twi_simple\twi_simple.h"

/*==============  D E F I N E S  ===============*/

#define DEBUG_ADAU1966          (false)

 /// As configured on the automotive board
#define ADAU1966_TWI_ADDR	    (0x04)

/// ADAU1966 return values
typedef enum 
{
    ADAU1966_SIMPLE_SUCCESS,                   ///< The API call is success
    ADAU1966_SIMPLE_CORRUPT_INIT_FILE,         ///< SS-generated initialization file is corrupt
    ADAU1966_SIMPLE_ERROR                      ///< General failure

} ADAU1966_SIMPLE_RESULT;


/// ADAU1966 device registers 
typedef enum
{
    ADAU1966_REG_PLL_CLK_CTRL0       = (0x00),   /*!< PLL_CLK_CTRL0 */
    ADAU1966_REG_PLL_CLK_CTRL1       = (0x01),   /*!< PLL_CLK_CTRL1 */
    ADAU1966_REG_PDN_THRMSENS_CTRL_1 = (0x02),   /*!< PDN_THRMSENS_CTRL_1 */
    ADAU1966_REG_PDN_CTRL2           = (0x03),   /*!< PDN_CTRL2 */
    ADAU1966_REG_PDN_CTRL3           = (0x04),   /*!< PDN_CTRL3 */
    ADAU1966_REG_THRM_TEMP_STAT      = (0x05),   /*!< THRM_TEMP_STAT */
    ADAU1966_REG_DAC_CTRL0           = (0x06),   /*!< DAC_CTRL0 */
    ADAU1966_REG_DAC_CTRL1           = (0x07),   /*!< DAC_CTRL1 */
    ADAU1966_REG_DAC_CTRL2           = (0x08),   /*!< DAC_CTRL2 */
    ADAU1966_REG_DAC_MUTE1           = (0x09),   /*!< DAC_MUTE1 */
    ADAU1966_REG_DAC_MUTE2           = (0x0A),   /*!< DAC_MUTE2 */
    ADAU1966_REG_DACMSTR_VOL         = (0x0B),   /*!< DACMSTR_VOL */
    ADAU1966_REG_DAC01_VOL           = (0x0C),   /*!< DAC01_VOL */
    ADAU1966_REG_DAC02_VOL           = (0x0D),   /*!< DAC02_VOL */
    ADAU1966_REG_DAC03_VOL           = (0x0E),   /*!< DAC03_VOL */
    ADAU1966_REG_DAC04_VOL           = (0x0F),   /*!< DAC04_VOL */
    ADAU1966_REG_DAC05_VOL           = (0x10),   /*!< DAC05_VOL */
    ADAU1966_REG_DAC06_VOL           = (0x11),   /*!< DAC06_VOL */
    ADAU1966_REG_DAC07_VOL           = (0x12),   /*!< DAC07_VOL */
    ADAU1966_REG_DAC08_VOL           = (0x13),   /*!< DAC08_VOL */
    ADAU1966_REG_DAC09_VOL           = (0x14),   /*!< DAC09_VOL */
    ADAU1966_REG_DAC10_VOL           = (0x15),   /*!< DAC10_VOL */
    ADAU1966_REG_DAC11_VOL           = (0x16),   /*!< DAC11_VOL */
    ADAU1966_REG_DAC12_VOL           = (0x17),   /*!< DAC12_VOL */
    ADAU1966_REG_DAC13_VOL           = (0x18),   /*!< DAC13_VOL */
    ADAU1966_REG_DAC14_VOL           = (0x19),   /*!< DAC14_VOL */
    ADAU1966_REG_DAC15_VOL           = (0x1A),   /*!< DAC15_VOL */
    ADAU1966_REG_DAC16_VOL           = (0x1B),   /*!< DAC16_VOL */
    ADAU1966_REG_CM_SEL_PAD_STRGTH   = (0x1C),   /*!< CM_SEL_PAD_STRGTH */
    ADAU1966_REG_DAC_POWER1          = (0x1D),   /*!< DAC_POWER1 */
    ADAU1966_REG_DAC_POWER2          = (0x1E),   /*!< DAC_POWER2 */
    ADAU1966_REG_DAC_POWER3          = (0x1F),   /*!< DAC_POWER3 */
    ADAU1966_REG_DAC_POWER4          = (0x20),   /*!< DAC_POWER4 */
} ADAU1966_SIMPLE_CONTROL_REGISTER;




#ifdef __cplusplus
extern "C"{
#endif

/**
 * A simple structure that contains information for a single instance of this
 * driver
 */
typedef struct {
    sTWI twi;      ///< Simple TWI driver
} sADAU1966_Simple;


ADAU1966_SIMPLE_RESULT     adau1966_initialize( sADAU1966_Simple * adau1966, 
											    TWI_SIMPLE_DEVICE device_num );

void 	                   adau1966_enable( sADAU1966_Simple * adau1966 );

ADAU1966_SIMPLE_RESULT     adau1966_loadBulkRegFile( sADAU1966_Simple * adau1966, 
                                                     uint8_t * values, 
                                                     uint16_t * lengths, 
                                                     uint16_t totalLines );


#ifdef __cplusplus
} ///< extern "C"
#endif

///< __ADAU1966_SIMPLE_H__
#endif

