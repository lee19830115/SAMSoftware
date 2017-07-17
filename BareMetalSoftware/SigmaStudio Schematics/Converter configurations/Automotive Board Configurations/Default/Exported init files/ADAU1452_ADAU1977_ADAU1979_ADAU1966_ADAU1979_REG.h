/*
 * File:           C:\Users\Dan\Dropbox\Projects\ADI002 - SS Frameworks\Software\New Frameworks\SigmaStudio Schematics\Converter configurations\Automotive Board Configurations\Default\Exported init files\ADAU1452_ADAU1977_ADAU1979_ADAU1966_ADAU1979_REG.h
 *
 * Created:        Tuesday, June 27, 2017 8:08:03 PM
 * Description:    ADAU1452_ADAU1977_ADAU1979_ADAU1966:ADAU1979 control register definitions.
 *
 * This software is distributed in the hope that it will be useful,
 * but is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
 * CONDITIONS OF ANY KIND, without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * This software may only be used to program products purchased from
 * Analog Devices for incorporation by you into audio products that
 * are intended for resale to audio product end users. This software
 * may not be distributed whole or in any part to third parties.
 *
 * Copyright ©2017 Analog Devices, Inc. All rights reserved.
 */
#ifndef __ADAU1452_ADAU1977_ADAU1979_ADAU1966_ADAU1979_REG_H__
#define __ADAU1452_ADAU1977_ADAU1979_ADAU1966_ADAU1979_REG_H__


/* M_POWER  - Registers (ADAU1979) */
#define REG_M_POWER_ADAU1979_ADDR                 0x0
#define REG_M_POWER_ADAU1979_BYTE                 1
#define REG_M_POWER_ADAU1979_VALUE                0x1

/* PLL_CONTROL  - Registers (ADAU1979) */
#define REG_PLL_CONTROL_ADAU1979_ADDR             0x1
#define REG_PLL_CONTROL_ADAU1979_BYTE             1
#define REG_PLL_CONTROL_ADAU1979_VALUE            0xC1

/* BST_CONTROL  - Registers (ADAU1979) */
#define REG_BST_CONTROL_ADAU1979_ADDR             0x2
#define REG_BST_CONTROL_ADAU1979_BYTE             1
#define REG_BST_CONTROL_ADAU1979_VALUE            0xCA

/* MB_BST_CONTROL  - Registers (ADAU1979) */
#define REG_MB_BST_CONTROL_ADAU1979_ADDR          0x3
#define REG_MB_BST_CONTROL_ADAU1979_BYTE          1
#define REG_MB_BST_CONTROL_ADAU1979_VALUE         0x7D

/* BLOCK_POWER_SAI  - Registers (ADAU1979) */
#define REG_BLOCK_POWER_SAI_ADAU1979_ADDR         0x4
#define REG_BLOCK_POWER_SAI_ADAU1979_BYTE         1
#define REG_BLOCK_POWER_SAI_ADAU1979_VALUE        0xFF

/* SAI_CTRL0  - Registers (ADAU1979) */
#define REG_SAI_CTRL0_ADAU1979_ADDR               0x5
#define REG_SAI_CTRL0_ADAU1979_BYTE               1
#define REG_SAI_CTRL0_ADAU1979_VALUE              0x52

/* SAI_CTRL1  - Registers (ADAU1979) */
#define REG_SAI_CTRL1_ADAU1979_ADDR               0x6
#define REG_SAI_CTRL1_ADAU1979_BYTE               1
#define REG_SAI_CTRL1_ADAU1979_VALUE              0x0

/* SAI_CMAP12  - Registers (ADAU1979) */
#define REG_SAI_CMAP12_ADAU1979_ADDR              0x7
#define REG_SAI_CMAP12_ADAU1979_BYTE              1
#define REG_SAI_CMAP12_ADAU1979_VALUE             0x10

/* SAI_CMAP34  - Registers (ADAU1979) */
#define REG_SAI_CMAP34_ADAU1979_ADDR              0x8
#define REG_SAI_CMAP34_ADAU1979_BYTE              1
#define REG_SAI_CMAP34_ADAU1979_VALUE             0x32

/* SAI_OVERTEMP  - Registers (ADAU1979) */
#define REG_SAI_OVERTEMP_ADAU1979_ADDR            0x9
#define REG_SAI_OVERTEMP_ADAU1979_BYTE            1
#define REG_SAI_OVERTEMP_ADAU1979_VALUE           0xF0

/* POSTADC_GAIN1  - Registers (ADAU1979) */
#define REG_POSTADC_GAIN1_ADAU1979_ADDR           0xA
#define REG_POSTADC_GAIN1_ADAU1979_BYTE           1
#define REG_POSTADC_GAIN1_ADAU1979_VALUE          0xA0

/* POSTADC_GAIN2  - Registers (ADAU1979) */
#define REG_POSTADC_GAIN2_ADAU1979_ADDR           0xB
#define REG_POSTADC_GAIN2_ADAU1979_BYTE           1
#define REG_POSTADC_GAIN2_ADAU1979_VALUE          0xA0

/* POSTADC_GAIN3  - Registers (ADAU1979) */
#define REG_POSTADC_GAIN3_ADAU1979_ADDR           0xC
#define REG_POSTADC_GAIN3_ADAU1979_BYTE           1
#define REG_POSTADC_GAIN3_ADAU1979_VALUE          0xA0

