/*********************************************************************************

Copyright(c) 2017 Analog Devices, Inc. All Rights Reserved.

This software is proprietary and confidential.  By using this software you agree
to the terms of the associated Analog Devices License Agreement.

*********************************************************************************/
/**
 * @file       adau1977.h
 * @brief      ADAU1977 ADC
 * @author     Dan Ledger / Run Jump Labs
 * @date       $Date: 2017-05-18 $
 * @brief      This is the primary header file for ADAU1979 ADC. The file
 *             contains the API declarations, data structure and constant
 *             definitions used in the APIs.
 */

#ifndef __ADAU1977_SIMPLE_H__
#define __ADAU1977_SIMPLE_H__

/*=============  I N C L U D E S   =============*/
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#include "..\twi_simple\twi_simple.h"

/*==============  D E F I N E S  ===============*/

#define DEBUG_ADAU1977          (false)

/// As configured on the automotive board
#define ADAU1977_TWI_ADDR       (0x11)


/// ADAU1977 return values
typedef enum 
{
    ADAU1977_SIMPLE_SUCCESS,                   ///< The API call is success
    ADAU1977_SIMPLE_CORRUPT_INIT_FILE,         ///< SS-generated initialization file is corrupt
    ADAU1977_SIMPLE_ERROR                      ///< General failure

} ADAU1977_SIMPLE_RESULT;


/// ADAU1977 device registers 
typedef enum
{
    ADAU1977_REG_M_POWER         = (0x00),   /*!< M_POWER */
    ADAU1977_REG_PLL_CONTROL     = (0x01),   /*!< PLL_CONTROL */
    ADAU1977_REG_BST_CONTROL     = (0x02),   /*!< BST_CONTROL */
    ADAU1977_REG_MB_BST_CONTROL  = (0x03),   /*!< MB_BST_CONTROL */
    ADAU1977_REG_BLOCK_POWER_SAI = (0x04),   /*!< BLOCK_POWER_SAI */
    ADAU1977_REG_SAI_CTRL0       = (0x05),   /*!< SAI_CTRL0 */
    ADAU1977_REG_SAI_CTRL1       = (0x06),   /*!< SAI_CTRL1 */
    ADAU1977_REG_SAI_CMAP12      = (0x07),   /*!< SAI_CMAP12 */
    ADAU1977_REG_SAI_CMAP34      = (0x08),   /*!< SAI_CMAP34 */
    ADAU1977_REG_SAI_OVERTEMP    = (0x09),   /*!< SAI_OVERTEMP */
    ADAU1977_REG_POSTADC_GAIN1   = (0x0A),   /*!< POSTADC_GAIN1 */
    ADAU1977_REG_POSTADC_GAIN2   = (0x0B),   /*!< POSTADC_GAIN2 */
    ADAU1977_REG_POSTADC_GAIN3   = (0x0C),   /*!< POSTADC_GAIN3 */
    ADAU1977_REG_POSTADC_GAIN4   = (0x0D),   /*!< POSTADC_GAIN4 */
    ADAU1977_REG_MISC_CONTROL    = (0x0E),   /*!< MISC_CONTROL */
    ADAU1977_REG_DIAG_CONTROL    = (0x10),   /*!< DIAG_CONTROL */
    ADAU1977_REG_DIAG_STATUS1    = (0x11),   /*!< DIAG_STATUS1 */
    ADAU1977_REG_DIAG_STATUS2    = (0x12),   /*!< DIAG_STATUS2 */
    ADAU1977_REG_DIAG_STATUS3    = (0x13),   /*!< DIAG_STATUS3 */
    ADAU1977_REG_DIAG_STATUS4    = (0x14),   /*!< DIAG_STATUS4 */
    ADAU1977_REG_DIAG_IRQ1       = (0x15),   /*!< DIAG_IRQ1 */
    ADAU1977_REG_DIAG_IRQ2       = (0x16),   /*!< DIAG_IRQ2 */
    ADAU1977_REG_DIAG_ADJUST1    = (0x17),   /*!< DIAG_ADJUST1 */
    ADAU1977_REG_DIAG_ADJUST2    = (0x18),   /*!< DIAG_ADJUST2 */
    ADAU1977_REG_ASDC_CLIP       = (0x19),   /*!< ASDC_CLIP */
    ADAU1977_REG_DC_HPF_CAL      = (0x1A),   /*!< DC_HPF_CAL */
} ADAU1977_SIMPLE_CONTROL_REGISTER;


#ifdef __cplusplus
extern "C"{
#endif

/**
 * A simple structure that contains information for a single instance of this
 * driver
 */
typedef struct {
    sTWI twi;      ///< Simple TWI driver
} sADAU1977_Simple;


ADAU1977_SIMPLE_RESULT     adau1977_initialize( sADAU1977_Simple * adau1977, 
                                                TWI_SIMPLE_DEVICE device_num );

uint8_t                    adau1977_read_register( sADAU1977_Simple * adau1977, 
                                                   ADAU1977_SIMPLE_CONTROL_REGISTER address );

void                       adau1977_write_register( sADAU1977_Simple * adau1977, 
                                                    ADAU1977_SIMPLE_CONTROL_REGISTER address,
                                                    uint8_t value );

ADAU1977_SIMPLE_RESULT     adau1977_loadBulkRegFile( sADAU1977_Simple * adau1977,
                                                     uint8_t * values,
                                                     uint16_t * lengths,
                                                     uint16_t totalLines );



#ifdef __cplusplus
} ///< extern "C"
#endif

///< __ADAU1452_H__
#endif
