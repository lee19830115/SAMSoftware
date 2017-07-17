/*********************************************************************************

Copyright(c) 2017 Analog Devices, Inc. All Rights Reserved.

This software is proprietary and confidential.  By using this software you agree
to the terms of the associated Analog Devices License Agreement.

*********************************************************************************/
/**
 * @file       adau1761.h
 * @brief      ADAU1761 SigmaDSP
 * @author     Dan Ledger / Run Jump Labs
 * @date       $Date: 2017-05-18 $
 * @brief      This is the primary header file for ADAU1761 SigmaDSP. The file
 *             contains the API declarations, data structure and constant
 *             definitions used in the APIs.
 */

#ifndef __ADAU1761_SIMPLE_H__
#define __ADAU1761_SIMPLE_H__

/*=============  I N C L U D E S   =============*/
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#include "..\twi_simple\twi_simple.h"

/*==============  D E F I N E S  ===============*/

/// Memory size required to handle a SPORT device instance mapped to ADAU1761 Audio codec 
#define ADAU1761_MEMORY_SIZE                  (100u)
#define ADAU1761_SPORT_DMA_MEMORY_SIZE        (SPORT_DMA_MEMORY_SIZE)


/// ADAU1761 return values
typedef enum 
{
	ADAU1761_SIMPLE_SUCCESS,   		  		// The API call is success
	ADAU1761_SIMPLE_CORRUPT_INIT_FILE,     	// SS-generated initialization file is corrupt
	ADAU1761_SIMPLE_ERROR						// General failure

} ADAU1761_SIMPLE_RESULT;

/// ADAU1761 supported sample rates 
typedef enum
{
    ADAU1761_SAMPLE_RATE_8000HZ  = (0x1) , /*!< Sample rate 8   kHz*/
    ADAU1761_SAMPLE_RATE_12000HZ = (0x2) , /*!< Sample rate 12   kHz*/
    ADAU1761_SAMPLE_RATE_16000HZ = (0x3) , /*!< Sample rate 16   kHz*/
    ADAU1761_SAMPLE_RATE_24000HZ = (0x4) , /*!< Sample rate 24   kHz*/
    ADAU1761_SAMPLE_RATE_32000HZ = (0x5) , /*!< Sample rate 32   kHz*/
    ADAU1761_SAMPLE_RATE_48000HZ = (0x0) , /*!< Sample rate 48   kHz*/
    ADAU1761_SAMPLE_RATE_96000HZ = (0x6)   /*!< Sample rate 96   kHz*/
} ADAU1761_SIMPLE_SAMPLE_RATE;