/* POSTADC_GAIN4  - Registers (ADAU1979) */
#define REG_POSTADC_GAIN4_ADAU1979_ADDR           0xD
#define REG_POSTADC_GAIN4_ADAU1979_BYTE           1
#define REG_POSTADC_GAIN4_ADAU1979_VALUE          0xA0

/* MISC_CONTROL  - Registers (ADAU1979) */
#define REG_MISC_CONTROL_ADAU1979_ADDR            0xE
#define REG_MISC_CONTROL_ADAU1979_BYTE            1
#define REG_MISC_CONTROL_ADAU1979_VALUE           0x0

/* ADC_BIAS_CONTROL  - Registers (ADAU1979) */
#define REG_ADC_BIAS_CONTROL_ADAU1979_ADDR        0xF
#define REG_ADC_BIAS_CONTROL_ADAU1979_BYTE        1
#define REG_ADC_BIAS_CONTROL_ADAU1979_VALUE       0xFF

/* DIAG_CONTROL  - Registers (ADAU1979) */
#define REG_DIAG_CONTROL_ADAU1979_ADDR            0x10
#define REG_DIAG_CONTROL_ADAU1979_BYTE            1
#define REG_DIAG_CONTROL_ADAU1979_VALUE           0x0

/* DIAG_STATUS1  - Registers (ADAU1979) */
#define REG_DIAG_STATUS1_ADAU1979_ADDR            0x11
#define REG_DIAG_STATUS1_ADAU1979_BYTE            1
#define REG_DIAG_STATUS1_ADAU1979_VALUE           0x0

/* DIAG_STATUS2  - Registers (ADAU1979) */
#define REG_DIAG_STATUS2_ADAU1979_ADDR            0x12
#define REG_DIAG_STATUS2_ADAU1979_BYTE            1
#define REG_DIAG_STATUS2_ADAU1979_VALUE           0x0

/* DIAG_STATUS3  - Registers (ADAU1979) */
#define REG_DIAG_STATUS3_ADAU1979_ADDR            0x13
#define REG_DIAG_STATUS3_ADAU1979_BYTE            1
#define REG_DIAG_STATUS3_ADAU1979_VALUE           0x0

/* DIAG_STATUS4  - Registers (ADAU1979) */
#define REG_DIAG_STATUS4_ADAU1979_ADDR            0x14
#define REG_DIAG_STATUS4_ADAU1979_BYTE            1
#define REG_DIAG_STATUS4_ADAU1979_VALUE           0x8

/* DIAG_IRQ1  - Registers (ADAU1979) */
#define REG_DIAG_IRQ1_ADAU1979_ADDR               0x15
#define REG_DIAG_IRQ1_ADAU1979_BYTE               1
#define REG_DIAG_IRQ1_ADAU1979_VALUE              0x20

/* DIAG_IRQ2  - Registers (ADAU1979) */
#define REG_DIAG_IRQ2_ADAU1979_ADDR               0x16
#define REG_DIAG_IRQ2_ADAU1979_BYTE               1
#define REG_DIAG_IRQ2_ADAU1979_VALUE              0x0

/* DIAG_ADJUST1  - Registers (ADAU1979) */
#define REG_DIAG_ADJUST1_ADAU1979_ADDR            0x17
#define REG_DIAG_ADJUST1_ADAU1979_BYTE            1
#define REG_DIAG_ADJUST1_ADAU1979_VALUE           0x0

/* DIAG_ADJUST2  - Registers (ADAU1979) */
#define REG_DIAG_ADJUST2_ADAU1979_ADDR            0x18
#define REG_DIAG_ADJUST2_ADAU1979_BYTE            1
#define REG_DIAG_ADJUST2_ADAU1979_VALUE           0x20

/* ASDC_CLIP  - Registers (ADAU1979) */
#define REG_ASDC_CLIP_ADAU1979_ADDR               0x19
#define REG_ASDC_CLIP_ADAU1979_BYTE               1
#define REG_ASDC_CLIP_ADAU1979_VALUE              0x0

/* DC_HPF_CAL  - Registers (ADAU1979) */
#define REG_DC_HPF_CAL_ADAU1979_ADDR              0x1A
#define REG_DC_HPF_CAL_ADAU1979_BYTE              1
#define REG_DC_HPF_CAL_ADAU1979_VALUE             0x0

/* TWEAK1  - Registers (ADAU1979) */
#define REG_TWEAK1_ADAU1979_ADDR                  0x1B
#define REG_TWEAK1_ADAU1979_BYTE                  1
#define REG_TWEAK1_ADAU1979_VALUE                 0xF0

/* ADC_TWEAK  - Registers (ADAU1979) */
#define REG_ADC_TWEAK_ADAU1979_ADDR               0x2C
#define REG_ADC_TWEAK_ADAU1979_BYTE               1
#define REG_ADC_TWEAK_ADAU1979_VALUE              0x40


/*
 *
 * Control register's field descriptions
 *
 */

/* M_POWER (ADAU1979) */
#define R0_PWUP_ADAU1979                          0x1    /* 1b	[0] */
#define R0_S_RST_ADAU1979                         0x0    /* 0b	[7] */
#define R0_PWUP_ADAU1979_MASK                     0x1
#define R0_PWUP_ADAU1979_SHIFT                    0
#define R0_S_RST_ADAU1979_MASK                    0x80
#define R0_S_RST_ADAU1979_SHIFT                   7

