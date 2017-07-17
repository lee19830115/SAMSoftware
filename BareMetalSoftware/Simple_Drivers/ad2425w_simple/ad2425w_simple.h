/*********************************************************************************

Copyright(c) 2017 Analog Devices, Inc. All Rights Reserved.

This software is proprietary and confidential.  By using this software you agree
to the terms of the associated Analog Devices License Agreement.

*********************************************************************************/
/**

 * @file:    adi_ad2425.h
 * @brief:   AD2425W A2B controller
 * @version: $Revision: 0 $
 * @date:    $Date: 2017-19-04 12:32:28 -0500 (May, 19 2017) $
 *
 * @details
 *            This is the primary header file for AD2425W A2B controller
 *            The file contains the API declarations, data structure and constant
 *            definitions used in the APIs.
 */


#ifndef __ADI_AD2425W_H__
#define __ADI_AD2425W_H__

/*=============  I N C L U D E S   =============*/
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#include "..\twi_simple\twi_simple.h"
#include "..\gpio_simple\gpio_simple.h"


/*==============  D E F I N E S  ===============*/

#define DEBUG_AD2425W

 /// This is the base address for TWI on the SAM board
 /// ADR1 / ADR2 : Pulled low
 ///  Bit 1 : MSTR=0, BUS=1
#define AD2425W_TWI_ADDR	(0x64)


typedef enum
{
	AD2425W_SIMPLE_MASTER,   		  		///< Master mode
	AD2425W_SIMPLE_SLAVE					///< Slave mode
} AD2425W_SIMPLE_MODE;


typedef enum
{
	AD2425W_SIMPLE_SUCCESS,   		  		// The API call is success
	AD2425W_SIMPLE_INVALID_GPIO,			// General failure
	AD2425W_SIMPLE_ERROR					// General failure
} AD2425W_SIMPLE_RESULT;

typedef struct {
    sTWI twi;      ///< Simple TWI driver
    portpin _irq_pin;
    portpin _mstr_pin;
} sAD2425W_Simple;


#ifdef __cplusplus
extern "C"{
#endif

AD2425W_SIMPLE_RESULT 	ad2425w_initialize( sAD2425W_Simple * ad2425w,
											AD2425W_SIMPLE_MODE mode,
											portpin irq_io0,
											portpin mstr,
											TWI_SIMPLE_DEVICE device_num );


#ifdef __cplusplus
} ///< extern "C"
#endif

///< __ADI_AD2425W_H__
#endif