/// ADAU1761 device registers 
typedef enum
{
    ADAU1761_REG_CLOCK_CONTROL             = (0x4000),   /*!< Clock control */
    ADAU1761_REG_PLL_CONTROL_0             = (0x4002),   /*!< PLL control 0 */
    ADAU1761_REG_PLL_CONTROL_1             = (0x4003),   /*!< PLL control 1 */
    ADAU1761_REG_PLL_CONTROL_2             = (0x4004),   /*!< PLL control 2 */
    ADAU1761_REG_PLL_CONTROL_3             = (0x4005),   /*!< PLL control 3 */
    ADAU1761_REG_PLL_CONTROL_4             = (0x4006),   /*!< PLL control 4 */
    ADAU1761_REG_PLL_CONTROL_5             = (0x4007),   /*!< PLL control 5 */
    ADAU1761_REG_DIG_MIC_JACK_DETECT       = (0x4008),   /*!< Dig mic/jack detect */
    ADAU1761_REG_REC_POWER_MGMT            = (0x4009),   /*!< Rec power mgmt */
    ADAU1761_REG_REC_MIXER_LEFT_0          = (0x400A),   /*!< Rec Mixer Left 0 */
    ADAU1761_REG_REC_MIXER_LEFT_1          = (0x400B),   /*!< Rec Mixer Left 1 */
    ADAU1761_REG_REC_MIXER_RIGHT_0         = (0x400C),   /*!< Rec Mixer Right 0 */
    ADAU1761_REG_REC_MIXER_RIGHT_1         = (0x400D),   /*!< Rec Mixer Right 1 */
    ADAU1761_REG_LEFT_DIFF_INPUT_VOL       = (0x400E),   /*!< Left diff input vol */
    ADAU1761_REG_RIGHT_DIFF_INPUT_VOL      = (0x400F),   /*!< Right diff input vol */
    ADAU1761_REG_RECORD_MIC_BIAS           = (0x4010),   /*!< Record mic bias */
    ADAU1761_REG_ALC_0                     = (0x4011),   /*!< ALC 0 */
    ADAU1761_REG_ALC_1                     = (0x4012),   /*!< ALC 1 */
    ADAU1761_REG_ALC_2                     = (0x4013),   /*!< ALC 2 */
    ADAU1761_REG_ALC_3                     = (0x4014),   /*!< ALC 3 */
    ADAU1761_REG_SERIAL_PORT_0             = (0x4015),   /*!< Serial Port 0 */
    ADAU1761_REG_SERIAL_PORT_1             = (0x4016),   /*!< Serial Port 1 */
    ADAU1761_REG_CONVERTER_0               = (0x4017),   /*!< Converter 0 */
    ADAU1761_REG_CONVERTER_1               = (0x4018),   /*!< Converter 1 */
    ADAU1761_REG_ADC_CONTROL               = (0x4019),   /*!< ADC control */
    ADAU1761_REG_LEFT_DIGITAL_VOL          = (0x401A),   /*!< Left digital vol */
    ADAU1761_REG_RIGHT_DIGITAL_VOL         = (0x401B),   /*!< Right digital vol */
    ADAU1761_REG_PLAY_MIXER_LEFT_0         = (0x401C),   /*!< Play Mixer Left 0 */
    ADAU1761_REG_PLAY_MIXER_LEFT_1         = (0x401D),   /*!< Play Mixer Left 1 */
    ADAU1761_REG_PLAY_MIXER_RIGHT_0        = (0x401E),   /*!< Play Mixer Right 0 */
    ADAU1761_REG_PLAY_MIXER_RIGHT_1        = (0x401F),   /*!< Play Mixer Right 1 */
    ADAU1761_REG_PLAY_L_R_MIXER_LEFT       = (0x4020),   /*!< Play L/R mixer left */
    ADAU1761_REG_PLAY_L_R_MIXER_RIGHT      = (0x4021),   /*!< Play L/R mixer right */
    ADAU1761_REG_PLAY_L_R_MIXER_MONO       = (0x4022),   /*!< Play L/R mixer mono */
    ADAU1761_REG_PLAY_HP_LEFT_VOL          = (0x4023),   /*!< Play HP left vol */
    ADAU1761_REG_PLAY_HP_RIGHT_VOL         = (0x4024),   /*!< Play HP right vol */
    ADAU1761_REG_LINE_OUTPUT_LEFT_VOL      = (0x4025),   /*!< Line output left vol */
    ADAU1761_REG_LINE_OUTPUT_RIGHT_VOL     = (0x4026),   /*!< Line output right vol */
    ADAU1761_REG_PLAY_MONO_OUTPUT          = (0x4027),   /*!< Play mono output */
    ADAU1761_REG_POP_CLICK_SUPPRESS        = (0x4028),   /*!< Pop/click suppress */
    ADAU1761_REG_PLAY_POWER_MGMT           = (0x4029),   /*!< Play power mgmt */
    ADAU1761_REG_DAC_CONTROL_0             = (0x402A),   /*!< DAC Control 0 */
    ADAU1761_REG_DAC_CONTROL_1             = (0x402B),   /*!< DAC Control 1 */
    ADAU1761_REG_DAC_CONTROL_2             = (0x402C),   /*!< DAC Control 2 */
    ADAU1761_REG_SERIAL_PORT_PAD           = (0x402D),   /*!< Serial port pad */
    ADAU1761_REG_CONTROL_PORT_PAD_0        = (0x402F),   /*!< Control Port Pad 0 */
    ADAU1761_REG_CONTROL_PORT_PAD_1        = (0x4030),   /*!< Control Port Pad 1 */
    ADAU1761_REG_JACK_DETECT_PIN           = (0x4031),   /*!< Jack detect pin */
    ADAU1761_REG_DEJITTER_CONTROL          = (0x4036),   /*!< Dejitter control */
    ADAU1761_REG_CRC_3                     = (0x40C0),   /*!< CRC_3 */
    ADAU1761_REG_CRC_2                     = (0x40C1),   /*!< CRC_2 */
    ADAU1761_REG_CRC_1                     = (0x40C2),   /*!< CRC_1 */
    ADAU1761_REG_CRC_0                     = (0x40C3),   /*!< CRC_0 */
    ADAU1761_REG_CRC_ENABLE                = (0x40C4),   /*!< CRC enable */
    ADAU1761_REG_GPIO0_PIN_CONTROL         = (0x40C6),   /*!< GPIO0 pin control */
    ADAU1761_REG_GPIO1_PIN_CONTROL         = (0x40C7),   /*!< GPIO1 pin control */
    ADAU1761_REG_GPIO2_PIN_CONTROL         = (0x40C8),   /*!< GPIO2 pin control */
    ADAU1761_REG_GPIO3_PIN_CONTROL         = (0x40C9),   /*!< GPIO3 pin control */
    ADAU1761_REG_WATCHDOG_ENABLE           = (0x40D0),   /*!< Watchdog enable */
    ADAU1761_REG_WATCHDOG_VALUE_2          = (0x40D1),   /*!< Watchdog value 2 */
    ADAU1761_REG_WATCHDOG_VALUE_1          = (0x40D2),   /*!< Watchdog value 1 */
    ADAU1761_REG_WATCHDOG_VALUE_0          = (0x40D3),   /*!< Watchdog value 0 */
    ADAU1761_REG_WATCHDOG_ERROR            = (0x40D4),   /*!< Watchdog error */
    ADAU1761_REG_DSP_SAMPLING_RATE_SETTING = (0x40EB),   /*!< DSP sampling rate setting */
    ADAU1761_REG_SERIAL_INPUT_ROUTE_CTRL   = (0x40F2),   /*!< Serial input route ctrl */
    ADAU1761_REG_SERIAL_OUTPUT_ROUTE_CTRL  = (0x40F3),   /*!< Serial output route ctrl */
    ADAU1761_REG_SERIAL_DATA_PIN_CONFIG    = (0x40F4),   /*!< Serial data pin config */
    ADAU1761_REG_DSP_ENABLE                = (0x40F5),   /*!< DSP enable */
    ADAU1761_REG_DSP_RUN                   = (0x40F6),   /*!< DSP run */
    ADAU1761_REG_DSP_SLEW_MODES            = (0x40F7),   /*!< DSP slew modes */
    ADAU1761_REG_SERIAL_PORT_SAMPLING_RATE = (0x40F8),   /*!< Serial port sampling rate */
    ADAU1761_REG_CLOCK_ENABLE_0            = (0x40F9),   /*!< Clock Enable 0 */
    ADAU1761_REG_CLOCK_ENABLE_1            = (0x40FA)    /*!< Clock Enable 1 */
} ADAU1761_SIMPLE_CONTROL_REGISTER;