/* PLL_CONTROL (ADAU1979) */
#define R1_MCS_ADAU1979                           0x1    /* 001b	[2:0] */
#define R1_CLK_S_ADAU1979                         0x0    /* 0b	[4] */
#define R1_PLL_MUTE_ADAU1979                      0x1    /* 1b	[6] */
#define R1_PLL_LOCK_ADAU1979                      0x1    /* 1b	[7] */
#define R1_MCS_ADAU1979_MASK                      0x7
#define R1_MCS_ADAU1979_SHIFT                     0
#define R1_CLK_S_ADAU1979_MASK                    0x10
#define R1_CLK_S_ADAU1979_SHIFT                   4
#define R1_PLL_MUTE_ADAU1979_MASK                 0x40
#define R1_PLL_MUTE_ADAU1979_SHIFT                6
#define R1_PLL_LOCK_ADAU1979_MASK                 0x80
#define R1_PLL_LOCK_ADAU1979_SHIFT                7

/* BST_CONTROL (ADAU1979) */
#define R2_BOOST_OC_ADAU1979                      0x0    /* 0b	[0] */
#define R2_OC_EN_ADAU1979                         0x1    /* 1b	[1] */
#define R2_BOOST_OV_ADAU1979                      0x0    /* 0b	[2] */
#define R2_OV_EN_ADAU1979                         0x1    /* 1b	[3] */
#define R2_BOOST_SW_FREQ_ADAU1979                 0x0    /* 0b	[4] */
#define R2_FS_RATE_ADAU1979                       0x2    /* 10b	[6:5] */
#define R2_BST_GOOD_ADAU1979                      0x1    /* 1b	[7] */
#define R2_BOOST_OC_ADAU1979_MASK                 0x1
#define R2_BOOST_OC_ADAU1979_SHIFT                0
#define R2_OC_EN_ADAU1979_MASK                    0x2
#define R2_OC_EN_ADAU1979_SHIFT                   1
#define R2_BOOST_OV_ADAU1979_MASK                 0x4
#define R2_BOOST_OV_ADAU1979_SHIFT                2
#define R2_OV_EN_ADAU1979_MASK                    0x8
#define R2_OV_EN_ADAU1979_SHIFT                   3
#define R2_BOOST_SW_FREQ_ADAU1979_MASK            0x10
#define R2_BOOST_SW_FREQ_ADAU1979_SHIFT           4
#define R2_FS_RATE_ADAU1979_MASK                  0x60
#define R2_FS_RATE_ADAU1979_SHIFT                 5
#define R2_BST_GOOD_ADAU1979_MASK                 0x80
#define R2_BST_GOOD_ADAU1979_SHIFT                7

/* MB_BST_CONTROL (ADAU1979) */
#define R3_BOOST_RCVR_ADAU1979                    0x1    /* 1b	[0] */
#define R3_MRCV_ADAU1979                          0x0    /* 0b	[1] */
#define R3_BOOST_EN_ADAU1979                      0x1    /* 1b	[2] */
#define R3_MB_EN_ADAU1979                         0x1    /* 1b	[3] */
#define R3_MB_VOLTS_ADAU1979                      0x7    /* 0111b	[7:4] */
#define R3_BOOST_RCVR_ADAU1979_MASK               0x1
#define R3_BOOST_RCVR_ADAU1979_SHIFT              0
#define R3_MRCV_ADAU1979_MASK                     0x2
#define R3_MRCV_ADAU1979_SHIFT                    1
#define R3_BOOST_EN_ADAU1979_MASK                 0x4
#define R3_BOOST_EN_ADAU1979_SHIFT                2
#define R3_MB_EN_ADAU1979_MASK                    0x8
#define R3_MB_EN_ADAU1979_SHIFT                   3
#define R3_MB_VOLTS_ADAU1979_MASK                 0xF0
#define R3_MB_VOLTS_ADAU1979_SHIFT                4

/* BLOCK_POWER_SAI (ADAU1979) */
#define R4_ADC_EN1_ADAU1979                       0x1    /* 1b	[0] */
#define R4_ADC_EN2_ADAU1979                       0x1    /* 1b	[1] */
#define R4_ADC_EN3_ADAU1979                       0x1    /* 1b	[2] */
#define R4_ADC_EN4_ADAU1979                       0x1    /* 1b	[3] */
#define R4_VREF_EN_ADAU1979                       0x1    /* 1b	[4] */
#define R4_LDO_EN_ADAU1979                        0x1    /* 1b	[5] */
#define R4_BCLKEDGE_ADAU1979                      0x1    /* 1b	[6] */
#define R4_LR_POL_ADAU1979                        0x1    /* 1b	[7] */
#define R4_ADC_EN1_ADAU1979_MASK                  0x1
#define R4_ADC_EN1_ADAU1979_SHIFT                 0
#define R4_ADC_EN2_ADAU1979_MASK                  0x2
#define R4_ADC_EN2_ADAU1979_SHIFT                 1
#define R4_ADC_EN3_ADAU1979_MASK                  0x4
#define R4_ADC_EN3_ADAU1979_SHIFT                 2
#define R4_ADC_EN4_ADAU1979_MASK                  0x8
#define R4_ADC_EN4_ADAU1979_SHIFT                 3
#define R4_VREF_EN_ADAU1979_MASK                  0x10
#define R4_VREF_EN_ADAU1979_SHIFT                 4
#define R4_LDO_EN_ADAU1979_MASK                   0x20
#define R4_LDO_EN_ADAU1979_SHIFT                  5
#define R4_BCLKEDGE_ADAU1979_MASK                 0x40
#define R4_BCLKEDGE_ADAU1979_SHIFT                6
#define R4_LR_POL_ADAU1979_MASK                   0x80
#define R4_LR_POL_ADAU1979_SHIFT                  7

/* SAI_CTRL0 (ADAU1979) */
#define R5_FS_ADAU1979                            0x2    /* 010b	[2:0] */
#define R5_SAI_ADAU1979                           0x2    /* 010b	[5:3] */
#define R5_SDATA_FMT_ADAU1979                     0x1    /* 01b	[7:6] */
#define R5_FS_ADAU1979_MASK                       0x7
#define R5_FS_ADAU1979_SHIFT                      0
#define R5_SAI_ADAU1979_MASK                      0x38
#define R5_SAI_ADAU1979_SHIFT                     3
#define R5_SDATA_FMT_ADAU1979_MASK                0xC0
#define R5_SDATA_FMT_ADAU1979_SHIFT               6

/* SAI_CTRL1 (ADAU1979) */
#define R6_SAI_MS_ADAU1979                        0x0    /* 0b	[0] */
#define R6_BCLKRATE_ADAU1979                      0x0    /* 0b	[1] */
#define R6_SAI_MSB_ADAU1979                       0x0    /* 0b	[2] */
#define R6_LR_MODE_ADAU1979                       0x0    /* 0b	[3] */
#define R6_DATA_WIDTH_ADAU1979                    0x0    /* 0b	[4] */
#define R6_SLOT_WIDTH_ADAU1979                    0x0    /* 00b	[6:5] */
#define R6_SDATA_SEL_ADAU1979                     0x0    /* 0b	[7] */
#define R6_SAI_MS_ADAU1979_MASK                   0x1
#define R6_SAI_MS_ADAU1979_SHIFT                  0
#define R6_BCLKRATE_ADAU1979_MASK                 0x2
#define R6_BCLKRATE_ADAU1979_SHIFT                1
#define R6_SAI_MSB_ADAU1979_MASK                  0x4
#define R6_SAI_MSB_ADAU1979_SHIFT                 2
#define R6_LR_MODE_ADAU1979_MASK                  0x8
#define R6_LR_MODE_ADAU1979_SHIFT                 3
#define R6_DATA_WIDTH_ADAU1979_MASK               0x10
#define R6_DATA_WIDTH_ADAU1979_SHIFT              4
#define R6_SLOT_WIDTH_ADAU1979_MASK               0x60
#define R6_SLOT_WIDTH_ADAU1979_SHIFT              5
#define R6_SDATA_SEL_ADAU1979_MASK                0x80
#define R6_SDATA_SEL_ADAU1979_SHIFT               7

/* SAI_CMAP12 (ADAU1979) */
#define R7_CMAP_C1_ADAU1979                       0x0    /* 0000b	[3:0] */
#define R7_CMAP_C2_ADAU1979                       0x1    /* 0001b	[7:4] */
#define R7_CMAP_C1_ADAU1979_MASK                  0xF
#define R7_CMAP_C1_ADAU1979_SHIFT                 0
#define R7_CMAP_C2_ADAU1979_MASK                  0xF0
#define R7_CMAP_C2_ADAU1979_SHIFT                 4

/* SAI_CMAP34 (ADAU1979) */
#define R8_CMAP_C3_ADAU1979                       0x2    /* 0010b	[3:0] */
#define R8_CMAP_C4_ADAU1979                       0x3    /* 0011b	[7:4] */
#define R8_CMAP_C3_ADAU1979_MASK                  0xF
#define R8_CMAP_C3_ADAU1979_SHIFT                 0
#define R8_CMAP_C4_ADAU1979_MASK                  0xF0
#define R8_CMAP_C4_ADAU1979_SHIFT                 4

/* SAI_OVERTEMP (ADAU1979) */
#define R9_OT_ADAU1979                            0x0    /* 0b	[0] */
#define R9_OT_RCVR_ADAU1979                       0x0    /* 0b	[1] */
#define R9_OT_MCRV_ADAU1979                       0x0    /* 0b	[2] */
#define R9_DRV_HIZ_ADAU1979                       0x0    /* 0b	[3] */
#define R9_SAI_DRV_C1_ADAU1979                    0x1    /* 1b	[4] */
#define R9_SAI_DRV_C2_ADAU1979                    0x1    /* 1b	[5] */
#define R9_SAI_DRV_C3_ADAU1979                    0x1    /* 1b	[6] */
#define R9_SAI_DRV_C4_ADAU1979                    0x1    /* 1b	[7] */
#define R9_OT_ADAU1979_MASK                       0x1
#define R9_OT_ADAU1979_SHIFT                      0
#define R9_OT_RCVR_ADAU1979_MASK                  0x2
#define R9_OT_RCVR_ADAU1979_SHIFT                 1
#define R9_OT_MCRV_ADAU1979_MASK                  0x4
#define R9_OT_MCRV_ADAU1979_SHIFT                 2
#define R9_DRV_HIZ_ADAU1979_MASK                  0x8
#define R9_DRV_HIZ_ADAU1979_SHIFT                 3
#define R9_SAI_DRV_C1_ADAU1979_MASK               0x10
#define R9_SAI_DRV_C1_ADAU1979_SHIFT              4
#define R9_SAI_DRV_C2_ADAU1979_MASK               0x20
#define R9_SAI_DRV_C2_ADAU1979_SHIFT              5
#define R9_SAI_DRV_C3_ADAU1979_MASK               0x40
#define R9_SAI_DRV_C3_ADAU1979_SHIFT              6
#define R9_SAI_DRV_C4_ADAU1979_MASK               0x80
#define R9_SAI_DRV_C4_ADAU1979_SHIFT              7