#ifdef __cplusplus
extern "C"{
#endif

/**
 * A simple structure that contains information for a single instance of this
 * driver
 */
typedef struct {
    sTWI twi;      ///< Simple TWI driver
} sADAU1761_Simple;


ADAU1761_SIMPLE_RESULT 	adau1761_initialize( sADAU1761_Simple * adau1761, 
                                             TWI_SIMPLE_DEVICE device_num );

void 	                adau1761_enable( sADAU1761_Simple * adau1761 );

void	                adau1761_setSampleRate( sADAU1761_Simple * adau1761, 
                                                ADAU1761_SIMPLE_SAMPLE_RATE sample_rate );

void 	                adau1761_muteDACs( sADAU1761_Simple * adau1761 );

void 	                adau1761_unmuteDACs( sADAU1761_Simple * adau1761 );

void                    adau1761_enablePulseTDMMode( sADAU1761_Simple * adau1761 );

uint8_t                 adau1761_readCtrlReg( sADAU1761_Simple * adau1761, 
                                              ADAU1761_SIMPLE_CONTROL_REGISTER address );

void 	                adau1761_writeCtrlReg( sADAU1761_Simple * adau1761, 
                                               ADAU1761_SIMPLE_CONTROL_REGISTER address, 
                                               uint8_t value );

void 	                adau1761_writeParameterRAM( sADAU1761_Simple * adau1761, 
                                                    uint16_t address, 
                                                    uint32_t value);

uint32_t                adau1761_readParameterRAM( sADAU1761_Simple * adau1761, 
                                                   uint16_t address );

ADAU1761_SIMPLE_RESULT 	adau1761_loadBulkRegFile( sADAU1761_Simple * adau1761, 
                                              uint8_t * values, 
                                              uint16_t * lengths, 
                                              uint16_t totalLines);

#ifdef __cplusplus
} // extern "C"
#endif

#endif