/* POSTADC_GAIN1 (ADAU1979) */
#define R10_PADC_GAIN1_ADAU1979                   0xA0   /* 10100000b	[7:0] */
#define R10_PADC_GAIN1_ADAU1979_MASK              0xFF
#define R10_PADC_GAIN1_ADAU1979_SHIFT             0

/* POSTADC_GAIN2 (ADAU1979) */
#define R11_PADC_GAIN2_ADAU1979                   0xA0   /* 10100000b	[7:0] */
#define R11_PADC_GAIN2_ADAU1979_MASK              0xFF
#define R11_PADC_GAIN2_ADAU1979_SHIFT             0

/* POSTADC_GAIN3 (ADAU1979) */
#define R12_PADC_GAIN3_ADAU1979                   0xA0   /* 10100000b	[7:0] */
#define R12_PADC_GAIN3_ADAU1979_MASK              0xFF
#define R12_PADC_GAIN3_ADAU1979_SHIFT             0

/* POSTADC_GAIN4 (ADAU1979) */
#define R13_PADC_GAIN4_ADAU1979                   0xA0   /* 10100000b	[7:0] */
#define R13_PADC_GAIN4_ADAU1979_MASK              0xFF
#define R13_PADC_GAIN4_ADAU1979_SHIFT             0

/* MISC_CONTROL (ADAU1979) */
#define R14_DC_CAL_ADAU1979                       0x0    /* 0b	[0] */
#define R14_MMUTE_ADAU1979                        0x0    /* 0b	[4] */
#define R14_SUM_MODE_ADAU1979                     0x0    /* 00b	[7:6] */
#define R14_DC_CAL_ADAU1979_MASK                  0x1
#define R14_DC_CAL_ADAU1979_SHIFT                 0
#define R14_MMUTE_ADAU1979_MASK                   0x10
#define R14_MMUTE_ADAU1979_SHIFT                  4
#define R14_SUM_MODE_ADAU1979_MASK                0xC0
#define R14_SUM_MODE_ADAU1979_SHIFT               6

/* ADC_BIAS_CONTROL (ADAU1979) */
#define R15_ADCB1_ADAU1979                        0x3    /* 11b	[1:0] */
#define R15_ADCB2_ADAU1979                        0x3    /* 11b	[3:2] */
#define R15_ADCB3_ADAU1979                        0x3    /* 11b	[5:4] */
#define R15_ADCB4_ADAU1979                        0x3    /* 11b	[7:6] */
#define R15_ADCB1_ADAU1979_MASK                   0x3
#define R15_ADCB1_ADAU1979_SHIFT                  0
#define R15_ADCB2_ADAU1979_MASK                   0xC
#define R15_ADCB2_ADAU1979_SHIFT                  2
#define R15_ADCB3_ADAU1979_MASK                   0x30
#define R15_ADCB3_ADAU1979_SHIFT                  4
#define R15_ADCB4_ADAU1979_MASK                   0xC0
#define R15_ADCB4_ADAU1979_SHIFT                  6

/* DIAG_CONTROL (ADAU1979) */
#define R16_DIAG_EN1_ADAU1979                     0x0    /* 0b	[0] */
#define R16_DIAG_EN2_ADAU1979                     0x0    /* 0b	[1] */
#define R16_DIAG_EN3_ADAU1979                     0x0    /* 0b	[2] */
#define R16_DIAG_EN4_ADAU1979                     0x0    /* 0b	[3] */
#define R16_DIAG_EN1_ADAU1979_MASK                0x1
#define R16_DIAG_EN1_ADAU1979_SHIFT               0
#define R16_DIAG_EN2_ADAU1979_MASK                0x2
#define R16_DIAG_EN2_ADAU1979_SHIFT               1
#define R16_DIAG_EN3_ADAU1979_MASK                0x4
#define R16_DIAG_EN3_ADAU1979_SHIFT               2
#define R16_DIAG_EN4_ADAU1979_MASK                0x8
#define R16_DIAG_EN4_ADAU1979_SHIFT               3

/* DIAG_STATUS1 (ADAU1979) */
#define R17_MICL_SG1_ADAU1979                     0x0    /* 0b	[0] */
#define R17_MICL_SB1_ADAU1979                     0x0    /* 0b	[1] */
#define R17_MICH_SG1_ADAU1979                     0x0    /* 0b	[3] */
#define R17_MICH_SB1_ADAU1979                     0x0    /* 0b	[4] */
#define R17_MICH_OPEN1_ADAU1979                   0x0    /* 0b	[5] */
#define R17_MIC_SHORT1_ADAU1979                   0x0    /* 0b	[6] */
#define R17_MICL_SG1_ADAU1979_MASK                0x1
#define R17_MICL_SG1_ADAU1979_SHIFT               0
#define R17_MICL_SB1_ADAU1979_MASK                0x2
#define R17_MICL_SB1_ADAU1979_SHIFT               1
#define R17_MICH_SG1_ADAU1979_MASK                0x8
#define R17_MICH_SG1_ADAU1979_SHIFT               3
#define R17_MICH_SB1_ADAU1979_MASK                0x10
#define R17_MICH_SB1_ADAU1979_SHIFT               4
#define R17_MICH_OPEN1_ADAU1979_MASK              0x20
#define R17_MICH_OPEN1_ADAU1979_SHIFT             5
#define R17_MIC_SHORT1_ADAU1979_MASK              0x40
#define R17_MIC_SHORT1_ADAU1979_SHIFT             6

/* DIAG_STATUS2 (ADAU1979) */
#define R18_MICL_SG2_ADAU1979                     0x0    /* 0b	[0] */
#define R18_MICL_SB2_ADAU1979                     0x0    /* 0b	[1] */
#define R18_MICH_SG2_ADAU1979                     0x0    /* 0b	[3] */
#define R18_MICH_SB2_ADAU1979                     0x0    /* 0b	[4] */
#define R18_MIC_OPEN2_ADAU1979                    0x0    /* 0b	[5] */
#define R18_MIC_SHORT2_ADAU1979                   0x0    /* 0b	[6] */
#define R18_MICL_SG2_ADAU1979_MASK                0x1
#define R18_MICL_SG2_ADAU1979_SHIFT               0
#define R18_MICL_SB2_ADAU1979_MASK                0x2
#define R18_MICL_SB2_ADAU1979_SHIFT               1
#define R18_MICH_SG2_ADAU1979_MASK                0x8
#define R18_MICH_SG2_ADAU1979_SHIFT               3
#define R18_MICH_SB2_ADAU1979_MASK                0x10
#define R18_MICH_SB2_ADAU1979_SHIFT               4
#define R18_MIC_OPEN2_ADAU1979_MASK               0x20
#define R18_MIC_OPEN2_ADAU1979_SHIFT              5
#define R18_MIC_SHORT2_ADAU1979_MASK              0x40
#define R18_MIC_SHORT2_ADAU1979_SHIFT             6

/* DIAG_STATUS3 (ADAU1979) */
#define R19_MICL_SG3_ADAU1979                     0x0    /* 0b	[0] */
#define R19_MICL_SB3_ADAU1979                     0x0    /* 0b	[1] */
#define R19_MICH_SG3_ADAU1979                     0x0    /* 0b	[3] */
#define R19_MICH_SB3_ADAU1979                     0x0    /* 0b	[4] */
#define R19_MIC_OPEN3_ADAU1979                    0x0    /* 0b	[5] */
#define R19_MIC_SHORT3_ADAU1979                   0x0    /* 0b	[6] */
#define R19_MICL_SG3_ADAU1979_MASK                0x1
#define R19_MICL_SG3_ADAU1979_SHIFT               0
#define R19_MICL_SB3_ADAU1979_MASK                0x2
#define R19_MICL_SB3_ADAU1979_SHIFT               1
#define R19_MICH_SG3_ADAU1979_MASK                0x8
#define R19_MICH_SG3_ADAU1979_SHIFT               3
#define R19_MICH_SB3_ADAU1979_MASK                0x10
#define R19_MICH_SB3_ADAU1979_SHIFT               4
#define R19_MIC_OPEN3_ADAU1979_MASK               0x20
#define R19_MIC_OPEN3_ADAU1979_SHIFT              5
#define R19_MIC_SHORT3_ADAU1979_MASK              0x40
#define R19_MIC_SHORT3_ADAU1979_SHIFT             6

/* DIAG_STATUS4 (ADAU1979) */
#define R20_MICL_SG4_ADAU1979                     0x0    /* 0b	[0] */
#define R20_MICL_SB4_ADAU1979                     0x0    /* 0b	[1] */
#define R20_MICH_SG4_ADAU1979                     0x1    /* 1b	[3] */
#define R20_MICH_SB4_ADAU1979                     0x0    /* 0b	[4] */
#define R20_MIC_OPEN4_ADAU1979                    0x0    /* 0b	[5] */
#define R20_MIC_SHORT4_ADAU1979                   0x0    /* 0b	[6] */
#define R20_MICL_SG4_ADAU1979_MASK                0x1
#define R20_MICL_SG4_ADAU1979_SHIFT               0
#define R20_MICL_SB4_ADAU1979_MASK                0x2
#define R20_MICL_SB4_ADAU1979_SHIFT               1
#define R20_MICH_SG4_ADAU1979_MASK                0x8
#define R20_MICH_SG4_ADAU1979_SHIFT               3
#define R20_MICH_SB4_ADAU1979_MASK                0x10
#define R20_MICH_SB4_ADAU1979_SHIFT               4
#define R20_MIC_OPEN4_ADAU1979_MASK               0x20
#define R20_MIC_OPEN4_ADAU1979_SHIFT              5
#define R20_MIC_SHORT4_ADAU1979_MASK              0x40
#define R20_MIC_SHORT4_ADAU1979_SHIFT             6

/* DIAG_IRQ1 (ADAU1979) */
#define R21_DIAG_MASK1_ADAU1979                   0x0    /* 0b	[0] */
#define R21_DIAG_MASK2_ADAU1979                   0x0    /* 0b	[1] */
#define R21_DIAG_MASK3_ADAU1979                   0x0    /* 0b	[2] */
#define R21_DIAG_MASK4_ADAU1979                   0x0    /* 0b	[3] */
#define R21_IRQ_POL_ADAU1979                      0x0    /* 0b	[4] */
#define R21_IRQ_DRIVE_ADAU1979                    0x1    /* 1b	[5] */
#define R21_IRQ_RESET_ADAU1979                    0x0    /* 0b	[6] */
#define R21_DIAG_MASK1_ADAU1979_MASK              0x1
#define R21_DIAG_MASK1_ADAU1979_SHIFT             0
#define R21_DIAG_MASK2_ADAU1979_MASK              0x2
#define R21_DIAG_MASK2_ADAU1979_SHIFT             1
#define R21_DIAG_MASK3_ADAU1979_MASK              0x4
#define R21_DIAG_MASK3_ADAU1979_SHIFT             2
#define R21_DIAG_MASK4_ADAU1979_MASK              0x8
#define R21_DIAG_MASK4_ADAU1979_SHIFT             3
#define R21_IRQ_POL_ADAU1979_MASK                 0x10
#define R21_IRQ_POL_ADAU1979_SHIFT                4
#define R21_IRQ_DRIVE_ADAU1979_MASK               0x20
#define R21_IRQ_DRIVE_ADAU1979_SHIFT              5
#define R21_IRQ_RESET_ADAU1979_MASK               0x40
#define R21_IRQ_RESET_ADAU1979_SHIFT              6

/* DIAG_IRQ2 (ADAU1979) */
#define R22_MICL_SG_MASK_ADAU1979                 0x0    /* 0b	[0] */
#define R22_MICL_SB_MASK_ADAU1979                 0x0    /* 0b	[1] */
#define R22_MICH_SG_MASK_ADAU1979                 0x0    /* 0b	[3] */
#define R22_MICH_SB_MASK_ADAU1979                 0x0    /* 0b	[4] */
#define R22_MIC_OPEN_MASK_ADAU1979                0x0    /* 0b	[5] */
#define R22_MIC_SHORT_MASK_ADAU1979               0x0    /* 0b	[6] */
#define R22_BST_FAULT_MASK_ADAU1979               0x0    /* 0b	[7] */
#define R22_MICL_SG_MASK_ADAU1979_MASK            0x1
#define R22_MICL_SG_MASK_ADAU1979_SHIFT           0
#define R22_MICL_SB_MASK_ADAU1979_MASK            0x2
#define R22_MICL_SB_MASK_ADAU1979_SHIFT           1
#define R22_MICH_SG_MASK_ADAU1979_MASK            0x8
#define R22_MICH_SG_MASK_ADAU1979_SHIFT           3
#define R22_MICH_SB_MASK_ADAU1979_MASK            0x10
#define R22_MICH_SB_MASK_ADAU1979_SHIFT           4
#define R22_MIC_OPEN_MASK_ADAU1979_MASK           0x20
#define R22_MIC_OPEN_MASK_ADAU1979_SHIFT          5
#define R22_MIC_SHORT_MASK_ADAU1979_MASK          0x40
#define R22_MIC_SHORT_MASK_ADAU1979_SHIFT         6
#define R22_BST_FAULT_MASK_ADAU1979_MASK          0x80
#define R22_BST_FAULT_MASK_ADAU1979_SHIFT         7

/* DIAG_ADJUST1 (ADAU1979) */
#define R23_SHT_B_TRIP_ADAU1979                   0x0    /* 00b	[1:0] */
#define R23_SHT_G_TRIP_ADAU1979                   0x0    /* 00b	[3:2] */
#define R23_SHT_M_TRIP_ADAU1979                   0x0    /* 00b	[5:4] */
#define R23_SHT_T_TRIP_ADAU1979                   0x0    /* 00b	[7:6] */
#define R23_SHT_B_TRIP_ADAU1979_MASK              0x3
#define R23_SHT_B_TRIP_ADAU1979_SHIFT             0
#define R23_SHT_G_TRIP_ADAU1979_MASK              0xC
#define R23_SHT_G_TRIP_ADAU1979_SHIFT             2
#define R23_SHT_M_TRIP_ADAU1979_MASK              0x30
#define R23_SHT_M_TRIP_ADAU1979_SHIFT             4
#define R23_SHT_T_TRIP_ADAU1979_MASK              0xC0
#define R23_SHT_T_TRIP_ADAU1979_SHIFT             6

/* DIAG_ADJUST2 (ADAU1979) */
#define R24_HYST_SB_EN_ADAU1979                   0x0    /* 0b	[0] */
#define R24_HYST_SG_EN_ADAU1979                   0x0    /* 0b	[1] */
#define R24_HYST_SM_EN_ADAU1979                   0x0    /* 0b	[2] */
#define R24_FAULT_TO_ADAU1979                     0x2    /* 10b	[5:4] */
#define R24_HYST_SB_EN_ADAU1979_MASK              0x1
#define R24_HYST_SB_EN_ADAU1979_SHIFT             0
#define R24_HYST_SG_EN_ADAU1979_MASK              0x2
#define R24_HYST_SG_EN_ADAU1979_SHIFT             1
#define R24_HYST_SM_EN_ADAU1979_MASK              0x4
#define R24_HYST_SM_EN_ADAU1979_SHIFT             2
#define R24_FAULT_TO_ADAU1979_MASK                0x30
#define R24_FAULT_TO_ADAU1979_SHIFT               4

/* ASDC_CLIP (ADAU1979) */
#define R25_ADC_CLIP1_ADAU1979                    0x0    /* 0b	[0] */
#define R25_ADC_CLIP2_ADAU1979                    0x0    /* 0b	[1] */
#define R25_ADC_CLIP3_ADAU1979                    0x0    /* 0b	[2] */
#define R25_ADC_CLIP4_ADAU1979                    0x0    /* 0b	[3] */
#define R25_ADC_CLIP1_ADAU1979_MASK               0x1
#define R25_ADC_CLIP1_ADAU1979_SHIFT              0
#define R25_ADC_CLIP2_ADAU1979_MASK               0x2
#define R25_ADC_CLIP2_ADAU1979_SHIFT              1
#define R25_ADC_CLIP3_ADAU1979_MASK               0x4
#define R25_ADC_CLIP3_ADAU1979_SHIFT              2
#define R25_ADC_CLIP4_ADAU1979_MASK               0x8
#define R25_ADC_CLIP4_ADAU1979_SHIFT              3

/* DC_HPF_CAL (ADAU1979) */
#define R26_DC_HPF_C1_ADAU1979                    0x0    /* 0b	[0] */
#define R26_DC_HPF_C2_ADAU1979                    0x0    /* 0b	[1] */
#define R26_DC_HPF_C3_ADAU1979                    0x0    /* 0b	[2] */
#define R26_DC_HPF_C4_ADAU1979                    0x0    /* 0b	[3] */
#define R26_DC_SUB_C1_ADAU1979                    0x0    /* 0b	[4] */
#define R26_DC_SUB_C2_ADAU1979                    0x0    /* 0b	[5] */
#define R26_DC_SUB_C3_ADAU1979                    0x0    /* 0b	[6] */
#define R26_DC_SUB_C4_ADAU1979                    0x0    /* 0b	[7] */
#define R26_DC_HPF_C1_ADAU1979_MASK               0x1
#define R26_DC_HPF_C1_ADAU1979_SHIFT              0
#define R26_DC_HPF_C2_ADAU1979_MASK               0x2
#define R26_DC_HPF_C2_ADAU1979_SHIFT              1
#define R26_DC_HPF_C3_ADAU1979_MASK               0x4
#define R26_DC_HPF_C3_ADAU1979_SHIFT              2
#define R26_DC_HPF_C4_ADAU1979_MASK               0x8
#define R26_DC_HPF_C4_ADAU1979_SHIFT              3
#define R26_DC_SUB_C1_ADAU1979_MASK               0x10
#define R26_DC_SUB_C1_ADAU1979_SHIFT              4
#define R26_DC_SUB_C2_ADAU1979_MASK               0x20
#define R26_DC_SUB_C2_ADAU1979_SHIFT              5
#define R26_DC_SUB_C3_ADAU1979_MASK               0x40
#define R26_DC_SUB_C3_ADAU1979_SHIFT              6
#define R26_DC_SUB_C4_ADAU1979_MASK               0x80
#define R26_DC_SUB_C4_ADAU1979_SHIFT              7

/* TWEAK1 (ADAU1979) */
#define R27_BOOST_V_SEL_ADAU1979                  0x0    /* 0b	[0] */
#define R27_BOOST_V_ADAU1979                      0x0    /* 00b	[2:1] */
#define R27_CM_EN1_ADAU1979                       0x1    /* 1b	[4] */
#define R27_CM_EN2_ADAU1979                       0x1    /* 1b	[5] */
#define R27_CM_EN3_ADAU1979                       0x1    /* 1b	[6] */
#define R27_CM_EN4_ADAU1979                       0x1    /* 1b	[7] */
#define R27_BOOST_V_SEL_ADAU1979_MASK             0x1
#define R27_BOOST_V_SEL_ADAU1979_SHIFT            0
#define R27_BOOST_V_ADAU1979_MASK                 0x6
#define R27_BOOST_V_ADAU1979_SHIFT                1
#define R27_CM_EN1_ADAU1979_MASK                  0x10
#define R27_CM_EN1_ADAU1979_SHIFT                 4
#define R27_CM_EN2_ADAU1979_MASK                  0x20
#define R27_CM_EN2_ADAU1979_SHIFT                 5
#define R27_CM_EN3_ADAU1979_MASK                  0x40
#define R27_CM_EN3_ADAU1979_SHIFT                 6
#define R27_CM_EN4_ADAU1979_MASK                  0x80
#define R27_CM_EN4_ADAU1979_SHIFT                 7

/* ADC_TWEAK (ADAU1979) */
#define R28_SCRAM_BP_ADAU1979                     0x0    /* 0b	[0] */
#define R28_S16_JUMP_ADAU1979                     0x0    /* 000b	[3:1] */
#define R28_RDN_MODE_ADAU1979                     0x0    /* 0b	[4] */
#define R28_NOLPF_CAL_ADAU1979                    0x0    /* 0b	[5] */
#define R28_RESET_FORCE_ADAU1979                  0x1    /* 1b	[6] */
#define R28_PROTECT_DIS_ADAU1979                  0x0    /* 0b	[7] */
#define R28_SCRAM_BP_ADAU1979_MASK                0x1
#define R28_SCRAM_BP_ADAU1979_SHIFT               0
#define R28_S16_JUMP_ADAU1979_MASK                0xE
#define R28_S16_JUMP_ADAU1979_SHIFT               1
#define R28_RDN_MODE_ADAU1979_MASK                0x10
#define R28_RDN_MODE_ADAU1979_SHIFT               4
#define R28_NOLPF_CAL_ADAU1979_MASK               0x20
#define R28_NOLPF_CAL_ADAU1979_SHIFT              5
#define R28_RESET_FORCE_ADAU1979_MASK             0x40
#define R28_RESET_FORCE_ADAU1979_SHIFT            6
#define R28_PROTECT_DIS_ADAU1979_MASK             0x80
#define R28_PROTECT_DIS_ADAU1979_SHIFT            7

#endif
