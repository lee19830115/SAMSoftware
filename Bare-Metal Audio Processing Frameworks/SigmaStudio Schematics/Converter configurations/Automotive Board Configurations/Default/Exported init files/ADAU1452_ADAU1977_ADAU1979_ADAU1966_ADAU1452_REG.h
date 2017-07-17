/*
 * File:           C:\Users\Dan\Dropbox\Projects\ADI002 - SS Frameworks\Software\New Frameworks\SigmaStudio Schematics\Converter configurations\Automotive Board Configurations\Default\Exported init files\ADAU1452_ADAU1977_ADAU1979_ADAU1966_ADAU1452_REG.h
 *
 * Created:        Tuesday, June 27, 2017 8:08:03 PM
 * Description:    ADAU1452_ADAU1977_ADAU1979_ADAU1966:ADAU1452 control register definitions.
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
#ifndef __ADAU1452_ADAU1977_ADAU1979_ADAU1966_ADAU1452_REG_H__
#define __ADAU1452_ADAU1977_ADAU1979_ADAU1966_ADAU1452_REG_H__


/* PLL_CTRL0  - Registers (ADAU1452) */
#define REG_PLL_CTRL0_ADAU1452_ADDR               0xF000
#define REG_PLL_CTRL0_ADAU1452_BYTE               2
#define REG_PLL_CTRL0_ADAU1452_VALUE              0x60

/* PLL_CTRL1  - Registers (ADAU1452) */
#define REG_PLL_CTRL1_ADAU1452_ADDR               0xF001
#define REG_PLL_CTRL1_ADAU1452_BYTE               2
#define REG_PLL_CTRL1_ADAU1452_VALUE              0x2

/* PLL_CLK_SRC  - Registers (ADAU1452) */
#define REG_PLL_CLK_SRC_ADAU1452_ADDR             0xF002
#define REG_PLL_CLK_SRC_ADAU1452_BYTE             2
#define REG_PLL_CLK_SRC_ADAU1452_VALUE            0x1

/* PLL_ENABLE  - Registers (ADAU1452) */
#define REG_PLL_ENABLE_ADAU1452_ADDR              0xF003
#define REG_PLL_ENABLE_ADAU1452_BYTE              2
#define REG_PLL_ENABLE_ADAU1452_VALUE             0x1

/* PLL_LOCK  - Registers (ADAU1452) */
#define REG_PLL_LOCK_ADAU1452_ADDR                0xF004
#define REG_PLL_LOCK_ADAU1452_BYTE                0
#define REG_PLL_LOCK_ADAU1452_VALUE               0x0

/* MCLK_OUT  - Registers (ADAU1452) */
#define REG_MCLK_OUT_ADAU1452_ADDR                0xF005
#define REG_MCLK_OUT_ADAU1452_BYTE                2
#define REG_MCLK_OUT_ADAU1452_VALUE               0x5

/* PLL_WATCHDOG  - Registers (ADAU1452) */
#define REG_PLL_WATCHDOG_ADAU1452_ADDR            0xF006
#define REG_PLL_WATCHDOG_ADAU1452_BYTE            2
#define REG_PLL_WATCHDOG_ADAU1452_VALUE           0x0

/* CLK_GEN1_M  - Registers (ADAU1452) */
#define REG_CLK_GEN1_M_ADAU1452_ADDR              0xF020
#define REG_CLK_GEN1_M_ADAU1452_BYTE              2
#define REG_CLK_GEN1_M_ADAU1452_VALUE             0x6

/* CLK_GEN1_N  - Registers (ADAU1452) */
#define REG_CLK_GEN1_N_ADAU1452_ADDR              0xF021
#define REG_CLK_GEN1_N_ADAU1452_BYTE              2
#define REG_CLK_GEN1_N_ADAU1452_VALUE             0x1

/* CLK_GEN2_M  - Registers (ADAU1452) */
#define REG_CLK_GEN2_M_ADAU1452_ADDR              0xF022
#define REG_CLK_GEN2_M_ADAU1452_BYTE              2
#define REG_CLK_GEN2_M_ADAU1452_VALUE             0x9

/* CLK_GEN2_N  - Registers (ADAU1452) */
#define REG_CLK_GEN2_N_ADAU1452_ADDR              0xF023
#define REG_CLK_GEN2_N_ADAU1452_BYTE              2
#define REG_CLK_GEN2_N_ADAU1452_VALUE             0x1

/* CLK_GEN3_M  - Registers (ADAU1452) */
#define REG_CLK_GEN3_M_ADAU1452_ADDR              0xF024
#define REG_CLK_GEN3_M_ADAU1452_BYTE              2
#define REG_CLK_GEN3_M_ADAU1452_VALUE             0x0

/* CLK_GEN3_N  - Registers (ADAU1452) */
#define REG_CLK_GEN3_N_ADAU1452_ADDR              0xF025
#define REG_CLK_GEN3_N_ADAU1452_BYTE              2
#define REG_CLK_GEN3_N_ADAU1452_VALUE             0x0

/* CLK_GEN3_SRC  - Registers (ADAU1452) */
#define REG_CLK_GEN3_SRC_ADAU1452_ADDR            0xF026
#define REG_CLK_GEN3_SRC_ADAU1452_BYTE            2
#define REG_CLK_GEN3_SRC_ADAU1452_VALUE           0x0

/* CLK_GEN3_LOCK  - Registers (ADAU1452) */
#define REG_CLK_GEN3_LOCK_ADAU1452_ADDR           0xF027
#define REG_CLK_GEN3_LOCK_ADAU1452_BYTE           0
#define REG_CLK_GEN3_LOCK_ADAU1452_VALUE          0x0

/* POWER_ENABLE0  - Registers (ADAU1452) */
#define REG_POWER_ENABLE0_ADAU1452_ADDR           0xF050
#define REG_POWER_ENABLE0_ADAU1452_BYTE           2
#define REG_POWER_ENABLE0_ADAU1452_VALUE          0x1FEE

/* POWER_ENABLE1  - Registers (ADAU1452) */
#define REG_POWER_ENABLE1_ADAU1452_ADDR           0xF051
#define REG_POWER_ENABLE1_ADAU1452_BYTE           2
#define REG_POWER_ENABLE1_ADAU1452_VALUE          0x1F

/* ASRC_INPUT0  - Registers (ADAU1452) */
#define REG_ASRC_INPUT0_ADAU1452_ADDR             0xF100
#define REG_ASRC_INPUT0_ADAU1452_BYTE             2
#define REG_ASRC_INPUT0_ADAU1452_VALUE            0x0

/* ASRC_INPUT1  - Registers (ADAU1452) */
#define REG_ASRC_INPUT1_ADAU1452_ADDR             0xF101
#define REG_ASRC_INPUT1_ADAU1452_BYTE             2
#define REG_ASRC_INPUT1_ADAU1452_VALUE            0x0

/* ASRC_INPUT2  - Registers (ADAU1452) */
#define REG_ASRC_INPUT2_ADAU1452_ADDR             0xF102
#define REG_ASRC_INPUT2_ADAU1452_BYTE             2
#define REG_ASRC_INPUT2_ADAU1452_VALUE            0x0

/* ASRC_INPUT3  - Registers (ADAU1452) */
#define REG_ASRC_INPUT3_ADAU1452_ADDR             0xF103
#define REG_ASRC_INPUT3_ADAU1452_BYTE             2
#define REG_ASRC_INPUT3_ADAU1452_VALUE            0x0

/* ASRC_INPUT4  - Registers (ADAU1452) */
#define REG_ASRC_INPUT4_ADAU1452_ADDR             0xF104
#define REG_ASRC_INPUT4_ADAU1452_BYTE             2
#define REG_ASRC_INPUT4_ADAU1452_VALUE            0x0

/* ASRC_INPUT5  - Registers (ADAU1452) */
#define REG_ASRC_INPUT5_ADAU1452_ADDR             0xF105
#define REG_ASRC_INPUT5_ADAU1452_BYTE             2
#define REG_ASRC_INPUT5_ADAU1452_VALUE            0x0

/* ASRC_INPUT6  - Registers (ADAU1452) */
#define REG_ASRC_INPUT6_ADAU1452_ADDR             0xF106
#define REG_ASRC_INPUT6_ADAU1452_BYTE             2
#define REG_ASRC_INPUT6_ADAU1452_VALUE            0x0

/* ASRC_INPUT7  - Registers (ADAU1452) */
#define REG_ASRC_INPUT7_ADAU1452_ADDR             0xF107
#define REG_ASRC_INPUT7_ADAU1452_BYTE             2
#define REG_ASRC_INPUT7_ADAU1452_VALUE            0x0

/* ASRC_OUT_RATE0  - Registers (ADAU1452) */
#define REG_ASRC_OUT_RATE0_ADAU1452_ADDR          0xF140
#define REG_ASRC_OUT_RATE0_ADAU1452_BYTE          2
#define REG_ASRC_OUT_RATE0_ADAU1452_VALUE         0x0

/* ASRC_OUT_RATE1  - Registers (ADAU1452) */
#define REG_ASRC_OUT_RATE1_ADAU1452_ADDR          0xF141
#define REG_ASRC_OUT_RATE1_ADAU1452_BYTE          2
#define REG_ASRC_OUT_RATE1_ADAU1452_VALUE         0x0

/* ASRC_OUT_RATE2  - Registers (ADAU1452) */
#define REG_ASRC_OUT_RATE2_ADAU1452_ADDR          0xF142
#define REG_ASRC_OUT_RATE2_ADAU1452_BYTE          2
#define REG_ASRC_OUT_RATE2_ADAU1452_VALUE         0x0

/* ASRC_OUT_RATE3  - Registers (ADAU1452) */
#define REG_ASRC_OUT_RATE3_ADAU1452_ADDR          0xF143
#define REG_ASRC_OUT_RATE3_ADAU1452_BYTE          2
#define REG_ASRC_OUT_RATE3_ADAU1452_VALUE         0x0

/* ASRC_OUT_RATE4  - Registers (ADAU1452) */
#define REG_ASRC_OUT_RATE4_ADAU1452_ADDR          0xF144
#define REG_ASRC_OUT_RATE4_ADAU1452_BYTE          2
#define REG_ASRC_OUT_RATE4_ADAU1452_VALUE         0x0

/* ASRC_OUT_RATE5  - Registers (ADAU1452) */
#define REG_ASRC_OUT_RATE5_ADAU1452_ADDR          0xF145
#define REG_ASRC_OUT_RATE5_ADAU1452_BYTE          2
#define REG_ASRC_OUT_RATE5_ADAU1452_VALUE         0x0

/* ASRC_OUT_RATE6  - Registers (ADAU1452) */
#define REG_ASRC_OUT_RATE6_ADAU1452_ADDR          0xF146
#define REG_ASRC_OUT_RATE6_ADAU1452_BYTE          2
#define REG_ASRC_OUT_RATE6_ADAU1452_VALUE         0x0

/* ASRC_OUT_RATE7  - Registers (ADAU1452) */
#define REG_ASRC_OUT_RATE7_ADAU1452_ADDR          0xF147
#define REG_ASRC_OUT_RATE7_ADAU1452_BYTE          2
#define REG_ASRC_OUT_RATE7_ADAU1452_VALUE         0x0

/* SOUT_SOURCE0  - Registers (ADAU1452) */
#define REG_SOUT_SOURCE0_ADAU1452_ADDR            0xF180
#define REG_SOUT_SOURCE0_ADAU1452_BYTE            2
#define REG_SOUT_SOURCE0_ADAU1452_VALUE           0x2

/* SOUT_SOURCE1  - Registers (ADAU1452) */
#define REG_SOUT_SOURCE1_ADAU1452_ADDR            0xF181
#define REG_SOUT_SOURCE1_ADAU1452_BYTE            2
#define REG_SOUT_SOURCE1_ADAU1452_VALUE           0x2

/* SOUT_SOURCE2  - Registers (ADAU1452) */
#define REG_SOUT_SOURCE2_ADAU1452_ADDR            0xF182
#define REG_SOUT_SOURCE2_ADAU1452_BYTE            2
#define REG_SOUT_SOURCE2_ADAU1452_VALUE           0x2

/* SOUT_SOURCE3  - Registers (ADAU1452) */
#define REG_SOUT_SOURCE3_ADAU1452_ADDR            0xF183
#define REG_SOUT_SOURCE3_ADAU1452_BYTE            2
#define REG_SOUT_SOURCE3_ADAU1452_VALUE           0x2

/* SOUT_SOURCE4  - Registers (ADAU1452) */
#define REG_SOUT_SOURCE4_ADAU1452_ADDR            0xF184
#define REG_SOUT_SOURCE4_ADAU1452_BYTE            2
#define REG_SOUT_SOURCE4_ADAU1452_VALUE           0x2

/* SOUT_SOURCE5  - Registers (ADAU1452) */
#define REG_SOUT_SOURCE5_ADAU1452_ADDR            0xF185
#define REG_SOUT_SOURCE5_ADAU1452_BYTE            2
#define REG_SOUT_SOURCE5_ADAU1452_VALUE           0x2

/* SOUT_SOURCE6  - Registers (ADAU1452) */
#define REG_SOUT_SOURCE6_ADAU1452_ADDR            0xF186
#define REG_SOUT_SOURCE6_ADAU1452_BYTE            2
#define REG_SOUT_SOURCE6_ADAU1452_VALUE           0x2

/* SOUT_SOURCE7  - Registers (ADAU1452) */
#define REG_SOUT_SOURCE7_ADAU1452_ADDR            0xF187
#define REG_SOUT_SOURCE7_ADAU1452_BYTE            2
#define REG_SOUT_SOURCE7_ADAU1452_VALUE           0x2

/* SOUT_SOURCE8  - Registers (ADAU1452) */
#define REG_SOUT_SOURCE8_ADAU1452_ADDR            0xF188
#define REG_SOUT_SOURCE8_ADAU1452_BYTE            2
#define REG_SOUT_SOURCE8_ADAU1452_VALUE           0x2

/* SOUT_SOURCE9  - Registers (ADAU1452) */
#define REG_SOUT_SOURCE9_ADAU1452_ADDR            0xF189
#define REG_SOUT_SOURCE9_ADAU1452_BYTE            2
#define REG_SOUT_SOURCE9_ADAU1452_VALUE           0x2

/* SOUT_SOURCE10  - Registers (ADAU1452) */
#define REG_SOUT_SOURCE10_ADAU1452_ADDR           0xF18A
#define REG_SOUT_SOURCE10_ADAU1452_BYTE           2
#define REG_SOUT_SOURCE10_ADAU1452_VALUE          0x2

/* SOUT_SOURCE11  - Registers (ADAU1452) */
#define REG_SOUT_SOURCE11_ADAU1452_ADDR           0xF18B
#define REG_SOUT_SOURCE11_ADAU1452_BYTE           2
#define REG_SOUT_SOURCE11_ADAU1452_VALUE          0x2

/* SOUT_SOURCE12  - Registers (ADAU1452) */
#define REG_SOUT_SOURCE12_ADAU1452_ADDR           0xF18C
#define REG_SOUT_SOURCE12_ADAU1452_BYTE           2
#define REG_SOUT_SOURCE12_ADAU1452_VALUE          0x2

/* SOUT_SOURCE13  - Registers (ADAU1452) */
#define REG_SOUT_SOURCE13_ADAU1452_ADDR           0xF18D
#define REG_SOUT_SOURCE13_ADAU1452_BYTE           2
#define REG_SOUT_SOURCE13_ADAU1452_VALUE          0x2

/* SOUT_SOURCE14  - Registers (ADAU1452) */
#define REG_SOUT_SOURCE14_ADAU1452_ADDR           0xF18E
#define REG_SOUT_SOURCE14_ADAU1452_BYTE           2
#define REG_SOUT_SOURCE14_ADAU1452_VALUE          0x2

/* SOUT_SOURCE15  - Registers (ADAU1452) */
#define REG_SOUT_SOURCE15_ADAU1452_ADDR           0xF18F
#define REG_SOUT_SOURCE15_ADAU1452_BYTE           2
#define REG_SOUT_SOURCE15_ADAU1452_VALUE          0x2

/* SOUT_SOURCE16  - Registers (ADAU1452) */
#define REG_SOUT_SOURCE16_ADAU1452_ADDR           0xF190
#define REG_SOUT_SOURCE16_ADAU1452_BYTE           2
#define REG_SOUT_SOURCE16_ADAU1452_VALUE          0x2

/* SOUT_SOURCE17  - Registers (ADAU1452) */
#define REG_SOUT_SOURCE17_ADAU1452_ADDR           0xF191
#define REG_SOUT_SOURCE17_ADAU1452_BYTE           2
#define REG_SOUT_SOURCE17_ADAU1452_VALUE          0x2

/* SOUT_SOURCE18  - Registers (ADAU1452) */
#define REG_SOUT_SOURCE18_ADAU1452_ADDR           0xF192
#define REG_SOUT_SOURCE18_ADAU1452_BYTE           2
#define REG_SOUT_SOURCE18_ADAU1452_VALUE          0x2

/* SOUT_SOURCE19  - Registers (ADAU1452) */
#define REG_SOUT_SOURCE19_ADAU1452_ADDR           0xF193
#define REG_SOUT_SOURCE19_ADAU1452_BYTE           2
#define REG_SOUT_SOURCE19_ADAU1452_VALUE          0x2

/* SOUT_SOURCE20  - Registers (ADAU1452) */
#define REG_SOUT_SOURCE20_ADAU1452_ADDR           0xF194
#define REG_SOUT_SOURCE20_ADAU1452_BYTE           2
#define REG_SOUT_SOURCE20_ADAU1452_VALUE          0x2

/* SOUT_SOURCE21  - Registers (ADAU1452) */
#define REG_SOUT_SOURCE21_ADAU1452_ADDR           0xF195
#define REG_SOUT_SOURCE21_ADAU1452_BYTE           2
#define REG_SOUT_SOURCE21_ADAU1452_VALUE          0x2

/* SOUT_SOURCE22  - Registers (ADAU1452) */
#define REG_SOUT_SOURCE22_ADAU1452_ADDR           0xF196
#define REG_SOUT_SOURCE22_ADAU1452_BYTE           2
#define REG_SOUT_SOURCE22_ADAU1452_VALUE          0x2

/* SOUT_SOURCE23  - Registers (ADAU1452) */
#define REG_SOUT_SOURCE23_ADAU1452_ADDR           0xF197
#define REG_SOUT_SOURCE23_ADAU1452_BYTE           2
#define REG_SOUT_SOURCE23_ADAU1452_VALUE          0x2

/* SPDIFTX_INPUT  - Registers (ADAU1452) */
#define REG_SPDIFTX_INPUT_ADAU1452_ADDR           0xF1C0
#define REG_SPDIFTX_INPUT_ADAU1452_BYTE           2
#define REG_SPDIFTX_INPUT_ADAU1452_VALUE          0x1

/* SERIAL_BYTE_0_0  - Registers (ADAU1452) */
#define REG_SERIAL_BYTE_0_0_ADAU1452_ADDR         0xF200
#define REG_SERIAL_BYTE_0_0_ADAU1452_BYTE         2
#define REG_SERIAL_BYTE_0_0_ADAU1452_VALUE        0x938A

/* SERIAL_BYTE_0_1  - Registers (ADAU1452) */
#define REG_SERIAL_BYTE_0_1_ADAU1452_ADDR         0xF201
#define REG_SERIAL_BYTE_0_1_ADAU1452_BYTE         2
#define REG_SERIAL_BYTE_0_1_ADAU1452_VALUE        0x2

/* SERIAL_BYTE_1_0  - Registers (ADAU1452) */
#define REG_SERIAL_BYTE_1_0_ADAU1452_ADDR         0xF204
#define REG_SERIAL_BYTE_1_0_ADAU1452_BYTE         2
#define REG_SERIAL_BYTE_1_0_ADAU1452_VALUE        0x9383

/* SERIAL_BYTE_1_1  - Registers (ADAU1452) */
#define REG_SERIAL_BYTE_1_1_ADAU1452_ADDR         0xF205
#define REG_SERIAL_BYTE_1_1_ADAU1452_BYTE         2
#define REG_SERIAL_BYTE_1_1_ADAU1452_VALUE        0x2

/* SERIAL_BYTE_2_0  - Registers (ADAU1452) */
#define REG_SERIAL_BYTE_2_0_ADAU1452_ADDR         0xF208
#define REG_SERIAL_BYTE_2_0_ADAU1452_BYTE         2
#define REG_SERIAL_BYTE_2_0_ADAU1452_VALUE        0x9189

/* SERIAL_BYTE_2_1  - Registers (ADAU1452) */
#define REG_SERIAL_BYTE_2_1_ADAU1452_ADDR         0xF209
#define REG_SERIAL_BYTE_2_1_ADAU1452_BYTE         2
#define REG_SERIAL_BYTE_2_1_ADAU1452_VALUE        0x2

/* SERIAL_BYTE_3_0  - Registers (ADAU1452) */
#define REG_SERIAL_BYTE_3_0_ADAU1452_ADDR         0xF20C
#define REG_SERIAL_BYTE_3_0_ADAU1452_BYTE         2
#define REG_SERIAL_BYTE_3_0_ADAU1452_VALUE        0x9189

/* SERIAL_BYTE_3_1  - Registers (ADAU1452) */
#define REG_SERIAL_BYTE_3_1_ADAU1452_ADDR         0xF20D
#define REG_SERIAL_BYTE_3_1_ADAU1452_BYTE         2
#define REG_SERIAL_BYTE_3_1_ADAU1452_VALUE        0x2

/* SERIAL_BYTE_4_0  - Registers (ADAU1452) */
#define REG_SERIAL_BYTE_4_0_ADAU1452_ADDR         0xF210
#define REG_SERIAL_BYTE_4_0_ADAU1452_BYTE         2
#define REG_SERIAL_BYTE_4_0_ADAU1452_VALUE        0x938A

/* SERIAL_BYTE_4_1  - Registers (ADAU1452) */
#define REG_SERIAL_BYTE_4_1_ADAU1452_ADDR         0xF211
#define REG_SERIAL_BYTE_4_1_ADAU1452_BYTE         2
#define REG_SERIAL_BYTE_4_1_ADAU1452_VALUE        0x2

/* SERIAL_BYTE_5_0  - Registers (ADAU1452) */
#define REG_SERIAL_BYTE_5_0_ADAU1452_ADDR         0xF214
#define REG_SERIAL_BYTE_5_0_ADAU1452_BYTE         2
#define REG_SERIAL_BYTE_5_0_ADAU1452_VALUE        0x938B

/* SERIAL_BYTE_5_1  - Registers (ADAU1452) */
#define REG_SERIAL_BYTE_5_1_ADAU1452_ADDR         0xF215
#define REG_SERIAL_BYTE_5_1_ADAU1452_BYTE         2
#define REG_SERIAL_BYTE_5_1_ADAU1452_VALUE        0x2

/* SERIAL_BYTE_6_0  - Registers (ADAU1452) */
#define REG_SERIAL_BYTE_6_0_ADAU1452_ADDR         0xF218
#define REG_SERIAL_BYTE_6_0_ADAU1452_BYTE         2
#define REG_SERIAL_BYTE_6_0_ADAU1452_VALUE        0x9182

/* SERIAL_BYTE_6_1  - Registers (ADAU1452) */
#define REG_SERIAL_BYTE_6_1_ADAU1452_ADDR         0xF219
#define REG_SERIAL_BYTE_6_1_ADAU1452_BYTE         2
#define REG_SERIAL_BYTE_6_1_ADAU1452_VALUE        0x2

/* SERIAL_BYTE_7_0  - Registers (ADAU1452) */
#define REG_SERIAL_BYTE_7_0_ADAU1452_ADDR         0xF21C
#define REG_SERIAL_BYTE_7_0_ADAU1452_BYTE         2
#define REG_SERIAL_BYTE_7_0_ADAU1452_VALUE        0x9182

/* SERIAL_BYTE_7_1  - Registers (ADAU1452) */
#define REG_SERIAL_BYTE_7_1_ADAU1452_ADDR         0xF21D
#define REG_SERIAL_BYTE_7_1_ADAU1452_BYTE         2
#define REG_SERIAL_BYTE_7_1_ADAU1452_VALUE        0x2

/* FTDM_IN0  - Registers (ADAU1452) */
#define REG_FTDM_IN0_ADAU1452_ADDR                0xF300
#define REG_FTDM_IN0_ADAU1452_BYTE                2
#define REG_FTDM_IN0_ADAU1452_VALUE               0x0

/* FTDM_IN1  - Registers (ADAU1452) */
#define REG_FTDM_IN1_ADAU1452_ADDR                0xF301
#define REG_FTDM_IN1_ADAU1452_BYTE                2
#define REG_FTDM_IN1_ADAU1452_VALUE               0x0

/* FTDM_IN2  - Registers (ADAU1452) */
#define REG_FTDM_IN2_ADAU1452_ADDR                0xF302
#define REG_FTDM_IN2_ADAU1452_BYTE                2
#define REG_FTDM_IN2_ADAU1452_VALUE               0x0

/* FTDM_IN3  - Registers (ADAU1452) */
#define REG_FTDM_IN3_ADAU1452_ADDR                0xF303
#define REG_FTDM_IN3_ADAU1452_BYTE                2
#define REG_FTDM_IN3_ADAU1452_VALUE               0x0

/* FTDM_IN4  - Registers (ADAU1452) */
#define REG_FTDM_IN4_ADAU1452_ADDR                0xF304
#define REG_FTDM_IN4_ADAU1452_BYTE                2
#define REG_FTDM_IN4_ADAU1452_VALUE               0x0

/* FTDM_IN5  - Registers (ADAU1452) */
#define REG_FTDM_IN5_ADAU1452_ADDR                0xF305
#define REG_FTDM_IN5_ADAU1452_BYTE                2
#define REG_FTDM_IN5_ADAU1452_VALUE               0x0

/* FTDM_IN6  - Registers (ADAU1452) */
#define REG_FTDM_IN6_ADAU1452_ADDR                0xF306
#define REG_FTDM_IN6_ADAU1452_BYTE                2
#define REG_FTDM_IN6_ADAU1452_VALUE               0x0

/* FTDM_IN7  - Registers (ADAU1452) */
#define REG_FTDM_IN7_ADAU1452_ADDR                0xF307
#define REG_FTDM_IN7_ADAU1452_BYTE                2
#define REG_FTDM_IN7_ADAU1452_VALUE               0x0

/* FTDM_IN8  - Registers (ADAU1452) */
#define REG_FTDM_IN8_ADAU1452_ADDR                0xF308
#define REG_FTDM_IN8_ADAU1452_BYTE                2
#define REG_FTDM_IN8_ADAU1452_VALUE               0x0

/* FTDM_IN9  - Registers (ADAU1452) */
#define REG_FTDM_IN9_ADAU1452_ADDR                0xF309
#define REG_FTDM_IN9_ADAU1452_BYTE                2
#define REG_FTDM_IN9_ADAU1452_VALUE               0x0

/* FTDM_IN10  - Registers (ADAU1452) */
#define REG_FTDM_IN10_ADAU1452_ADDR               0xF30A
#define REG_FTDM_IN10_ADAU1452_BYTE               2
#define REG_FTDM_IN10_ADAU1452_VALUE              0x0

/* FTDM_IN11  - Registers (ADAU1452) */
#define REG_FTDM_IN11_ADAU1452_ADDR               0xF30B
#define REG_FTDM_IN11_ADAU1452_BYTE               2
#define REG_FTDM_IN11_ADAU1452_VALUE              0x0

/* FTDM_IN12  - Registers (ADAU1452) */
#define REG_FTDM_IN12_ADAU1452_ADDR               0xF30C
#define REG_FTDM_IN12_ADAU1452_BYTE               2
#define REG_FTDM_IN12_ADAU1452_VALUE              0x0

/* FTDM_IN13  - Registers (ADAU1452) */
#define REG_FTDM_IN13_ADAU1452_ADDR               0xF30D
#define REG_FTDM_IN13_ADAU1452_BYTE               2
#define REG_FTDM_IN13_ADAU1452_VALUE              0x0

/* FTDM_IN14  - Registers (ADAU1452) */
#define REG_FTDM_IN14_ADAU1452_ADDR               0xF30E
#define REG_FTDM_IN14_ADAU1452_BYTE               2
#define REG_FTDM_IN14_ADAU1452_VALUE              0x0

/* FTDM_IN15  - Registers (ADAU1452) */
#define REG_FTDM_IN15_ADAU1452_ADDR               0xF30F
#define REG_FTDM_IN15_ADAU1452_BYTE               2
#define REG_FTDM_IN15_ADAU1452_VALUE              0x0

/* FTDM_IN16  - Registers (ADAU1452) */
#define REG_FTDM_IN16_ADAU1452_ADDR               0xF310
#define REG_FTDM_IN16_ADAU1452_BYTE               2
#define REG_FTDM_IN16_ADAU1452_VALUE              0x0

/* FTDM_IN17  - Registers (ADAU1452) */
#define REG_FTDM_IN17_ADAU1452_ADDR               0xF311
#define REG_FTDM_IN17_ADAU1452_BYTE               2
#define REG_FTDM_IN17_ADAU1452_VALUE              0x0

/* FTDM_IN18  - Registers (ADAU1452) */
#define REG_FTDM_IN18_ADAU1452_ADDR               0xF312
#define REG_FTDM_IN18_ADAU1452_BYTE               2
#define REG_FTDM_IN18_ADAU1452_VALUE              0x0

/* FTDM_IN19  - Registers (ADAU1452) */
#define REG_FTDM_IN19_ADAU1452_ADDR               0xF313
#define REG_FTDM_IN19_ADAU1452_BYTE               2
#define REG_FTDM_IN19_ADAU1452_VALUE              0x0

/* FTDM_IN20  - Registers (ADAU1452) */
#define REG_FTDM_IN20_ADAU1452_ADDR               0xF314
#define REG_FTDM_IN20_ADAU1452_BYTE               2
#define REG_FTDM_IN20_ADAU1452_VALUE              0x0

/* FTDM_IN21  - Registers (ADAU1452) */
#define REG_FTDM_IN21_ADAU1452_ADDR               0xF315
#define REG_FTDM_IN21_ADAU1452_BYTE               2
#define REG_FTDM_IN21_ADAU1452_VALUE              0x0

/* FTDM_IN22  - Registers (ADAU1452) */
#define REG_FTDM_IN22_ADAU1452_ADDR               0xF316
#define REG_FTDM_IN22_ADAU1452_BYTE               2
#define REG_FTDM_IN22_ADAU1452_VALUE              0x0

/* FTDM_IN23  - Registers (ADAU1452) */
#define REG_FTDM_IN23_ADAU1452_ADDR               0xF317
#define REG_FTDM_IN23_ADAU1452_BYTE               2
#define REG_FTDM_IN23_ADAU1452_VALUE              0x0

/* FTDM_IN24  - Registers (ADAU1452) */
#define REG_FTDM_IN24_ADAU1452_ADDR               0xF318
#define REG_FTDM_IN24_ADAU1452_BYTE               2
#define REG_FTDM_IN24_ADAU1452_VALUE              0x0

/* FTDM_IN25  - Registers (ADAU1452) */
#define REG_FTDM_IN25_ADAU1452_ADDR               0xF319
#define REG_FTDM_IN25_ADAU1452_BYTE               2
#define REG_FTDM_IN25_ADAU1452_VALUE              0x0

/* FTDM_IN26  - Registers (ADAU1452) */
#define REG_FTDM_IN26_ADAU1452_ADDR               0xF31A
#define REG_FTDM_IN26_ADAU1452_BYTE               2
#define REG_FTDM_IN26_ADAU1452_VALUE              0x0

/* FTDM_IN27  - Registers (ADAU1452) */
#define REG_FTDM_IN27_ADAU1452_ADDR               0xF31B
#define REG_FTDM_IN27_ADAU1452_BYTE               2
#define REG_FTDM_IN27_ADAU1452_VALUE              0x0

/* FTDM_IN28  - Registers (ADAU1452) */
#define REG_FTDM_IN28_ADAU1452_ADDR               0xF31C
#define REG_FTDM_IN28_ADAU1452_BYTE               2
#define REG_FTDM_IN28_ADAU1452_VALUE              0x0

/* FTDM_IN29  - Registers (ADAU1452) */
#define REG_FTDM_IN29_ADAU1452_ADDR               0xF31D
#define REG_FTDM_IN29_ADAU1452_BYTE               2
#define REG_FTDM_IN29_ADAU1452_VALUE              0x0

/* FTDM_IN30  - Registers (ADAU1452) */
#define REG_FTDM_IN30_ADAU1452_ADDR               0xF31E
#define REG_FTDM_IN30_ADAU1452_BYTE               2
#define REG_FTDM_IN30_ADAU1452_VALUE              0x0

/* FTDM_IN31  - Registers (ADAU1452) */
#define REG_FTDM_IN31_ADAU1452_ADDR               0xF31F
#define REG_FTDM_IN31_ADAU1452_BYTE               2
#define REG_FTDM_IN31_ADAU1452_VALUE              0x0

/* FTDM_IN32  - Registers (ADAU1452) */
#define REG_FTDM_IN32_ADAU1452_ADDR               0xF320
#define REG_FTDM_IN32_ADAU1452_BYTE               2
#define REG_FTDM_IN32_ADAU1452_VALUE              0x0

/* FTDM_IN33  - Registers (ADAU1452) */
#define REG_FTDM_IN33_ADAU1452_ADDR               0xF321
#define REG_FTDM_IN33_ADAU1452_BYTE               2
#define REG_FTDM_IN33_ADAU1452_VALUE              0x0

/* FTDM_IN34  - Registers (ADAU1452) */
#define REG_FTDM_IN34_ADAU1452_ADDR               0xF322
#define REG_FTDM_IN34_ADAU1452_BYTE               2
#define REG_FTDM_IN34_ADAU1452_VALUE              0x0

/* FTDM_IN35  - Registers (ADAU1452) */
#define REG_FTDM_IN35_ADAU1452_ADDR               0xF323
#define REG_FTDM_IN35_ADAU1452_BYTE               2
#define REG_FTDM_IN35_ADAU1452_VALUE              0x0

/* FTDM_IN36  - Registers (ADAU1452) */
#define REG_FTDM_IN36_ADAU1452_ADDR               0xF324
#define REG_FTDM_IN36_ADAU1452_BYTE               2
#define REG_FTDM_IN36_ADAU1452_VALUE              0x0

/* FTDM_IN37  - Registers (ADAU1452) */
#define REG_FTDM_IN37_ADAU1452_ADDR               0xF325
#define REG_FTDM_IN37_ADAU1452_BYTE               2
#define REG_FTDM_IN37_ADAU1452_VALUE              0x0

/* FTDM_IN38  - Registers (ADAU1452) */
#define REG_FTDM_IN38_ADAU1452_ADDR               0xF326
#define REG_FTDM_IN38_ADAU1452_BYTE               2
#define REG_FTDM_IN38_ADAU1452_VALUE              0x0

/* FTDM_IN39  - Registers (ADAU1452) */
#define REG_FTDM_IN39_ADAU1452_ADDR               0xF327
#define REG_FTDM_IN39_ADAU1452_BYTE               2
#define REG_FTDM_IN39_ADAU1452_VALUE              0x0

/* FTDM_IN40  - Registers (ADAU1452) */
#define REG_FTDM_IN40_ADAU1452_ADDR               0xF328
#define REG_FTDM_IN40_ADAU1452_BYTE               2
#define REG_FTDM_IN40_ADAU1452_VALUE              0x0

/* FTDM_IN41  - Registers (ADAU1452) */
#define REG_FTDM_IN41_ADAU1452_ADDR               0xF329
#define REG_FTDM_IN41_ADAU1452_BYTE               2
#define REG_FTDM_IN41_ADAU1452_VALUE              0x0

/* FTDM_IN42  - Registers (ADAU1452) */
#define REG_FTDM_IN42_ADAU1452_ADDR               0xF32A
#define REG_FTDM_IN42_ADAU1452_BYTE               2
#define REG_FTDM_IN42_ADAU1452_VALUE              0x0

/* FTDM_IN43  - Registers (ADAU1452) */
#define REG_FTDM_IN43_ADAU1452_ADDR               0xF32B
#define REG_FTDM_IN43_ADAU1452_BYTE               2
#define REG_FTDM_IN43_ADAU1452_VALUE              0x0

/* FTDM_IN44  - Registers (ADAU1452) */
#define REG_FTDM_IN44_ADAU1452_ADDR               0xF32C
#define REG_FTDM_IN44_ADAU1452_BYTE               2
#define REG_FTDM_IN44_ADAU1452_VALUE              0x0

/* FTDM_IN45  - Registers (ADAU1452) */
#define REG_FTDM_IN45_ADAU1452_ADDR               0xF32D
#define REG_FTDM_IN45_ADAU1452_BYTE               2
#define REG_FTDM_IN45_ADAU1452_VALUE              0x0

/* FTDM_IN46  - Registers (ADAU1452) */
#define REG_FTDM_IN46_ADAU1452_ADDR               0xF32E
#define REG_FTDM_IN46_ADAU1452_BYTE               2
#define REG_FTDM_IN46_ADAU1452_VALUE              0x0

/* FTDM_IN47  - Registers (ADAU1452) */
#define REG_FTDM_IN47_ADAU1452_ADDR               0xF32F
#define REG_FTDM_IN47_ADAU1452_BYTE               2
#define REG_FTDM_IN47_ADAU1452_VALUE              0x0

/* FTDM_IN48  - Registers (ADAU1452) */
#define REG_FTDM_IN48_ADAU1452_ADDR               0xF330
#define REG_FTDM_IN48_ADAU1452_BYTE               2
#define REG_FTDM_IN48_ADAU1452_VALUE              0x0

/* FTDM_IN49  - Registers (ADAU1452) */
#define REG_FTDM_IN49_ADAU1452_ADDR               0xF331
#define REG_FTDM_IN49_ADAU1452_BYTE               2
#define REG_FTDM_IN49_ADAU1452_VALUE              0x0

/* FTDM_IN50  - Registers (ADAU1452) */
#define REG_FTDM_IN50_ADAU1452_ADDR               0xF332
#define REG_FTDM_IN50_ADAU1452_BYTE               2
#define REG_FTDM_IN50_ADAU1452_VALUE              0x0

/* FTDM_IN51  - Registers (ADAU1452) */
#define REG_FTDM_IN51_ADAU1452_ADDR               0xF333
#define REG_FTDM_IN51_ADAU1452_BYTE               2
#define REG_FTDM_IN51_ADAU1452_VALUE              0x0

/* FTDM_IN52  - Registers (ADAU1452) */
#define REG_FTDM_IN52_ADAU1452_ADDR               0xF334
#define REG_FTDM_IN52_ADAU1452_BYTE               2
#define REG_FTDM_IN52_ADAU1452_VALUE              0x0

/* FTDM_IN53  - Registers (ADAU1452) */
#define REG_FTDM_IN53_ADAU1452_ADDR               0xF335
#define REG_FTDM_IN53_ADAU1452_BYTE               2
#define REG_FTDM_IN53_ADAU1452_VALUE              0x0

/* FTDM_IN54  - Registers (ADAU1452) */
#define REG_FTDM_IN54_ADAU1452_ADDR               0xF336
#define REG_FTDM_IN54_ADAU1452_BYTE               2
#define REG_FTDM_IN54_ADAU1452_VALUE              0x0

/* FTDM_IN55  - Registers (ADAU1452) */
#define REG_FTDM_IN55_ADAU1452_ADDR               0xF337
#define REG_FTDM_IN55_ADAU1452_BYTE               2
#define REG_FTDM_IN55_ADAU1452_VALUE              0x0

/* FTDM_IN56  - Registers (ADAU1452) */
#define REG_FTDM_IN56_ADAU1452_ADDR               0xF338
#define REG_FTDM_IN56_ADAU1452_BYTE               2
#define REG_FTDM_IN56_ADAU1452_VALUE              0x0

/* FTDM_IN57  - Registers (ADAU1452) */
#define REG_FTDM_IN57_ADAU1452_ADDR               0xF339
#define REG_FTDM_IN57_ADAU1452_BYTE               2
#define REG_FTDM_IN57_ADAU1452_VALUE              0x0

/* FTDM_IN58  - Registers (ADAU1452) */
#define REG_FTDM_IN58_ADAU1452_ADDR               0xF33A
#define REG_FTDM_IN58_ADAU1452_BYTE               2
#define REG_FTDM_IN58_ADAU1452_VALUE              0x0

/* FTDM_IN59  - Registers (ADAU1452) */
#define REG_FTDM_IN59_ADAU1452_ADDR               0xF33B
#define REG_FTDM_IN59_ADAU1452_BYTE               2
#define REG_FTDM_IN59_ADAU1452_VALUE              0x0

/* FTDM_IN60  - Registers (ADAU1452) */
#define REG_FTDM_IN60_ADAU1452_ADDR               0xF33C
#define REG_FTDM_IN60_ADAU1452_BYTE               2
#define REG_FTDM_IN60_ADAU1452_VALUE              0x0

/* FTDM_IN61  - Registers (ADAU1452) */
#define REG_FTDM_IN61_ADAU1452_ADDR               0xF33D
#define REG_FTDM_IN61_ADAU1452_BYTE               2
#define REG_FTDM_IN61_ADAU1452_VALUE              0x0

/* FTDM_IN62  - Registers (ADAU1452) */
#define REG_FTDM_IN62_ADAU1452_ADDR               0xF33E
#define REG_FTDM_IN62_ADAU1452_BYTE               2
#define REG_FTDM_IN62_ADAU1452_VALUE              0x0

/* FTDM_IN63  - Registers (ADAU1452) */
#define REG_FTDM_IN63_ADAU1452_ADDR               0xF33F
#define REG_FTDM_IN63_ADAU1452_BYTE               2
#define REG_FTDM_IN63_ADAU1452_VALUE              0x0

/* FTDM_OUT0  - Registers (ADAU1452) */
#define REG_FTDM_OUT0_ADAU1452_ADDR               0xF380
#define REG_FTDM_OUT0_ADAU1452_BYTE               2
#define REG_FTDM_OUT0_ADAU1452_VALUE              0x0

/* FTDM_OUT1  - Registers (ADAU1452) */
#define REG_FTDM_OUT1_ADAU1452_ADDR               0xF381
#define REG_FTDM_OUT1_ADAU1452_BYTE               2
#define REG_FTDM_OUT1_ADAU1452_VALUE              0x0

/* FTDM_OUT2  - Registers (ADAU1452) */
#define REG_FTDM_OUT2_ADAU1452_ADDR               0xF382
#define REG_FTDM_OUT2_ADAU1452_BYTE               2
#define REG_FTDM_OUT2_ADAU1452_VALUE              0x0

/* FTDM_OUT3  - Registers (ADAU1452) */
#define REG_FTDM_OUT3_ADAU1452_ADDR               0xF383
#define REG_FTDM_OUT3_ADAU1452_BYTE               2
#define REG_FTDM_OUT3_ADAU1452_VALUE              0x0

/* FTDM_OUT4  - Registers (ADAU1452) */
#define REG_FTDM_OUT4_ADAU1452_ADDR               0xF384
#define REG_FTDM_OUT4_ADAU1452_BYTE               2
#define REG_FTDM_OUT4_ADAU1452_VALUE              0x0

/* FTDM_OUT5  - Registers (ADAU1452) */
#define REG_FTDM_OUT5_ADAU1452_ADDR               0xF385
#define REG_FTDM_OUT5_ADAU1452_BYTE               2
#define REG_FTDM_OUT5_ADAU1452_VALUE              0x0

/* FTDM_OUT6  - Registers (ADAU1452) */
#define REG_FTDM_OUT6_ADAU1452_ADDR               0xF386
#define REG_FTDM_OUT6_ADAU1452_BYTE               2
#define REG_FTDM_OUT6_ADAU1452_VALUE              0x0

/* FTDM_OUT7  - Registers (ADAU1452) */
#define REG_FTDM_OUT7_ADAU1452_ADDR               0xF387
#define REG_FTDM_OUT7_ADAU1452_BYTE               2
#define REG_FTDM_OUT7_ADAU1452_VALUE              0x0

/* FTDM_OUT8  - Registers (ADAU1452) */
#define REG_FTDM_OUT8_ADAU1452_ADDR               0xF388
#define REG_FTDM_OUT8_ADAU1452_BYTE               2
#define REG_FTDM_OUT8_ADAU1452_VALUE              0x0

/* FTDM_OUT9  - Registers (ADAU1452) */
#define REG_FTDM_OUT9_ADAU1452_ADDR               0xF389
#define REG_FTDM_OUT9_ADAU1452_BYTE               2
#define REG_FTDM_OUT9_ADAU1452_VALUE              0x0

/* FTDM_OUT10  - Registers (ADAU1452) */
#define REG_FTDM_OUT10_ADAU1452_ADDR              0xF38A
#define REG_FTDM_OUT10_ADAU1452_BYTE              2
#define REG_FTDM_OUT10_ADAU1452_VALUE             0x0

/* FTDM_OUT11  - Registers (ADAU1452) */
#define REG_FTDM_OUT11_ADAU1452_ADDR              0xF38B
#define REG_FTDM_OUT11_ADAU1452_BYTE              2
#define REG_FTDM_OUT11_ADAU1452_VALUE             0x0

/* FTDM_OUT12  - Registers (ADAU1452) */
#define REG_FTDM_OUT12_ADAU1452_ADDR              0xF38C
#define REG_FTDM_OUT12_ADAU1452_BYTE              2
#define REG_FTDM_OUT12_ADAU1452_VALUE             0x0

/* FTDM_OUT13  - Registers (ADAU1452) */
#define REG_FTDM_OUT13_ADAU1452_ADDR              0xF38D
#define REG_FTDM_OUT13_ADAU1452_BYTE              2
#define REG_FTDM_OUT13_ADAU1452_VALUE             0x0

/* FTDM_OUT14  - Registers (ADAU1452) */
#define REG_FTDM_OUT14_ADAU1452_ADDR              0xF38E
#define REG_FTDM_OUT14_ADAU1452_BYTE              2
#define REG_FTDM_OUT14_ADAU1452_VALUE             0x0

/* FTDM_OUT15  - Registers (ADAU1452) */
#define REG_FTDM_OUT15_ADAU1452_ADDR              0xF38F
#define REG_FTDM_OUT15_ADAU1452_BYTE              2
#define REG_FTDM_OUT15_ADAU1452_VALUE             0x0

/* FTDM_OUT16  - Registers (ADAU1452) */
#define REG_FTDM_OUT16_ADAU1452_ADDR              0xF390
#define REG_FTDM_OUT16_ADAU1452_BYTE              2
#define REG_FTDM_OUT16_ADAU1452_VALUE             0x0

/* FTDM_OUT17  - Registers (ADAU1452) */
#define REG_FTDM_OUT17_ADAU1452_ADDR              0xF391
#define REG_FTDM_OUT17_ADAU1452_BYTE              2
#define REG_FTDM_OUT17_ADAU1452_VALUE             0x0

/* FTDM_OUT18  - Registers (ADAU1452) */
#define REG_FTDM_OUT18_ADAU1452_ADDR              0xF392
#define REG_FTDM_OUT18_ADAU1452_BYTE              2
#define REG_FTDM_OUT18_ADAU1452_VALUE             0x0

/* FTDM_OUT19  - Registers (ADAU1452) */
#define REG_FTDM_OUT19_ADAU1452_ADDR              0xF393
#define REG_FTDM_OUT19_ADAU1452_BYTE              2
#define REG_FTDM_OUT19_ADAU1452_VALUE             0x0

/* FTDM_OUT20  - Registers (ADAU1452) */
#define REG_FTDM_OUT20_ADAU1452_ADDR              0xF394
#define REG_FTDM_OUT20_ADAU1452_BYTE              2
#define REG_FTDM_OUT20_ADAU1452_VALUE             0x0

/* FTDM_OUT21  - Registers (ADAU1452) */
#define REG_FTDM_OUT21_ADAU1452_ADDR              0xF395
#define REG_FTDM_OUT21_ADAU1452_BYTE              2
#define REG_FTDM_OUT21_ADAU1452_VALUE             0x0

/* FTDM_OUT22  - Registers (ADAU1452) */
#define REG_FTDM_OUT22_ADAU1452_ADDR              0xF396
#define REG_FTDM_OUT22_ADAU1452_BYTE              2
#define REG_FTDM_OUT22_ADAU1452_VALUE             0x0

/* FTDM_OUT23  - Registers (ADAU1452) */
#define REG_FTDM_OUT23_ADAU1452_ADDR              0xF397
#define REG_FTDM_OUT23_ADAU1452_BYTE              2
#define REG_FTDM_OUT23_ADAU1452_VALUE             0x0

/* FTDM_OUT24  - Registers (ADAU1452) */
#define REG_FTDM_OUT24_ADAU1452_ADDR              0xF398
#define REG_FTDM_OUT24_ADAU1452_BYTE              2
#define REG_FTDM_OUT24_ADAU1452_VALUE             0x0

/* FTDM_OUT25  - Registers (ADAU1452) */
#define REG_FTDM_OUT25_ADAU1452_ADDR              0xF399
#define REG_FTDM_OUT25_ADAU1452_BYTE              2
#define REG_FTDM_OUT25_ADAU1452_VALUE             0x0

/* FTDM_OUT26  - Registers (ADAU1452) */
#define REG_FTDM_OUT26_ADAU1452_ADDR              0xF39A
#define REG_FTDM_OUT26_ADAU1452_BYTE              2
#define REG_FTDM_OUT26_ADAU1452_VALUE             0x0

/* FTDM_OUT27  - Registers (ADAU1452) */
#define REG_FTDM_OUT27_ADAU1452_ADDR              0xF39B
#define REG_FTDM_OUT27_ADAU1452_BYTE              2
#define REG_FTDM_OUT27_ADAU1452_VALUE             0x0

/* FTDM_OUT28  - Registers (ADAU1452) */
#define REG_FTDM_OUT28_ADAU1452_ADDR              0xF39C
#define REG_FTDM_OUT28_ADAU1452_BYTE              2
#define REG_FTDM_OUT28_ADAU1452_VALUE             0x0

/* FTDM_OUT29  - Registers (ADAU1452) */
#define REG_FTDM_OUT29_ADAU1452_ADDR              0xF39D
#define REG_FTDM_OUT29_ADAU1452_BYTE              2
#define REG_FTDM_OUT29_ADAU1452_VALUE             0x0

/* FTDM_OUT30  - Registers (ADAU1452) */
#define REG_FTDM_OUT30_ADAU1452_ADDR              0xF39E
#define REG_FTDM_OUT30_ADAU1452_BYTE              2
#define REG_FTDM_OUT30_ADAU1452_VALUE             0x0

/* FTDM_OUT31  - Registers (ADAU1452) */
#define REG_FTDM_OUT31_ADAU1452_ADDR              0xF39F
#define REG_FTDM_OUT31_ADAU1452_BYTE              2
#define REG_FTDM_OUT31_ADAU1452_VALUE             0x0

/* FTDM_OUT32  - Registers (ADAU1452) */
#define REG_FTDM_OUT32_ADAU1452_ADDR              0xF3A0
#define REG_FTDM_OUT32_ADAU1452_BYTE              2
#define REG_FTDM_OUT32_ADAU1452_VALUE             0x0

/* FTDM_OUT33  - Registers (ADAU1452) */
#define REG_FTDM_OUT33_ADAU1452_ADDR              0xF3A1
#define REG_FTDM_OUT33_ADAU1452_BYTE              2
#define REG_FTDM_OUT33_ADAU1452_VALUE             0x0

/* FTDM_OUT34  - Registers (ADAU1452) */
#define REG_FTDM_OUT34_ADAU1452_ADDR              0xF3A2
#define REG_FTDM_OUT34_ADAU1452_BYTE              2
#define REG_FTDM_OUT34_ADAU1452_VALUE             0x0

/* FTDM_OUT35  - Registers (ADAU1452) */
#define REG_FTDM_OUT35_ADAU1452_ADDR              0xF3A3
#define REG_FTDM_OUT35_ADAU1452_BYTE              2
#define REG_FTDM_OUT35_ADAU1452_VALUE             0x0

/* FTDM_OUT36  - Registers (ADAU1452) */
#define REG_FTDM_OUT36_ADAU1452_ADDR              0xF3A4
#define REG_FTDM_OUT36_ADAU1452_BYTE              2
#define REG_FTDM_OUT36_ADAU1452_VALUE             0x0

/* FTDM_OUT37  - Registers (ADAU1452) */
#define REG_FTDM_OUT37_ADAU1452_ADDR              0xF3A5
#define REG_FTDM_OUT37_ADAU1452_BYTE              2
#define REG_FTDM_OUT37_ADAU1452_VALUE             0x0

/* FTDM_OUT38  - Registers (ADAU1452) */
#define REG_FTDM_OUT38_ADAU1452_ADDR              0xF3A6
#define REG_FTDM_OUT38_ADAU1452_BYTE              2
#define REG_FTDM_OUT38_ADAU1452_VALUE             0x0

/* FTDM_OUT39  - Registers (ADAU1452) */
#define REG_FTDM_OUT39_ADAU1452_ADDR              0xF3A7
#define REG_FTDM_OUT39_ADAU1452_BYTE              2
#define REG_FTDM_OUT39_ADAU1452_VALUE             0x0

/* FTDM_OUT40  - Registers (ADAU1452) */
#define REG_FTDM_OUT40_ADAU1452_ADDR              0xF3A8
#define REG_FTDM_OUT40_ADAU1452_BYTE              2
#define REG_FTDM_OUT40_ADAU1452_VALUE             0x0

/* FTDM_OUT41  - Registers (ADAU1452) */
#define REG_FTDM_OUT41_ADAU1452_ADDR              0xF3A9
#define REG_FTDM_OUT41_ADAU1452_BYTE              2
#define REG_FTDM_OUT41_ADAU1452_VALUE             0x0

/* FTDM_OUT42  - Registers (ADAU1452) */
#define REG_FTDM_OUT42_ADAU1452_ADDR              0xF3AA
#define REG_FTDM_OUT42_ADAU1452_BYTE              2
#define REG_FTDM_OUT42_ADAU1452_VALUE             0x0

/* FTDM_OUT43  - Registers (ADAU1452) */
#define REG_FTDM_OUT43_ADAU1452_ADDR              0xF3AB
#define REG_FTDM_OUT43_ADAU1452_BYTE              2
#define REG_FTDM_OUT43_ADAU1452_VALUE             0x0

/* FTDM_OUT44  - Registers (ADAU1452) */
#define REG_FTDM_OUT44_ADAU1452_ADDR              0xF3AC
#define REG_FTDM_OUT44_ADAU1452_BYTE              2
#define REG_FTDM_OUT44_ADAU1452_VALUE             0x0

/* FTDM_OUT45  - Registers (ADAU1452) */
#define REG_FTDM_OUT45_ADAU1452_ADDR              0xF3AD
#define REG_FTDM_OUT45_ADAU1452_BYTE              2
#define REG_FTDM_OUT45_ADAU1452_VALUE             0x0

/* FTDM_OUT46  - Registers (ADAU1452) */
#define REG_FTDM_OUT46_ADAU1452_ADDR              0xF3AE
#define REG_FTDM_OUT46_ADAU1452_BYTE              2
#define REG_FTDM_OUT46_ADAU1452_VALUE             0x0

/* FTDM_OUT47  - Registers (ADAU1452) */
#define REG_FTDM_OUT47_ADAU1452_ADDR              0xF3AF
#define REG_FTDM_OUT47_ADAU1452_BYTE              2
#define REG_FTDM_OUT47_ADAU1452_VALUE             0x0

/* FTDM_OUT48  - Registers (ADAU1452) */
#define REG_FTDM_OUT48_ADAU1452_ADDR              0xF3B0
#define REG_FTDM_OUT48_ADAU1452_BYTE              2
#define REG_FTDM_OUT48_ADAU1452_VALUE             0x0

/* FTDM_OUT49  - Registers (ADAU1452) */
#define REG_FTDM_OUT49_ADAU1452_ADDR              0xF3B1
#define REG_FTDM_OUT49_ADAU1452_BYTE              2
#define REG_FTDM_OUT49_ADAU1452_VALUE             0x0

/* FTDM_OUT50  - Registers (ADAU1452) */
#define REG_FTDM_OUT50_ADAU1452_ADDR              0xF3B2
#define REG_FTDM_OUT50_ADAU1452_BYTE              2
#define REG_FTDM_OUT50_ADAU1452_VALUE             0x0

/* FTDM_OUT51  - Registers (ADAU1452) */
#define REG_FTDM_OUT51_ADAU1452_ADDR              0xF3B3
#define REG_FTDM_OUT51_ADAU1452_BYTE              2
#define REG_FTDM_OUT51_ADAU1452_VALUE             0x0

/* FTDM_OUT52  - Registers (ADAU1452) */
#define REG_FTDM_OUT52_ADAU1452_ADDR              0xF3B4
#define REG_FTDM_OUT52_ADAU1452_BYTE              2
#define REG_FTDM_OUT52_ADAU1452_VALUE             0x0

/* FTDM_OUT53  - Registers (ADAU1452) */
#define REG_FTDM_OUT53_ADAU1452_ADDR              0xF3B5
#define REG_FTDM_OUT53_ADAU1452_BYTE              2
#define REG_FTDM_OUT53_ADAU1452_VALUE             0x0

/* FTDM_OUT54  - Registers (ADAU1452) */
#define REG_FTDM_OUT54_ADAU1452_ADDR              0xF3B6
#define REG_FTDM_OUT54_ADAU1452_BYTE              2
#define REG_FTDM_OUT54_ADAU1452_VALUE             0x0

/* FTDM_OUT55  - Registers (ADAU1452) */
#define REG_FTDM_OUT55_ADAU1452_ADDR              0xF3B7
#define REG_FTDM_OUT55_ADAU1452_BYTE              2
#define REG_FTDM_OUT55_ADAU1452_VALUE             0x0

/* FTDM_OUT56  - Registers (ADAU1452) */
#define REG_FTDM_OUT56_ADAU1452_ADDR              0xF3B8
#define REG_FTDM_OUT56_ADAU1452_BYTE              2
#define REG_FTDM_OUT56_ADAU1452_VALUE             0x0

/* FTDM_OUT57  - Registers (ADAU1452) */
#define REG_FTDM_OUT57_ADAU1452_ADDR              0xF3B9
#define REG_FTDM_OUT57_ADAU1452_BYTE              2
#define REG_FTDM_OUT57_ADAU1452_VALUE             0x0

/* FTDM_OUT58  - Registers (ADAU1452) */
#define REG_FTDM_OUT58_ADAU1452_ADDR              0xF3BA
#define REG_FTDM_OUT58_ADAU1452_BYTE              2
#define REG_FTDM_OUT58_ADAU1452_VALUE             0x0

/* FTDM_OUT59  - Registers (ADAU1452) */
#define REG_FTDM_OUT59_ADAU1452_ADDR              0xF3BB
#define REG_FTDM_OUT59_ADAU1452_BYTE              2
#define REG_FTDM_OUT59_ADAU1452_VALUE             0x0

/* FTDM_OUT60  - Registers (ADAU1452) */
#define REG_FTDM_OUT60_ADAU1452_ADDR              0xF3BC
#define REG_FTDM_OUT60_ADAU1452_BYTE              2
#define REG_FTDM_OUT60_ADAU1452_VALUE             0x0

/* FTDM_OUT61  - Registers (ADAU1452) */
#define REG_FTDM_OUT61_ADAU1452_ADDR              0xF3BD
#define REG_FTDM_OUT61_ADAU1452_BYTE              2
#define REG_FTDM_OUT61_ADAU1452_VALUE             0x0

/* FTDM_OUT62  - Registers (ADAU1452) */
#define REG_FTDM_OUT62_ADAU1452_ADDR              0xF3BE
#define REG_FTDM_OUT62_ADAU1452_BYTE              2
#define REG_FTDM_OUT62_ADAU1452_VALUE             0x0

/* FTDM_OUT63  - Registers (ADAU1452) */
#define REG_FTDM_OUT63_ADAU1452_ADDR              0xF3BF
#define REG_FTDM_OUT63_ADAU1452_BYTE              2
#define REG_FTDM_OUT63_ADAU1452_VALUE             0x0

/* HIBERNATE  - Registers (ADAU1452) */
#define REG_HIBERNATE_ADAU1452_ADDR               0xF400
#define REG_HIBERNATE_ADAU1452_BYTE               2
#define REG_HIBERNATE_ADAU1452_VALUE              0x0

/* START_PULSE  - Registers (ADAU1452) */
#define REG_START_PULSE_ADAU1452_ADDR             0xF401
#define REG_START_PULSE_ADAU1452_BYTE             2
#define REG_START_PULSE_ADAU1452_VALUE            0x2

/* START_CORE  - Registers (ADAU1452) */
#define REG_START_CORE_ADAU1452_ADDR              0xF402
#define REG_START_CORE_ADAU1452_BYTE              2
#define REG_START_CORE_ADAU1452_VALUE             0x1

/* KILL_CORE  - Registers (ADAU1452) */
#define REG_KILL_CORE_ADAU1452_ADDR               0xF403
#define REG_KILL_CORE_ADAU1452_BYTE               2
#define REG_KILL_CORE_ADAU1452_VALUE              0x0

/* START_ADDRESS  - Registers (ADAU1452) */
#define REG_START_ADDRESS_ADAU1452_ADDR           0xF404
#define REG_START_ADDRESS_ADAU1452_BYTE           2
#define REG_START_ADDRESS_ADAU1452_VALUE          0x0

/* CORE_STATUS  - Registers (ADAU1452) */
#define REG_CORE_STATUS_ADAU1452_ADDR             0xF405
#define REG_CORE_STATUS_ADAU1452_BYTE             0
#define REG_CORE_STATUS_ADAU1452_VALUE            0x0

/* DEBUG_MODE  - Registers (ADAU1452) */
#define REG_DEBUG_MODE_ADAU1452_ADDR              0xF420
#define REG_DEBUG_MODE_ADAU1452_BYTE              2
#define REG_DEBUG_MODE_ADAU1452_VALUE             0x0

/* PANIC_CLEAR  - Registers (ADAU1452) */
#define REG_PANIC_CLEAR_ADAU1452_ADDR             0xF421
#define REG_PANIC_CLEAR_ADAU1452_BYTE             2
#define REG_PANIC_CLEAR_ADAU1452_VALUE            0x0

/* PANIC_PARITY_MASK  - Registers (ADAU1452) */
#define REG_PANIC_PARITY_MASK_ADAU1452_ADDR       0xF422
#define REG_PANIC_PARITY_MASK_ADAU1452_BYTE       2
#define REG_PANIC_PARITY_MASK_ADAU1452_VALUE      0x0

/* PANIC_SOFTWARE_MASK  - Registers (ADAU1452) */
#define REG_PANIC_SOFTWARE_MASK_ADAU1452_ADDR     0xF423
#define REG_PANIC_SOFTWARE_MASK_ADAU1452_BYTE     2
#define REG_PANIC_SOFTWARE_MASK_ADAU1452_VALUE    0x0

/* PANIC_WD_MASK  - Registers (ADAU1452) */
#define REG_PANIC_WD_MASK_ADAU1452_ADDR           0xF424
#define REG_PANIC_WD_MASK_ADAU1452_BYTE           2
#define REG_PANIC_WD_MASK_ADAU1452_VALUE          0x0

/* PANIC_STACK_MASK  - Registers (ADAU1452) */
#define REG_PANIC_STACK_MASK_ADAU1452_ADDR        0xF425
#define REG_PANIC_STACK_MASK_ADAU1452_BYTE        2
#define REG_PANIC_STACK_MASK_ADAU1452_VALUE       0x0

/* PANIC_LOOP_MASK  - Registers (ADAU1452) */
#define REG_PANIC_LOOP_MASK_ADAU1452_ADDR         0xF426
#define REG_PANIC_LOOP_MASK_ADAU1452_BYTE         2
#define REG_PANIC_LOOP_MASK_ADAU1452_VALUE        0x0

/* PANIC_FLAG  - Registers (ADAU1452) */
#define REG_PANIC_FLAG_ADAU1452_ADDR              0xF427
#define REG_PANIC_FLAG_ADAU1452_BYTE              0
#define REG_PANIC_FLAG_ADAU1452_VALUE             0x0

/* PANIC_CODE  - Registers (ADAU1452) */
#define REG_PANIC_CODE_ADAU1452_ADDR              0xF428
#define REG_PANIC_CODE_ADAU1452_BYTE              0
#define REG_PANIC_CODE_ADAU1452_VALUE             0x0

/* DECODE_OP0  - Registers (ADAU1452) */
#define REG_DECODE_OP0_ADAU1452_ADDR              0xF429
#define REG_DECODE_OP0_ADAU1452_BYTE              0
#define REG_DECODE_OP0_ADAU1452_VALUE             0x0

/* DECODE_OP1  - Registers (ADAU1452) */
#define REG_DECODE_OP1_ADAU1452_ADDR              0xF42A
#define REG_DECODE_OP1_ADAU1452_BYTE              0
#define REG_DECODE_OP1_ADAU1452_VALUE             0x0

/* DECODE_OP2  - Registers (ADAU1452) */
#define REG_DECODE_OP2_ADAU1452_ADDR              0xF42B
#define REG_DECODE_OP2_ADAU1452_BYTE              0
#define REG_DECODE_OP2_ADAU1452_VALUE             0x0

/* DECODE_OP3  - Registers (ADAU1452) */
#define REG_DECODE_OP3_ADAU1452_ADDR              0xF42C
#define REG_DECODE_OP3_ADAU1452_BYTE              0
#define REG_DECODE_OP3_ADAU1452_VALUE             0x0

/* EXECUTE_OP0  - Registers (ADAU1452) */
#define REG_EXECUTE_OP0_ADAU1452_ADDR             0xF42D
#define REG_EXECUTE_OP0_ADAU1452_BYTE             0
#define REG_EXECUTE_OP0_ADAU1452_VALUE            0x0

/* EXECUTE_OP1  - Registers (ADAU1452) */
#define REG_EXECUTE_OP1_ADAU1452_ADDR             0xF42E
#define REG_EXECUTE_OP1_ADAU1452_BYTE             0
#define REG_EXECUTE_OP1_ADAU1452_VALUE            0x0

/* EXECUTE_OP2  - Registers (ADAU1452) */
#define REG_EXECUTE_OP2_ADAU1452_ADDR             0xF42F
#define REG_EXECUTE_OP2_ADAU1452_BYTE             0
#define REG_EXECUTE_OP2_ADAU1452_VALUE            0x0

/* EXECUTE_OP3  - Registers (ADAU1452) */
#define REG_EXECUTE_OP3_ADAU1452_ADDR             0xF430
#define REG_EXECUTE_OP3_ADAU1452_BYTE             0
#define REG_EXECUTE_OP3_ADAU1452_VALUE            0x0

/* DECODE_COUNT  - Registers (ADAU1452) */
#define REG_DECODE_COUNT_ADAU1452_ADDR            0xF431
#define REG_DECODE_COUNT_ADAU1452_BYTE            0
#define REG_DECODE_COUNT_ADAU1452_VALUE           0x0

/* EXECUTE_COUNT  - Registers (ADAU1452) */
#define REG_EXECUTE_COUNT_ADAU1452_ADDR           0xF432
#define REG_EXECUTE_COUNT_ADAU1452_BYTE           0
#define REG_EXECUTE_COUNT_ADAU1452_VALUE          0x0

/* SOFTWARE_VALUE_0  - Registers (ADAU1452) */
#define REG_SOFTWARE_VALUE_0_ADAU1452_ADDR        0xF433
#define REG_SOFTWARE_VALUE_0_ADAU1452_BYTE        0
#define REG_SOFTWARE_VALUE_0_ADAU1452_VALUE       0x0

/* SOFTWARE_VALUE_1  - Registers (ADAU1452) */
#define REG_SOFTWARE_VALUE_1_ADAU1452_ADDR        0xF434
#define REG_SOFTWARE_VALUE_1_ADAU1452_BYTE        0
#define REG_SOFTWARE_VALUE_1_ADAU1452_VALUE       0x0

/* WATCHDOG_MAXCOUNT  - Registers (ADAU1452) */
#define REG_WATCHDOG_MAXCOUNT_ADAU1452_ADDR       0xF443
#define REG_WATCHDOG_MAXCOUNT_ADAU1452_BYTE       2
#define REG_WATCHDOG_MAXCOUNT_ADAU1452_VALUE      0x0

/* WATCHDOG_PRESCALE  - Registers (ADAU1452) */
#define REG_WATCHDOG_PRESCALE_ADAU1452_ADDR       0xF444
#define REG_WATCHDOG_PRESCALE_ADAU1452_BYTE       2
#define REG_WATCHDOG_PRESCALE_ADAU1452_VALUE      0x0

/* BLOCKINT_EN  - Registers (ADAU1452) */
#define REG_BLOCKINT_EN_ADAU1452_ADDR             0xF450
#define REG_BLOCKINT_EN_ADAU1452_BYTE             2
#define REG_BLOCKINT_EN_ADAU1452_VALUE            0x0

/* BLOCKINT_VALUE  - Registers (ADAU1452) */
#define REG_BLOCKINT_VALUE_ADAU1452_ADDR          0xF451
#define REG_BLOCKINT_VALUE_ADAU1452_BYTE          2
#define REG_BLOCKINT_VALUE_ADAU1452_VALUE         0x0

/* PROG_CNTR0  - Registers (ADAU1452) */
#define REG_PROG_CNTR0_ADAU1452_ADDR              0xF460
#define REG_PROG_CNTR0_ADAU1452_BYTE              0
#define REG_PROG_CNTR0_ADAU1452_VALUE             0x0

/* PROG_CNTR1  - Registers (ADAU1452) */
#define REG_PROG_CNTR1_ADAU1452_ADDR              0xF461
#define REG_PROG_CNTR1_ADAU1452_BYTE              0
#define REG_PROG_CNTR1_ADAU1452_VALUE             0x0

/* PROG_CNTR_CLEAR  - Registers (ADAU1452) */
#define REG_PROG_CNTR_CLEAR_ADAU1452_ADDR         0xF462
#define REG_PROG_CNTR_CLEAR_ADAU1452_BYTE         2
#define REG_PROG_CNTR_CLEAR_ADAU1452_VALUE        0x0

/* PROG_CNTR_LENGTH0  - Registers (ADAU1452) */
#define REG_PROG_CNTR_LENGTH0_ADAU1452_ADDR       0xF463
#define REG_PROG_CNTR_LENGTH0_ADAU1452_BYTE       0
#define REG_PROG_CNTR_LENGTH0_ADAU1452_VALUE      0x0

/* PROG_CNTR_LENGTH1  - Registers (ADAU1452) */
#define REG_PROG_CNTR_LENGTH1_ADAU1452_ADDR       0xF464
#define REG_PROG_CNTR_LENGTH1_ADAU1452_BYTE       0
#define REG_PROG_CNTR_LENGTH1_ADAU1452_VALUE      0x0

/* PROG_CNTR_MAXLENGTH0  - Registers (ADAU1452) */
#define REG_PROG_CNTR_MAXLENGTH0_ADAU1452_ADDR    0xF465
#define REG_PROG_CNTR_MAXLENGTH0_ADAU1452_BYTE    0
#define REG_PROG_CNTR_MAXLENGTH0_ADAU1452_VALUE   0x0

/* PROG_CNTR_MAXLENGTH1  - Registers (ADAU1452) */
#define REG_PROG_CNTR_MAXLENGTH1_ADAU1452_ADDR    0xF466
#define REG_PROG_CNTR_MAXLENGTH1_ADAU1452_BYTE    0
#define REG_PROG_CNTR_MAXLENGTH1_ADAU1452_VALUE   0x0

/* MP0_MODE  - Registers (ADAU1452) */
#define REG_MP0_MODE_ADAU1452_ADDR                0xF510
#define REG_MP0_MODE_ADAU1452_BYTE                2
#define REG_MP0_MODE_ADAU1452_VALUE               0x0

/* MP1_MODE  - Registers (ADAU1452) */
#define REG_MP1_MODE_ADAU1452_ADDR                0xF511
#define REG_MP1_MODE_ADAU1452_BYTE                2
#define REG_MP1_MODE_ADAU1452_VALUE               0x0

/* MP2_MODE  - Registers (ADAU1452) */
#define REG_MP2_MODE_ADAU1452_ADDR                0xF512
#define REG_MP2_MODE_ADAU1452_BYTE                2
#define REG_MP2_MODE_ADAU1452_VALUE               0x0

/* MP3_MODE  - Registers (ADAU1452) */
#define REG_MP3_MODE_ADAU1452_ADDR                0xF513
#define REG_MP3_MODE_ADAU1452_BYTE                2
#define REG_MP3_MODE_ADAU1452_VALUE               0x0

/* MP4_MODE  - Registers (ADAU1452) */
#define REG_MP4_MODE_ADAU1452_ADDR                0xF514
#define REG_MP4_MODE_ADAU1452_BYTE                2
#define REG_MP4_MODE_ADAU1452_VALUE               0x0

/* MP5_MODE  - Registers (ADAU1452) */
#define REG_MP5_MODE_ADAU1452_ADDR                0xF515
#define REG_MP5_MODE_ADAU1452_BYTE                2
#define REG_MP5_MODE_ADAU1452_VALUE               0x0

/* MP6_MODE  - Registers (ADAU1452) */
#define REG_MP6_MODE_ADAU1452_ADDR                0xF516
#define REG_MP6_MODE_ADAU1452_BYTE                2
#define REG_MP6_MODE_ADAU1452_VALUE               0x607

/* MP7_MODE  - Registers (ADAU1452) */
#define REG_MP7_MODE_ADAU1452_ADDR                0xF517
#define REG_MP7_MODE_ADAU1452_BYTE                2
#define REG_MP7_MODE_ADAU1452_VALUE               0x0

/* MP8_MODE  - Registers (ADAU1452) */
#define REG_MP8_MODE_ADAU1452_ADDR                0xF518
#define REG_MP8_MODE_ADAU1452_BYTE                2
#define REG_MP8_MODE_ADAU1452_VALUE               0x0

/* MP9_MODE  - Registers (ADAU1452) */
#define REG_MP9_MODE_ADAU1452_ADDR                0xF519
#define REG_MP9_MODE_ADAU1452_BYTE                2
#define REG_MP9_MODE_ADAU1452_VALUE               0x0

/* MP10_MODE  - Registers (ADAU1452) */
#define REG_MP10_MODE_ADAU1452_ADDR               0xF51A
#define REG_MP10_MODE_ADAU1452_BYTE               2
#define REG_MP10_MODE_ADAU1452_VALUE              0x0

/* MP11_MODE  - Registers (ADAU1452) */
#define REG_MP11_MODE_ADAU1452_ADDR               0xF51B
#define REG_MP11_MODE_ADAU1452_BYTE               2
#define REG_MP11_MODE_ADAU1452_VALUE              0x0

/* MP12_MODE  - Registers (ADAU1452) */
#define REG_MP12_MODE_ADAU1452_ADDR               0xF51C
#define REG_MP12_MODE_ADAU1452_BYTE               2
#define REG_MP12_MODE_ADAU1452_VALUE              0x0

/* MP13_MODE  - Registers (ADAU1452) */
#define REG_MP13_MODE_ADAU1452_ADDR               0xF51D
#define REG_MP13_MODE_ADAU1452_BYTE               2
#define REG_MP13_MODE_ADAU1452_VALUE              0x0

/* MP0_WRITE  - Registers (ADAU1452) */
#define REG_MP0_WRITE_ADAU1452_ADDR               0xF520
#define REG_MP0_WRITE_ADAU1452_BYTE               2
#define REG_MP0_WRITE_ADAU1452_VALUE              0x0

/* MP1_WRITE  - Registers (ADAU1452) */
#define REG_MP1_WRITE_ADAU1452_ADDR               0xF521
#define REG_MP1_WRITE_ADAU1452_BYTE               2
#define REG_MP1_WRITE_ADAU1452_VALUE              0x0

/* MP2_WRITE  - Registers (ADAU1452) */
#define REG_MP2_WRITE_ADAU1452_ADDR               0xF522
#define REG_MP2_WRITE_ADAU1452_BYTE               2
#define REG_MP2_WRITE_ADAU1452_VALUE              0x0

/* MP3_WRITE  - Registers (ADAU1452) */
#define REG_MP3_WRITE_ADAU1452_ADDR               0xF523
#define REG_MP3_WRITE_ADAU1452_BYTE               2
#define REG_MP3_WRITE_ADAU1452_VALUE              0x0

/* MP4_WRITE  - Registers (ADAU1452) */
#define REG_MP4_WRITE_ADAU1452_ADDR               0xF524
#define REG_MP4_WRITE_ADAU1452_BYTE               2
#define REG_MP4_WRITE_ADAU1452_VALUE              0x0

/* MP5_WRITE  - Registers (ADAU1452) */
#define REG_MP5_WRITE_ADAU1452_ADDR               0xF525
#define REG_MP5_WRITE_ADAU1452_BYTE               2
#define REG_MP5_WRITE_ADAU1452_VALUE              0x0

/* MP6_WRITE  - Registers (ADAU1452) */
#define REG_MP6_WRITE_ADAU1452_ADDR               0xF526
#define REG_MP6_WRITE_ADAU1452_BYTE               2
#define REG_MP6_WRITE_ADAU1452_VALUE              0x0

/* MP7_WRITE  - Registers (ADAU1452) */
#define REG_MP7_WRITE_ADAU1452_ADDR               0xF527
#define REG_MP7_WRITE_ADAU1452_BYTE               2
#define REG_MP7_WRITE_ADAU1452_VALUE              0x0

/* MP8_WRITE  - Registers (ADAU1452) */
#define REG_MP8_WRITE_ADAU1452_ADDR               0xF528
#define REG_MP8_WRITE_ADAU1452_BYTE               2
#define REG_MP8_WRITE_ADAU1452_VALUE              0x0

/* MP9_WRITE  - Registers (ADAU1452) */
#define REG_MP9_WRITE_ADAU1452_ADDR               0xF529
#define REG_MP9_WRITE_ADAU1452_BYTE               2
#define REG_MP9_WRITE_ADAU1452_VALUE              0x0

/* MP10_WRITE  - Registers (ADAU1452) */
#define REG_MP10_WRITE_ADAU1452_ADDR              0xF52A
#define REG_MP10_WRITE_ADAU1452_BYTE              2
#define REG_MP10_WRITE_ADAU1452_VALUE             0x0

/* MP11_WRITE  - Registers (ADAU1452) */
#define REG_MP11_WRITE_ADAU1452_ADDR              0xF52B
#define REG_MP11_WRITE_ADAU1452_BYTE              2
#define REG_MP11_WRITE_ADAU1452_VALUE             0x0

/* MP12_WRITE  - Registers (ADAU1452) */
#define REG_MP12_WRITE_ADAU1452_ADDR              0xF52C
#define REG_MP12_WRITE_ADAU1452_BYTE              2
#define REG_MP12_WRITE_ADAU1452_VALUE             0x0

/* MP13_WRITE  - Registers (ADAU1452) */
#define REG_MP13_WRITE_ADAU1452_ADDR              0xF52D
#define REG_MP13_WRITE_ADAU1452_BYTE              2
#define REG_MP13_WRITE_ADAU1452_VALUE             0x0

/* MP0_READ  - Registers (ADAU1452) */
#define REG_MP0_READ_ADAU1452_ADDR                0xF530
#define REG_MP0_READ_ADAU1452_BYTE                0
#define REG_MP0_READ_ADAU1452_VALUE               0x0

/* MP1_READ  - Registers (ADAU1452) */
#define REG_MP1_READ_ADAU1452_ADDR                0xF531
#define REG_MP1_READ_ADAU1452_BYTE                0
#define REG_MP1_READ_ADAU1452_VALUE               0x0

/* MP2_READ  - Registers (ADAU1452) */
#define REG_MP2_READ_ADAU1452_ADDR                0xF532
#define REG_MP2_READ_ADAU1452_BYTE                0
#define REG_MP2_READ_ADAU1452_VALUE               0x0

/* MP3_READ  - Registers (ADAU1452) */
#define REG_MP3_READ_ADAU1452_ADDR                0xF533
#define REG_MP3_READ_ADAU1452_BYTE                0
#define REG_MP3_READ_ADAU1452_VALUE               0x0

/* MP4_READ  - Registers (ADAU1452) */
#define REG_MP4_READ_ADAU1452_ADDR                0xF534
#define REG_MP4_READ_ADAU1452_BYTE                0
#define REG_MP4_READ_ADAU1452_VALUE               0x0

/* MP5_READ  - Registers (ADAU1452) */
#define REG_MP5_READ_ADAU1452_ADDR                0xF535
#define REG_MP5_READ_ADAU1452_BYTE                0
#define REG_MP5_READ_ADAU1452_VALUE               0x0

/* MP6_READ  - Registers (ADAU1452) */
#define REG_MP6_READ_ADAU1452_ADDR                0xF536
#define REG_MP6_READ_ADAU1452_BYTE                0
#define REG_MP6_READ_ADAU1452_VALUE               0x0

/* MP7_READ  - Registers (ADAU1452) */
#define REG_MP7_READ_ADAU1452_ADDR                0xF537
#define REG_MP7_READ_ADAU1452_BYTE                0
#define REG_MP7_READ_ADAU1452_VALUE               0x0

/* MP8_READ  - Registers (ADAU1452) */
#define REG_MP8_READ_ADAU1452_ADDR                0xF538
#define REG_MP8_READ_ADAU1452_BYTE                0
#define REG_MP8_READ_ADAU1452_VALUE               0x0

/* MP9_READ  - Registers (ADAU1452) */
#define REG_MP9_READ_ADAU1452_ADDR                0xF539
#define REG_MP9_READ_ADAU1452_BYTE                0
#define REG_MP9_READ_ADAU1452_VALUE               0x0

/* MP10_READ  - Registers (ADAU1452) */
#define REG_MP10_READ_ADAU1452_ADDR               0xF53A
#define REG_MP10_READ_ADAU1452_BYTE               0
#define REG_MP10_READ_ADAU1452_VALUE              0x0

/* MP11_READ  - Registers (ADAU1452) */
#define REG_MP11_READ_ADAU1452_ADDR               0xF53B
#define REG_MP11_READ_ADAU1452_BYTE               0
#define REG_MP11_READ_ADAU1452_VALUE              0x0

/* MP12_READ  - Registers (ADAU1452) */
#define REG_MP12_READ_ADAU1452_ADDR               0xF53C
#define REG_MP12_READ_ADAU1452_BYTE               0
#define REG_MP12_READ_ADAU1452_VALUE              0x0

/* MP13_READ  - Registers (ADAU1452) */
#define REG_MP13_READ_ADAU1452_ADDR               0xF53D
#define REG_MP13_READ_ADAU1452_BYTE               0
#define REG_MP13_READ_ADAU1452_VALUE              0x0

/* DMIC_CTRL0  - Registers (ADAU1452) */
#define REG_DMIC_CTRL0_ADAU1452_ADDR              0xF560
#define REG_DMIC_CTRL0_ADAU1452_BYTE              2
#define REG_DMIC_CTRL0_ADAU1452_VALUE             0x0

/* DMIC_CTRL1  - Registers (ADAU1452) */
#define REG_DMIC_CTRL1_ADAU1452_ADDR              0xF561
#define REG_DMIC_CTRL1_ADAU1452_BYTE              2
#define REG_DMIC_CTRL1_ADAU1452_VALUE             0x0

/* ASRC_LOCK  - Registers (ADAU1452) */
#define REG_ASRC_LOCK_ADAU1452_ADDR               0xF580
#define REG_ASRC_LOCK_ADAU1452_BYTE               0
#define REG_ASRC_LOCK_ADAU1452_VALUE              0x0

/* ASRC_MUTE  - Registers (ADAU1452) */
#define REG_ASRC_MUTE_ADAU1452_ADDR               0xF581
#define REG_ASRC_MUTE_ADAU1452_BYTE               2
#define REG_ASRC_MUTE_ADAU1452_VALUE              0x0

/* ASRC0_RATIO  - Registers (ADAU1452) */
#define REG_ASRC0_RATIO_ADAU1452_ADDR             0xF582
#define REG_ASRC0_RATIO_ADAU1452_BYTE             0
#define REG_ASRC0_RATIO_ADAU1452_VALUE            0x0

/* ASRC1_RATIO  - Registers (ADAU1452) */
#define REG_ASRC1_RATIO_ADAU1452_ADDR             0xF583
#define REG_ASRC1_RATIO_ADAU1452_BYTE             0
#define REG_ASRC1_RATIO_ADAU1452_VALUE            0x0

/* ASRC2_RATIO  - Registers (ADAU1452) */
#define REG_ASRC2_RATIO_ADAU1452_ADDR             0xF584
#define REG_ASRC2_RATIO_ADAU1452_BYTE             0
#define REG_ASRC2_RATIO_ADAU1452_VALUE            0x0

/* ASRC3_RATIO  - Registers (ADAU1452) */
#define REG_ASRC3_RATIO_ADAU1452_ADDR             0xF585
#define REG_ASRC3_RATIO_ADAU1452_BYTE             0
#define REG_ASRC3_RATIO_ADAU1452_VALUE            0x0

/* ASRC4_RATIO  - Registers (ADAU1452) */
#define REG_ASRC4_RATIO_ADAU1452_ADDR             0xF586
#define REG_ASRC4_RATIO_ADAU1452_BYTE             0
#define REG_ASRC4_RATIO_ADAU1452_VALUE            0x0

/* ASRC5_RATIO  - Registers (ADAU1452) */
#define REG_ASRC5_RATIO_ADAU1452_ADDR             0xF587
#define REG_ASRC5_RATIO_ADAU1452_BYTE             0
#define REG_ASRC5_RATIO_ADAU1452_VALUE            0x0

/* ASRC6_RATIO  - Registers (ADAU1452) */
#define REG_ASRC6_RATIO_ADAU1452_ADDR             0xF588
#define REG_ASRC6_RATIO_ADAU1452_BYTE             0
#define REG_ASRC6_RATIO_ADAU1452_VALUE            0x0

/* ASRC7_RATIO  - Registers (ADAU1452) */
#define REG_ASRC7_RATIO_ADAU1452_ADDR             0xF589
#define REG_ASRC7_RATIO_ADAU1452_BYTE             0
#define REG_ASRC7_RATIO_ADAU1452_VALUE            0x0

/* ADC_READ0  - Registers (ADAU1452) */
#define REG_ADC_READ0_ADAU1452_ADDR               0xF5A0
#define REG_ADC_READ0_ADAU1452_BYTE               0
#define REG_ADC_READ0_ADAU1452_VALUE              0x0

/* ADC_READ1  - Registers (ADAU1452) */
#define REG_ADC_READ1_ADAU1452_ADDR               0xF5A1
#define REG_ADC_READ1_ADAU1452_BYTE               0
#define REG_ADC_READ1_ADAU1452_VALUE              0x0

/* ADC_READ2  - Registers (ADAU1452) */
#define REG_ADC_READ2_ADAU1452_ADDR               0xF5A2
#define REG_ADC_READ2_ADAU1452_BYTE               0
#define REG_ADC_READ2_ADAU1452_VALUE              0x0

/* ADC_READ3  - Registers (ADAU1452) */
#define REG_ADC_READ3_ADAU1452_ADDR               0xF5A3
#define REG_ADC_READ3_ADAU1452_BYTE               0
#define REG_ADC_READ3_ADAU1452_VALUE              0x0

/* ADC_READ4  - Registers (ADAU1452) */
#define REG_ADC_READ4_ADAU1452_ADDR               0xF5A4
#define REG_ADC_READ4_ADAU1452_BYTE               0
#define REG_ADC_READ4_ADAU1452_VALUE              0x0

/* ADC_READ5  - Registers (ADAU1452) */
#define REG_ADC_READ5_ADAU1452_ADDR               0xF5A5
#define REG_ADC_READ5_ADAU1452_BYTE               0
#define REG_ADC_READ5_ADAU1452_VALUE              0x0

/* SPDIF_LOCK_DET  - Registers (ADAU1452) */
#define REG_SPDIF_LOCK_DET_ADAU1452_ADDR          0xF600
#define REG_SPDIF_LOCK_DET_ADAU1452_BYTE          0
#define REG_SPDIF_LOCK_DET_ADAU1452_VALUE         0x0

/* SPDIF_RX_CTRL  - Registers (ADAU1452) */
#define REG_SPDIF_RX_CTRL_ADAU1452_ADDR           0xF601
#define REG_SPDIF_RX_CTRL_ADAU1452_BYTE           2
#define REG_SPDIF_RX_CTRL_ADAU1452_VALUE          0x0

/* SPDIF_RX_DECODE  - Registers (ADAU1452) */
#define REG_SPDIF_RX_DECODE_ADAU1452_ADDR         0xF602
#define REG_SPDIF_RX_DECODE_ADAU1452_BYTE         0
#define REG_SPDIF_RX_DECODE_ADAU1452_VALUE        0x88

/* SPDIF_RX_COMPRMODE  - Registers (ADAU1452) */
#define REG_SPDIF_RX_COMPRMODE_ADAU1452_ADDR      0xF603
#define REG_SPDIF_RX_COMPRMODE_ADAU1452_BYTE      0
#define REG_SPDIF_RX_COMPRMODE_ADAU1452_VALUE     0x0

/* SPDIF_RESTART  - Registers (ADAU1452) */
#define REG_SPDIF_RESTART_ADAU1452_ADDR           0xF604
#define REG_SPDIF_RESTART_ADAU1452_BYTE           2
#define REG_SPDIF_RESTART_ADAU1452_VALUE          0x0

/* SPDIF_LOSS_OF_LOCK  - Registers (ADAU1452) */
#define REG_SPDIF_LOSS_OF_LOCK_ADAU1452_ADDR      0xF605
#define REG_SPDIF_LOSS_OF_LOCK_ADAU1452_BYTE      0
#define REG_SPDIF_LOSS_OF_LOCK_ADAU1452_VALUE     0x0

/* SPDIF_AUX_EN  - Registers (ADAU1452) */
#define REG_SPDIF_AUX_EN_ADAU1452_ADDR            0xF608
#define REG_SPDIF_AUX_EN_ADAU1452_BYTE            2
#define REG_SPDIF_AUX_EN_ADAU1452_VALUE           0x0

/* SPDIF_RX_AUXBIT_READY  - Registers (ADAU1452) */
#define REG_SPDIF_RX_AUXBIT_READY_ADAU1452_ADDR   0xF60F
#define REG_SPDIF_RX_AUXBIT_READY_ADAU1452_BYTE   0
#define REG_SPDIF_RX_AUXBIT_READY_ADAU1452_VALUE  0x0

/* SPDIF_RX_CS_LEFT_0  - Registers (ADAU1452) */
#define REG_SPDIF_RX_CS_LEFT_0_ADAU1452_ADDR      0xF610
#define REG_SPDIF_RX_CS_LEFT_0_ADAU1452_BYTE      0
#define REG_SPDIF_RX_CS_LEFT_0_ADAU1452_VALUE     0x0

/* SPDIF_RX_CS_LEFT_1  - Registers (ADAU1452) */
#define REG_SPDIF_RX_CS_LEFT_1_ADAU1452_ADDR      0xF611
#define REG_SPDIF_RX_CS_LEFT_1_ADAU1452_BYTE      0
#define REG_SPDIF_RX_CS_LEFT_1_ADAU1452_VALUE     0x0

/* SPDIF_RX_CS_LEFT_2  - Registers (ADAU1452) */
#define REG_SPDIF_RX_CS_LEFT_2_ADAU1452_ADDR      0xF612
#define REG_SPDIF_RX_CS_LEFT_2_ADAU1452_BYTE      0
#define REG_SPDIF_RX_CS_LEFT_2_ADAU1452_VALUE     0x0

/* SPDIF_RX_CS_LEFT_3  - Registers (ADAU1452) */
#define REG_SPDIF_RX_CS_LEFT_3_ADAU1452_ADDR      0xF613
#define REG_SPDIF_RX_CS_LEFT_3_ADAU1452_BYTE      0
#define REG_SPDIF_RX_CS_LEFT_3_ADAU1452_VALUE     0x0

/* SPDIF_RX_CS_LEFT_4  - Registers (ADAU1452) */
#define REG_SPDIF_RX_CS_LEFT_4_ADAU1452_ADDR      0xF614
#define REG_SPDIF_RX_CS_LEFT_4_ADAU1452_BYTE      0
#define REG_SPDIF_RX_CS_LEFT_4_ADAU1452_VALUE     0x0

/* SPDIF_RX_CS_LEFT_5  - Registers (ADAU1452) */
#define REG_SPDIF_RX_CS_LEFT_5_ADAU1452_ADDR      0xF615
#define REG_SPDIF_RX_CS_LEFT_5_ADAU1452_BYTE      0
#define REG_SPDIF_RX_CS_LEFT_5_ADAU1452_VALUE     0x0

/* SPDIF_RX_CS_LEFT_6  - Registers (ADAU1452) */
#define REG_SPDIF_RX_CS_LEFT_6_ADAU1452_ADDR      0xF616
#define REG_SPDIF_RX_CS_LEFT_6_ADAU1452_BYTE      0
#define REG_SPDIF_RX_CS_LEFT_6_ADAU1452_VALUE     0x0

/* SPDIF_RX_CS_LEFT_7  - Registers (ADAU1452) */
#define REG_SPDIF_RX_CS_LEFT_7_ADAU1452_ADDR      0xF617
#define REG_SPDIF_RX_CS_LEFT_7_ADAU1452_BYTE      0
#define REG_SPDIF_RX_CS_LEFT_7_ADAU1452_VALUE     0x0

/* SPDIF_RX_CS_LEFT_8  - Registers (ADAU1452) */
#define REG_SPDIF_RX_CS_LEFT_8_ADAU1452_ADDR      0xF618
#define REG_SPDIF_RX_CS_LEFT_8_ADAU1452_BYTE      0
#define REG_SPDIF_RX_CS_LEFT_8_ADAU1452_VALUE     0x0

/* SPDIF_RX_CS_LEFT_9  - Registers (ADAU1452) */
#define REG_SPDIF_RX_CS_LEFT_9_ADAU1452_ADDR      0xF619
#define REG_SPDIF_RX_CS_LEFT_9_ADAU1452_BYTE      0
#define REG_SPDIF_RX_CS_LEFT_9_ADAU1452_VALUE     0x0

/* SPDIF_RX_CS_LEFT_10  - Registers (ADAU1452) */
#define REG_SPDIF_RX_CS_LEFT_10_ADAU1452_ADDR     0xF61A
#define REG_SPDIF_RX_CS_LEFT_10_ADAU1452_BYTE     0
#define REG_SPDIF_RX_CS_LEFT_10_ADAU1452_VALUE    0x0

/* SPDIF_RX_CS_LEFT_11  - Registers (ADAU1452) */
#define REG_SPDIF_RX_CS_LEFT_11_ADAU1452_ADDR     0xF61B
#define REG_SPDIF_RX_CS_LEFT_11_ADAU1452_BYTE     0
#define REG_SPDIF_RX_CS_LEFT_11_ADAU1452_VALUE    0x0

/* SPDIF_RX_CS_RIGHT_0  - Registers (ADAU1452) */
#define REG_SPDIF_RX_CS_RIGHT_0_ADAU1452_ADDR     0xF620
#define REG_SPDIF_RX_CS_RIGHT_0_ADAU1452_BYTE     0
#define REG_SPDIF_RX_CS_RIGHT_0_ADAU1452_VALUE    0x0

/* SPDIF_RX_CS_RIGHT_1  - Registers (ADAU1452) */
#define REG_SPDIF_RX_CS_RIGHT_1_ADAU1452_ADDR     0xF621
#define REG_SPDIF_RX_CS_RIGHT_1_ADAU1452_BYTE     0
#define REG_SPDIF_RX_CS_RIGHT_1_ADAU1452_VALUE    0x0

/* SPDIF_RX_CS_RIGHT_2  - Registers (ADAU1452) */
#define REG_SPDIF_RX_CS_RIGHT_2_ADAU1452_ADDR     0xF622
#define REG_SPDIF_RX_CS_RIGHT_2_ADAU1452_BYTE     0
#define REG_SPDIF_RX_CS_RIGHT_2_ADAU1452_VALUE    0x0

/* SPDIF_RX_CS_RIGHT_3  - Registers (ADAU1452) */
#define REG_SPDIF_RX_CS_RIGHT_3_ADAU1452_ADDR     0xF623
#define REG_SPDIF_RX_CS_RIGHT_3_ADAU1452_BYTE     0
#define REG_SPDIF_RX_CS_RIGHT_3_ADAU1452_VALUE    0x0

/* SPDIF_RX_CS_RIGHT_4  - Registers (ADAU1452) */
#define REG_SPDIF_RX_CS_RIGHT_4_ADAU1452_ADDR     0xF624
#define REG_SPDIF_RX_CS_RIGHT_4_ADAU1452_BYTE     0
#define REG_SPDIF_RX_CS_RIGHT_4_ADAU1452_VALUE    0x0

/* SPDIF_RX_CS_RIGHT_5  - Registers (ADAU1452) */
#define REG_SPDIF_RX_CS_RIGHT_5_ADAU1452_ADDR     0xF625
#define REG_SPDIF_RX_CS_RIGHT_5_ADAU1452_BYTE     0
#define REG_SPDIF_RX_CS_RIGHT_5_ADAU1452_VALUE    0x0

/* SPDIF_RX_CS_RIGHT_6  - Registers (ADAU1452) */
#define REG_SPDIF_RX_CS_RIGHT_6_ADAU1452_ADDR     0xF626
#define REG_SPDIF_RX_CS_RIGHT_6_ADAU1452_BYTE     0
#define REG_SPDIF_RX_CS_RIGHT_6_ADAU1452_VALUE    0x0

/* SPDIF_RX_CS_RIGHT_7  - Registers (ADAU1452) */
#define REG_SPDIF_RX_CS_RIGHT_7_ADAU1452_ADDR     0xF627
#define REG_SPDIF_RX_CS_RIGHT_7_ADAU1452_BYTE     0
#define REG_SPDIF_RX_CS_RIGHT_7_ADAU1452_VALUE    0x0

/* SPDIF_RX_CS_RIGHT_8  - Registers (ADAU1452) */
#define REG_SPDIF_RX_CS_RIGHT_8_ADAU1452_ADDR     0xF628
#define REG_SPDIF_RX_CS_RIGHT_8_ADAU1452_BYTE     0
#define REG_SPDIF_RX_CS_RIGHT_8_ADAU1452_VALUE    0x0

/* SPDIF_RX_CS_RIGHT_9  - Registers (ADAU1452) */
#define REG_SPDIF_RX_CS_RIGHT_9_ADAU1452_ADDR     0xF629
#define REG_SPDIF_RX_CS_RIGHT_9_ADAU1452_BYTE     0
#define REG_SPDIF_RX_CS_RIGHT_9_ADAU1452_VALUE    0x0

/* SPDIF_RX_CS_RIGHT_10  - Registers (ADAU1452) */
#define REG_SPDIF_RX_CS_RIGHT_10_ADAU1452_ADDR    0xF62A
#define REG_SPDIF_RX_CS_RIGHT_10_ADAU1452_BYTE    0
#define REG_SPDIF_RX_CS_RIGHT_10_ADAU1452_VALUE   0x0

/* SPDIF_RX_CS_RIGHT_11  - Registers (ADAU1452) */
#define REG_SPDIF_RX_CS_RIGHT_11_ADAU1452_ADDR    0xF62B
#define REG_SPDIF_RX_CS_RIGHT_11_ADAU1452_BYTE    0
#define REG_SPDIF_RX_CS_RIGHT_11_ADAU1452_VALUE   0x0

/* SPDIF_RX_UD_LEFT_0  - Registers (ADAU1452) */
#define REG_SPDIF_RX_UD_LEFT_0_ADAU1452_ADDR      0xF630
#define REG_SPDIF_RX_UD_LEFT_0_ADAU1452_BYTE      0
#define REG_SPDIF_RX_UD_LEFT_0_ADAU1452_VALUE     0x0

/* SPDIF_RX_UD_LEFT_1  - Registers (ADAU1452) */
#define REG_SPDIF_RX_UD_LEFT_1_ADAU1452_ADDR      0xF631
#define REG_SPDIF_RX_UD_LEFT_1_ADAU1452_BYTE      0
#define REG_SPDIF_RX_UD_LEFT_1_ADAU1452_VALUE     0x0

/* SPDIF_RX_UD_LEFT_2  - Registers (ADAU1452) */
#define REG_SPDIF_RX_UD_LEFT_2_ADAU1452_ADDR      0xF632
#define REG_SPDIF_RX_UD_LEFT_2_ADAU1452_BYTE      0
#define REG_SPDIF_RX_UD_LEFT_2_ADAU1452_VALUE     0x0

/* SPDIF_RX_UD_LEFT_3  - Registers (ADAU1452) */
#define REG_SPDIF_RX_UD_LEFT_3_ADAU1452_ADDR      0xF633
#define REG_SPDIF_RX_UD_LEFT_3_ADAU1452_BYTE      0
#define REG_SPDIF_RX_UD_LEFT_3_ADAU1452_VALUE     0x0

/* SPDIF_RX_UD_LEFT_4  - Registers (ADAU1452) */
#define REG_SPDIF_RX_UD_LEFT_4_ADAU1452_ADDR      0xF634
#define REG_SPDIF_RX_UD_LEFT_4_ADAU1452_BYTE      0
#define REG_SPDIF_RX_UD_LEFT_4_ADAU1452_VALUE     0x0

/* SPDIF_RX_UD_LEFT_5  - Registers (ADAU1452) */
#define REG_SPDIF_RX_UD_LEFT_5_ADAU1452_ADDR      0xF635
#define REG_SPDIF_RX_UD_LEFT_5_ADAU1452_BYTE      0
#define REG_SPDIF_RX_UD_LEFT_5_ADAU1452_VALUE     0x0

/* SPDIF_RX_UD_LEFT_6  - Registers (ADAU1452) */
#define REG_SPDIF_RX_UD_LEFT_6_ADAU1452_ADDR      0xF636
#define REG_SPDIF_RX_UD_LEFT_6_ADAU1452_BYTE      0
#define REG_SPDIF_RX_UD_LEFT_6_ADAU1452_VALUE     0x0

/* SPDIF_RX_UD_LEFT_7  - Registers (ADAU1452) */
#define REG_SPDIF_RX_UD_LEFT_7_ADAU1452_ADDR      0xF637
#define REG_SPDIF_RX_UD_LEFT_7_ADAU1452_BYTE      0
#define REG_SPDIF_RX_UD_LEFT_7_ADAU1452_VALUE     0x0

/* SPDIF_RX_UD_LEFT_8  - Registers (ADAU1452) */
#define REG_SPDIF_RX_UD_LEFT_8_ADAU1452_ADDR      0xF638
#define REG_SPDIF_RX_UD_LEFT_8_ADAU1452_BYTE      0
#define REG_SPDIF_RX_UD_LEFT_8_ADAU1452_VALUE     0x0

/* SPDIF_RX_UD_LEFT_9  - Registers (ADAU1452) */
#define REG_SPDIF_RX_UD_LEFT_9_ADAU1452_ADDR      0xF639
#define REG_SPDIF_RX_UD_LEFT_9_ADAU1452_BYTE      0
#define REG_SPDIF_RX_UD_LEFT_9_ADAU1452_VALUE     0x0

/* SPDIF_RX_UD_LEFT_10  - Registers (ADAU1452) */
#define REG_SPDIF_RX_UD_LEFT_10_ADAU1452_ADDR     0xF63A
#define REG_SPDIF_RX_UD_LEFT_10_ADAU1452_BYTE     0
#define REG_SPDIF_RX_UD_LEFT_10_ADAU1452_VALUE    0x0

/* SPDIF_RX_UD_LEFT_11  - Registers (ADAU1452) */
#define REG_SPDIF_RX_UD_LEFT_11_ADAU1452_ADDR     0xF63B
#define REG_SPDIF_RX_UD_LEFT_11_ADAU1452_BYTE     0
#define REG_SPDIF_RX_UD_LEFT_11_ADAU1452_VALUE    0x0

/* SPDIF_RX_UD_RIGHT_0  - Registers (ADAU1452) */
#define REG_SPDIF_RX_UD_RIGHT_0_ADAU1452_ADDR     0xF640
#define REG_SPDIF_RX_UD_RIGHT_0_ADAU1452_BYTE     0
#define REG_SPDIF_RX_UD_RIGHT_0_ADAU1452_VALUE    0x0

/* SPDIF_RX_UD_RIGHT_1  - Registers (ADAU1452) */
#define REG_SPDIF_RX_UD_RIGHT_1_ADAU1452_ADDR     0xF641
#define REG_SPDIF_RX_UD_RIGHT_1_ADAU1452_BYTE     0
#define REG_SPDIF_RX_UD_RIGHT_1_ADAU1452_VALUE    0x0

/* SPDIF_RX_UD_RIGHT_2  - Registers (ADAU1452) */
#define REG_SPDIF_RX_UD_RIGHT_2_ADAU1452_ADDR     0xF642
#define REG_SPDIF_RX_UD_RIGHT_2_ADAU1452_BYTE     0
#define REG_SPDIF_RX_UD_RIGHT_2_ADAU1452_VALUE    0x0

/* SPDIF_RX_UD_RIGHT_3  - Registers (ADAU1452) */
#define REG_SPDIF_RX_UD_RIGHT_3_ADAU1452_ADDR     0xF643
#define REG_SPDIF_RX_UD_RIGHT_3_ADAU1452_BYTE     0
#define REG_SPDIF_RX_UD_RIGHT_3_ADAU1452_VALUE    0x0

/* SPDIF_RX_UD_RIGHT_4  - Registers (ADAU1452) */
#define REG_SPDIF_RX_UD_RIGHT_4_ADAU1452_ADDR     0xF644
#define REG_SPDIF_RX_UD_RIGHT_4_ADAU1452_BYTE     0
#define REG_SPDIF_RX_UD_RIGHT_4_ADAU1452_VALUE    0x0

/* SPDIF_RX_UD_RIGHT_5  - Registers (ADAU1452) */
#define REG_SPDIF_RX_UD_RIGHT_5_ADAU1452_ADDR     0xF645
#define REG_SPDIF_RX_UD_RIGHT_5_ADAU1452_BYTE     0
#define REG_SPDIF_RX_UD_RIGHT_5_ADAU1452_VALUE    0x0

/* SPDIF_RX_UD_RIGHT_6  - Registers (ADAU1452) */
#define REG_SPDIF_RX_UD_RIGHT_6_ADAU1452_ADDR     0xF646
#define REG_SPDIF_RX_UD_RIGHT_6_ADAU1452_BYTE     0
#define REG_SPDIF_RX_UD_RIGHT_6_ADAU1452_VALUE    0x0

/* SPDIF_RX_UD_RIGHT_7  - Registers (ADAU1452) */
#define REG_SPDIF_RX_UD_RIGHT_7_ADAU1452_ADDR     0xF647
#define REG_SPDIF_RX_UD_RIGHT_7_ADAU1452_BYTE     0
#define REG_SPDIF_RX_UD_RIGHT_7_ADAU1452_VALUE    0x0

/* SPDIF_RX_UD_RIGHT_8  - Registers (ADAU1452) */
#define REG_SPDIF_RX_UD_RIGHT_8_ADAU1452_ADDR     0xF648
#define REG_SPDIF_RX_UD_RIGHT_8_ADAU1452_BYTE     0
#define REG_SPDIF_RX_UD_RIGHT_8_ADAU1452_VALUE    0x0

/* SPDIF_RX_UD_RIGHT_9  - Registers (ADAU1452) */
#define REG_SPDIF_RX_UD_RIGHT_9_ADAU1452_ADDR     0xF649
#define REG_SPDIF_RX_UD_RIGHT_9_ADAU1452_BYTE     0
#define REG_SPDIF_RX_UD_RIGHT_9_ADAU1452_VALUE    0x0

/* SPDIF_RX_UD_RIGHT_10  - Registers (ADAU1452) */
#define REG_SPDIF_RX_UD_RIGHT_10_ADAU1452_ADDR    0xF64A
#define REG_SPDIF_RX_UD_RIGHT_10_ADAU1452_BYTE    0
#define REG_SPDIF_RX_UD_RIGHT_10_ADAU1452_VALUE   0x0

/* SPDIF_RX_UD_RIGHT_11  - Registers (ADAU1452) */
#define REG_SPDIF_RX_UD_RIGHT_11_ADAU1452_ADDR    0xF64B
#define REG_SPDIF_RX_UD_RIGHT_11_ADAU1452_BYTE    0
#define REG_SPDIF_RX_UD_RIGHT_11_ADAU1452_VALUE   0x0

/* SPDIF_RX_VB_LEFT_0  - Registers (ADAU1452) */
#define REG_SPDIF_RX_VB_LEFT_0_ADAU1452_ADDR      0xF650
#define REG_SPDIF_RX_VB_LEFT_0_ADAU1452_BYTE      0
#define REG_SPDIF_RX_VB_LEFT_0_ADAU1452_VALUE     0x0

/* SPDIF_RX_VB_LEFT_1  - Registers (ADAU1452) */
#define REG_SPDIF_RX_VB_LEFT_1_ADAU1452_ADDR      0xF651
#define REG_SPDIF_RX_VB_LEFT_1_ADAU1452_BYTE      0
#define REG_SPDIF_RX_VB_LEFT_1_ADAU1452_VALUE     0x0

/* SPDIF_RX_VB_LEFT_2  - Registers (ADAU1452) */
#define REG_SPDIF_RX_VB_LEFT_2_ADAU1452_ADDR      0xF652
#define REG_SPDIF_RX_VB_LEFT_2_ADAU1452_BYTE      0
#define REG_SPDIF_RX_VB_LEFT_2_ADAU1452_VALUE     0x0

/* SPDIF_RX_VB_LEFT_3  - Registers (ADAU1452) */
#define REG_SPDIF_RX_VB_LEFT_3_ADAU1452_ADDR      0xF653
#define REG_SPDIF_RX_VB_LEFT_3_ADAU1452_BYTE      0
#define REG_SPDIF_RX_VB_LEFT_3_ADAU1452_VALUE     0x0

/* SPDIF_RX_VB_LEFT_4  - Registers (ADAU1452) */
#define REG_SPDIF_RX_VB_LEFT_4_ADAU1452_ADDR      0xF654
#define REG_SPDIF_RX_VB_LEFT_4_ADAU1452_BYTE      0
#define REG_SPDIF_RX_VB_LEFT_4_ADAU1452_VALUE     0x0

/* SPDIF_RX_VB_LEFT_5  - Registers (ADAU1452) */
#define REG_SPDIF_RX_VB_LEFT_5_ADAU1452_ADDR      0xF655
#define REG_SPDIF_RX_VB_LEFT_5_ADAU1452_BYTE      0
#define REG_SPDIF_RX_VB_LEFT_5_ADAU1452_VALUE     0x0

/* SPDIF_RX_VB_LEFT_6  - Registers (ADAU1452) */
#define REG_SPDIF_RX_VB_LEFT_6_ADAU1452_ADDR      0xF656
#define REG_SPDIF_RX_VB_LEFT_6_ADAU1452_BYTE      0
#define REG_SPDIF_RX_VB_LEFT_6_ADAU1452_VALUE     0x0

/* SPDIF_RX_VB_LEFT_7  - Registers (ADAU1452) */
#define REG_SPDIF_RX_VB_LEFT_7_ADAU1452_ADDR      0xF657
#define REG_SPDIF_RX_VB_LEFT_7_ADAU1452_BYTE      0
#define REG_SPDIF_RX_VB_LEFT_7_ADAU1452_VALUE     0x0

/* SPDIF_RX_VB_LEFT_8  - Registers (ADAU1452) */
#define REG_SPDIF_RX_VB_LEFT_8_ADAU1452_ADDR      0xF658
#define REG_SPDIF_RX_VB_LEFT_8_ADAU1452_BYTE      0
#define REG_SPDIF_RX_VB_LEFT_8_ADAU1452_VALUE     0x0

/* SPDIF_RX_VB_LEFT_9  - Registers (ADAU1452) */
#define REG_SPDIF_RX_VB_LEFT_9_ADAU1452_ADDR      0xF659
#define REG_SPDIF_RX_VB_LEFT_9_ADAU1452_BYTE      0
#define REG_SPDIF_RX_VB_LEFT_9_ADAU1452_VALUE     0x0

/* SPDIF_RX_VB_LEFT_10  - Registers (ADAU1452) */
#define REG_SPDIF_RX_VB_LEFT_10_ADAU1452_ADDR     0xF65A
#define REG_SPDIF_RX_VB_LEFT_10_ADAU1452_BYTE     0
#define REG_SPDIF_RX_VB_LEFT_10_ADAU1452_VALUE    0x0

/* SPDIF_RX_VB_LEFT_11  - Registers (ADAU1452) */
#define REG_SPDIF_RX_VB_LEFT_11_ADAU1452_ADDR     0xF65B
#define REG_SPDIF_RX_VB_LEFT_11_ADAU1452_BYTE     0
#define REG_SPDIF_RX_VB_LEFT_11_ADAU1452_VALUE    0x0

/* SPDIF_RX_VB_RIGHT_0  - Registers (ADAU1452) */
#define REG_SPDIF_RX_VB_RIGHT_0_ADAU1452_ADDR     0xF660
#define REG_SPDIF_RX_VB_RIGHT_0_ADAU1452_BYTE     0
#define REG_SPDIF_RX_VB_RIGHT_0_ADAU1452_VALUE    0x0

/* SPDIF_RX_VB_RIGHT_1  - Registers (ADAU1452) */
#define REG_SPDIF_RX_VB_RIGHT_1_ADAU1452_ADDR     0xF661
#define REG_SPDIF_RX_VB_RIGHT_1_ADAU1452_BYTE     0
#define REG_SPDIF_RX_VB_RIGHT_1_ADAU1452_VALUE    0x0

/* SPDIF_RX_VB_RIGHT_2  - Registers (ADAU1452) */
#define REG_SPDIF_RX_VB_RIGHT_2_ADAU1452_ADDR     0xF662
#define REG_SPDIF_RX_VB_RIGHT_2_ADAU1452_BYTE     0
#define REG_SPDIF_RX_VB_RIGHT_2_ADAU1452_VALUE    0x0

/* SPDIF_RX_VB_RIGHT_3  - Registers (ADAU1452) */
#define REG_SPDIF_RX_VB_RIGHT_3_ADAU1452_ADDR     0xF663
#define REG_SPDIF_RX_VB_RIGHT_3_ADAU1452_BYTE     0
#define REG_SPDIF_RX_VB_RIGHT_3_ADAU1452_VALUE    0x0

/* SPDIF_RX_VB_RIGHT_4  - Registers (ADAU1452) */
#define REG_SPDIF_RX_VB_RIGHT_4_ADAU1452_ADDR     0xF664
#define REG_SPDIF_RX_VB_RIGHT_4_ADAU1452_BYTE     0
#define REG_SPDIF_RX_VB_RIGHT_4_ADAU1452_VALUE    0x0

/* SPDIF_RX_VB_RIGHT_5  - Registers (ADAU1452) */
#define REG_SPDIF_RX_VB_RIGHT_5_ADAU1452_ADDR     0xF665
#define REG_SPDIF_RX_VB_RIGHT_5_ADAU1452_BYTE     0
#define REG_SPDIF_RX_VB_RIGHT_5_ADAU1452_VALUE    0x0

/* SPDIF_RX_VB_RIGHT_6  - Registers (ADAU1452) */
#define REG_SPDIF_RX_VB_RIGHT_6_ADAU1452_ADDR     0xF666
#define REG_SPDIF_RX_VB_RIGHT_6_ADAU1452_BYTE     0
#define REG_SPDIF_RX_VB_RIGHT_6_ADAU1452_VALUE    0x0

/* SPDIF_RX_VB_RIGHT_7  - Registers (ADAU1452) */
#define REG_SPDIF_RX_VB_RIGHT_7_ADAU1452_ADDR     0xF667
#define REG_SPDIF_RX_VB_RIGHT_7_ADAU1452_BYTE     0
#define REG_SPDIF_RX_VB_RIGHT_7_ADAU1452_VALUE    0x0

/* SPDIF_RX_VB_RIGHT_8  - Registers (ADAU1452) */
#define REG_SPDIF_RX_VB_RIGHT_8_ADAU1452_ADDR     0xF668
#define REG_SPDIF_RX_VB_RIGHT_8_ADAU1452_BYTE     0
#define REG_SPDIF_RX_VB_RIGHT_8_ADAU1452_VALUE    0x0

/* SPDIF_RX_VB_RIGHT_9  - Registers (ADAU1452) */
#define REG_SPDIF_RX_VB_RIGHT_9_ADAU1452_ADDR     0xF669
#define REG_SPDIF_RX_VB_RIGHT_9_ADAU1452_BYTE     0
#define REG_SPDIF_RX_VB_RIGHT_9_ADAU1452_VALUE    0x0

/* SPDIF_RX_VB_RIGHT_10  - Registers (ADAU1452) */
#define REG_SPDIF_RX_VB_RIGHT_10_ADAU1452_ADDR    0xF66A
#define REG_SPDIF_RX_VB_RIGHT_10_ADAU1452_BYTE    0
#define REG_SPDIF_RX_VB_RIGHT_10_ADAU1452_VALUE   0x0

/* SPDIF_RX_VB_RIGHT_11  - Registers (ADAU1452) */
#define REG_SPDIF_RX_VB_RIGHT_11_ADAU1452_ADDR    0xF66B
#define REG_SPDIF_RX_VB_RIGHT_11_ADAU1452_BYTE    0
#define REG_SPDIF_RX_VB_RIGHT_11_ADAU1452_VALUE   0x0

/* SPDIF_RX_PB_LEFT_0  - Registers (ADAU1452) */
#define REG_SPDIF_RX_PB_LEFT_0_ADAU1452_ADDR      0xF670
#define REG_SPDIF_RX_PB_LEFT_0_ADAU1452_BYTE      0
#define REG_SPDIF_RX_PB_LEFT_0_ADAU1452_VALUE     0x0

/* SPDIF_RX_PB_LEFT_1  - Registers (ADAU1452) */
#define REG_SPDIF_RX_PB_LEFT_1_ADAU1452_ADDR      0xF671
#define REG_SPDIF_RX_PB_LEFT_1_ADAU1452_BYTE      0
#define REG_SPDIF_RX_PB_LEFT_1_ADAU1452_VALUE     0x0

/* SPDIF_RX_PB_LEFT_2  - Registers (ADAU1452) */
#define REG_SPDIF_RX_PB_LEFT_2_ADAU1452_ADDR      0xF672
#define REG_SPDIF_RX_PB_LEFT_2_ADAU1452_BYTE      0
#define REG_SPDIF_RX_PB_LEFT_2_ADAU1452_VALUE     0x0

/* SPDIF_RX_PB_LEFT_3  - Registers (ADAU1452) */
#define REG_SPDIF_RX_PB_LEFT_3_ADAU1452_ADDR      0xF673
#define REG_SPDIF_RX_PB_LEFT_3_ADAU1452_BYTE      0
#define REG_SPDIF_RX_PB_LEFT_3_ADAU1452_VALUE     0x0

/* SPDIF_RX_PB_LEFT_4  - Registers (ADAU1452) */
#define REG_SPDIF_RX_PB_LEFT_4_ADAU1452_ADDR      0xF674
#define REG_SPDIF_RX_PB_LEFT_4_ADAU1452_BYTE      0
#define REG_SPDIF_RX_PB_LEFT_4_ADAU1452_VALUE     0x0

/* SPDIF_RX_PB_LEFT_5  - Registers (ADAU1452) */
#define REG_SPDIF_RX_PB_LEFT_5_ADAU1452_ADDR      0xF675
#define REG_SPDIF_RX_PB_LEFT_5_ADAU1452_BYTE      0
#define REG_SPDIF_RX_PB_LEFT_5_ADAU1452_VALUE     0x0

/* SPDIF_RX_PB_LEFT_6  - Registers (ADAU1452) */
#define REG_SPDIF_RX_PB_LEFT_6_ADAU1452_ADDR      0xF676
#define REG_SPDIF_RX_PB_LEFT_6_ADAU1452_BYTE      0
#define REG_SPDIF_RX_PB_LEFT_6_ADAU1452_VALUE     0x0

/* SPDIF_RX_PB_LEFT_7  - Registers (ADAU1452) */
#define REG_SPDIF_RX_PB_LEFT_7_ADAU1452_ADDR      0xF677
#define REG_SPDIF_RX_PB_LEFT_7_ADAU1452_BYTE      0
#define REG_SPDIF_RX_PB_LEFT_7_ADAU1452_VALUE     0x0

/* SPDIF_RX_PB_LEFT_8  - Registers (ADAU1452) */
#define REG_SPDIF_RX_PB_LEFT_8_ADAU1452_ADDR      0xF678
#define REG_SPDIF_RX_PB_LEFT_8_ADAU1452_BYTE      0
#define REG_SPDIF_RX_PB_LEFT_8_ADAU1452_VALUE     0x0

/* SPDIF_RX_PB_LEFT_9  - Registers (ADAU1452) */
#define REG_SPDIF_RX_PB_LEFT_9_ADAU1452_ADDR      0xF679
#define REG_SPDIF_RX_PB_LEFT_9_ADAU1452_BYTE      0
#define REG_SPDIF_RX_PB_LEFT_9_ADAU1452_VALUE     0x0

/* SPDIF_RX_PB_LEFT_10  - Registers (ADAU1452) */
#define REG_SPDIF_RX_PB_LEFT_10_ADAU1452_ADDR     0xF67A
#define REG_SPDIF_RX_PB_LEFT_10_ADAU1452_BYTE     0
#define REG_SPDIF_RX_PB_LEFT_10_ADAU1452_VALUE    0x0

/* SPDIF_RX_PB_LEFT_11  - Registers (ADAU1452) */
#define REG_SPDIF_RX_PB_LEFT_11_ADAU1452_ADDR     0xF67B
#define REG_SPDIF_RX_PB_LEFT_11_ADAU1452_BYTE     0
#define REG_SPDIF_RX_PB_LEFT_11_ADAU1452_VALUE    0x0

/* SPDIF_RX_PB_RIGHT_0  - Registers (ADAU1452) */
#define REG_SPDIF_RX_PB_RIGHT_0_ADAU1452_ADDR     0xF680
#define REG_SPDIF_RX_PB_RIGHT_0_ADAU1452_BYTE     0
#define REG_SPDIF_RX_PB_RIGHT_0_ADAU1452_VALUE    0x0

/* SPDIF_RX_PB_RIGHT_1  - Registers (ADAU1452) */
#define REG_SPDIF_RX_PB_RIGHT_1_ADAU1452_ADDR     0xF681
#define REG_SPDIF_RX_PB_RIGHT_1_ADAU1452_BYTE     0
#define REG_SPDIF_RX_PB_RIGHT_1_ADAU1452_VALUE    0x0

/* SPDIF_RX_PB_RIGHT_2  - Registers (ADAU1452) */
#define REG_SPDIF_RX_PB_RIGHT_2_ADAU1452_ADDR     0xF682
#define REG_SPDIF_RX_PB_RIGHT_2_ADAU1452_BYTE     0
#define REG_SPDIF_RX_PB_RIGHT_2_ADAU1452_VALUE    0x0

/* SPDIF_RX_PB_RIGHT_3  - Registers (ADAU1452) */
#define REG_SPDIF_RX_PB_RIGHT_3_ADAU1452_ADDR     0xF683
#define REG_SPDIF_RX_PB_RIGHT_3_ADAU1452_BYTE     0
#define REG_SPDIF_RX_PB_RIGHT_3_ADAU1452_VALUE    0x0

/* SPDIF_RX_PB_RIGHT_4  - Registers (ADAU1452) */
#define REG_SPDIF_RX_PB_RIGHT_4_ADAU1452_ADDR     0xF684
#define REG_SPDIF_RX_PB_RIGHT_4_ADAU1452_BYTE     0
#define REG_SPDIF_RX_PB_RIGHT_4_ADAU1452_VALUE    0x0

/* SPDIF_RX_PB_RIGHT_5  - Registers (ADAU1452) */
#define REG_SPDIF_RX_PB_RIGHT_5_ADAU1452_ADDR     0xF685
#define REG_SPDIF_RX_PB_RIGHT_5_ADAU1452_BYTE     0
#define REG_SPDIF_RX_PB_RIGHT_5_ADAU1452_VALUE    0x0

/* SPDIF_RX_PB_RIGHT_6  - Registers (ADAU1452) */
#define REG_SPDIF_RX_PB_RIGHT_6_ADAU1452_ADDR     0xF686
#define REG_SPDIF_RX_PB_RIGHT_6_ADAU1452_BYTE     0
#define REG_SPDIF_RX_PB_RIGHT_6_ADAU1452_VALUE    0x0

/* SPDIF_RX_PB_RIGHT_7  - Registers (ADAU1452) */
#define REG_SPDIF_RX_PB_RIGHT_7_ADAU1452_ADDR     0xF687
#define REG_SPDIF_RX_PB_RIGHT_7_ADAU1452_BYTE     0
#define REG_SPDIF_RX_PB_RIGHT_7_ADAU1452_VALUE    0x0

/* SPDIF_RX_PB_RIGHT_8  - Registers (ADAU1452) */
#define REG_SPDIF_RX_PB_RIGHT_8_ADAU1452_ADDR     0xF688
#define REG_SPDIF_RX_PB_RIGHT_8_ADAU1452_BYTE     0
#define REG_SPDIF_RX_PB_RIGHT_8_ADAU1452_VALUE    0x0

/* SPDIF_RX_PB_RIGHT_9  - Registers (ADAU1452) */
#define REG_SPDIF_RX_PB_RIGHT_9_ADAU1452_ADDR     0xF689
#define REG_SPDIF_RX_PB_RIGHT_9_ADAU1452_BYTE     0
#define REG_SPDIF_RX_PB_RIGHT_9_ADAU1452_VALUE    0x0

/* SPDIF_RX_PB_RIGHT_10  - Registers (ADAU1452) */
#define REG_SPDIF_RX_PB_RIGHT_10_ADAU1452_ADDR    0xF68A
#define REG_SPDIF_RX_PB_RIGHT_10_ADAU1452_BYTE    0
#define REG_SPDIF_RX_PB_RIGHT_10_ADAU1452_VALUE   0x0

/* SPDIF_RX_PB_RIGHT_11  - Registers (ADAU1452) */
#define REG_SPDIF_RX_PB_RIGHT_11_ADAU1452_ADDR    0xF68B
#define REG_SPDIF_RX_PB_RIGHT_11_ADAU1452_BYTE    0
#define REG_SPDIF_RX_PB_RIGHT_11_ADAU1452_VALUE   0x0

/* SPDIF_TX_EN  - Registers (ADAU1452) */
#define REG_SPDIF_TX_EN_ADAU1452_ADDR             0xF690
#define REG_SPDIF_TX_EN_ADAU1452_BYTE             2
#define REG_SPDIF_TX_EN_ADAU1452_VALUE            0x0

/* SPDIF_TX_CTRL  - Registers (ADAU1452) */
#define REG_SPDIF_TX_CTRL_ADAU1452_ADDR           0xF691
#define REG_SPDIF_TX_CTRL_ADAU1452_BYTE           2
#define REG_SPDIF_TX_CTRL_ADAU1452_VALUE          0x0

/* SPDIF_TX_AUXBIT_SOURCE  - Registers (ADAU1452) */
#define REG_SPDIF_TX_AUXBIT_SOURCE_ADAU1452_ADDR  0xF69F
#define REG_SPDIF_TX_AUXBIT_SOURCE_ADAU1452_BYTE  2
#define REG_SPDIF_TX_AUXBIT_SOURCE_ADAU1452_VALUE 0x0

/* SPDIF_TX_CS_LEFT_0  - Registers (ADAU1452) */
#define REG_SPDIF_TX_CS_LEFT_0_ADAU1452_ADDR      0xF6A0
#define REG_SPDIF_TX_CS_LEFT_0_ADAU1452_BYTE      2
#define REG_SPDIF_TX_CS_LEFT_0_ADAU1452_VALUE     0x0

/* SPDIF_TX_CS_LEFT_1  - Registers (ADAU1452) */
#define REG_SPDIF_TX_CS_LEFT_1_ADAU1452_ADDR      0xF6A1
#define REG_SPDIF_TX_CS_LEFT_1_ADAU1452_BYTE      2
#define REG_SPDIF_TX_CS_LEFT_1_ADAU1452_VALUE     0x0

/* SPDIF_TX_CS_LEFT_2  - Registers (ADAU1452) */
#define REG_SPDIF_TX_CS_LEFT_2_ADAU1452_ADDR      0xF6A2
#define REG_SPDIF_TX_CS_LEFT_2_ADAU1452_BYTE      2
#define REG_SPDIF_TX_CS_LEFT_2_ADAU1452_VALUE     0x0

/* SPDIF_TX_CS_LEFT_3  - Registers (ADAU1452) */
#define REG_SPDIF_TX_CS_LEFT_3_ADAU1452_ADDR      0xF6A3
#define REG_SPDIF_TX_CS_LEFT_3_ADAU1452_BYTE      2
#define REG_SPDIF_TX_CS_LEFT_3_ADAU1452_VALUE     0x0

/* SPDIF_TX_CS_LEFT_4  - Registers (ADAU1452) */
#define REG_SPDIF_TX_CS_LEFT_4_ADAU1452_ADDR      0xF6A4
#define REG_SPDIF_TX_CS_LEFT_4_ADAU1452_BYTE      2
#define REG_SPDIF_TX_CS_LEFT_4_ADAU1452_VALUE     0x0

/* SPDIF_TX_CS_LEFT_5  - Registers (ADAU1452) */
#define REG_SPDIF_TX_CS_LEFT_5_ADAU1452_ADDR      0xF6A5
#define REG_SPDIF_TX_CS_LEFT_5_ADAU1452_BYTE      2
#define REG_SPDIF_TX_CS_LEFT_5_ADAU1452_VALUE     0x0

/* SPDIF_TX_CS_LEFT_6  - Registers (ADAU1452) */
#define REG_SPDIF_TX_CS_LEFT_6_ADAU1452_ADDR      0xF6A6
#define REG_SPDIF_TX_CS_LEFT_6_ADAU1452_BYTE      2
#define REG_SPDIF_TX_CS_LEFT_6_ADAU1452_VALUE     0x0

/* SPDIF_TX_CS_LEFT_7  - Registers (ADAU1452) */
#define REG_SPDIF_TX_CS_LEFT_7_ADAU1452_ADDR      0xF6A7
#define REG_SPDIF_TX_CS_LEFT_7_ADAU1452_BYTE      2
#define REG_SPDIF_TX_CS_LEFT_7_ADAU1452_VALUE     0x0

/* SPDIF_TX_CS_LEFT_8  - Registers (ADAU1452) */
#define REG_SPDIF_TX_CS_LEFT_8_ADAU1452_ADDR      0xF6A8
#define REG_SPDIF_TX_CS_LEFT_8_ADAU1452_BYTE      2
#define REG_SPDIF_TX_CS_LEFT_8_ADAU1452_VALUE     0x0

/* SPDIF_TX_CS_LEFT_9  - Registers (ADAU1452) */
#define REG_SPDIF_TX_CS_LEFT_9_ADAU1452_ADDR      0xF6A9
#define REG_SPDIF_TX_CS_LEFT_9_ADAU1452_BYTE      2
#define REG_SPDIF_TX_CS_LEFT_9_ADAU1452_VALUE     0x0

/* SPDIF_TX_CS_LEFT_10  - Registers (ADAU1452) */
#define REG_SPDIF_TX_CS_LEFT_10_ADAU1452_ADDR     0xF6AA
#define REG_SPDIF_TX_CS_LEFT_10_ADAU1452_BYTE     2
#define REG_SPDIF_TX_CS_LEFT_10_ADAU1452_VALUE    0x0

/* SPDIF_TX_CS_LEFT_11  - Registers (ADAU1452) */
#define REG_SPDIF_TX_CS_LEFT_11_ADAU1452_ADDR     0xF6AB
#define REG_SPDIF_TX_CS_LEFT_11_ADAU1452_BYTE     2
#define REG_SPDIF_TX_CS_LEFT_11_ADAU1452_VALUE    0x0

/* SPDIF_TX_CS_RIGHT_0  - Registers (ADAU1452) */
#define REG_SPDIF_TX_CS_RIGHT_0_ADAU1452_ADDR     0xF6B0
#define REG_SPDIF_TX_CS_RIGHT_0_ADAU1452_BYTE     2
#define REG_SPDIF_TX_CS_RIGHT_0_ADAU1452_VALUE    0x0

/* SPDIF_TX_CS_RIGHT_1  - Registers (ADAU1452) */
#define REG_SPDIF_TX_CS_RIGHT_1_ADAU1452_ADDR     0xF6B1
#define REG_SPDIF_TX_CS_RIGHT_1_ADAU1452_BYTE     2
#define REG_SPDIF_TX_CS_RIGHT_1_ADAU1452_VALUE    0x0

/* SPDIF_TX_CS_RIGHT_2  - Registers (ADAU1452) */
#define REG_SPDIF_TX_CS_RIGHT_2_ADAU1452_ADDR     0xF6B2
#define REG_SPDIF_TX_CS_RIGHT_2_ADAU1452_BYTE     2
#define REG_SPDIF_TX_CS_RIGHT_2_ADAU1452_VALUE    0x0

/* SPDIF_TX_CS_RIGHT_3  - Registers (ADAU1452) */
#define REG_SPDIF_TX_CS_RIGHT_3_ADAU1452_ADDR     0xF6B3
#define REG_SPDIF_TX_CS_RIGHT_3_ADAU1452_BYTE     2
#define REG_SPDIF_TX_CS_RIGHT_3_ADAU1452_VALUE    0x0

/* SPDIF_TX_CS_RIGHT_4  - Registers (ADAU1452) */
#define REG_SPDIF_TX_CS_RIGHT_4_ADAU1452_ADDR     0xF6B4
#define REG_SPDIF_TX_CS_RIGHT_4_ADAU1452_BYTE     2
#define REG_SPDIF_TX_CS_RIGHT_4_ADAU1452_VALUE    0x0

/* SPDIF_TX_CS_RIGHT_5  - Registers (ADAU1452) */
#define REG_SPDIF_TX_CS_RIGHT_5_ADAU1452_ADDR     0xF6B5
#define REG_SPDIF_TX_CS_RIGHT_5_ADAU1452_BYTE     2
#define REG_SPDIF_TX_CS_RIGHT_5_ADAU1452_VALUE    0x0

/* SPDIF_TX_CS_RIGHT_6  - Registers (ADAU1452) */
#define REG_SPDIF_TX_CS_RIGHT_6_ADAU1452_ADDR     0xF6B6
#define REG_SPDIF_TX_CS_RIGHT_6_ADAU1452_BYTE     2
#define REG_SPDIF_TX_CS_RIGHT_6_ADAU1452_VALUE    0x0

/* SPDIF_TX_CS_RIGHT_7  - Registers (ADAU1452) */
#define REG_SPDIF_TX_CS_RIGHT_7_ADAU1452_ADDR     0xF6B7
#define REG_SPDIF_TX_CS_RIGHT_7_ADAU1452_BYTE     2
#define REG_SPDIF_TX_CS_RIGHT_7_ADAU1452_VALUE    0x0

/* SPDIF_TX_CS_RIGHT_8  - Registers (ADAU1452) */
#define REG_SPDIF_TX_CS_RIGHT_8_ADAU1452_ADDR     0xF6B8
#define REG_SPDIF_TX_CS_RIGHT_8_ADAU1452_BYTE     2
#define REG_SPDIF_TX_CS_RIGHT_8_ADAU1452_VALUE    0x0

/* SPDIF_TX_CS_RIGHT_9  - Registers (ADAU1452) */
#define REG_SPDIF_TX_CS_RIGHT_9_ADAU1452_ADDR     0xF6B9
#define REG_SPDIF_TX_CS_RIGHT_9_ADAU1452_BYTE     2
#define REG_SPDIF_TX_CS_RIGHT_9_ADAU1452_VALUE    0x0

/* SPDIF_TX_CS_RIGHT_10  - Registers (ADAU1452) */
#define REG_SPDIF_TX_CS_RIGHT_10_ADAU1452_ADDR    0xF6BA
#define REG_SPDIF_TX_CS_RIGHT_10_ADAU1452_BYTE    2
#define REG_SPDIF_TX_CS_RIGHT_10_ADAU1452_VALUE   0x0

/* SPDIF_TX_CS_RIGHT_11  - Registers (ADAU1452) */
#define REG_SPDIF_TX_CS_RIGHT_11_ADAU1452_ADDR    0xF6BB
#define REG_SPDIF_TX_CS_RIGHT_11_ADAU1452_BYTE    2
#define REG_SPDIF_TX_CS_RIGHT_11_ADAU1452_VALUE   0x0

/* SPDIF_TX_UD_LEFT_0  - Registers (ADAU1452) */
#define REG_SPDIF_TX_UD_LEFT_0_ADAU1452_ADDR      0xF6C0
#define REG_SPDIF_TX_UD_LEFT_0_ADAU1452_BYTE      2
#define REG_SPDIF_TX_UD_LEFT_0_ADAU1452_VALUE     0x0

/* SPDIF_TX_UD_LEFT_1  - Registers (ADAU1452) */
#define REG_SPDIF_TX_UD_LEFT_1_ADAU1452_ADDR      0xF6C1
#define REG_SPDIF_TX_UD_LEFT_1_ADAU1452_BYTE      2
#define REG_SPDIF_TX_UD_LEFT_1_ADAU1452_VALUE     0x0

/* SPDIF_TX_UD_LEFT_2  - Registers (ADAU1452) */
#define REG_SPDIF_TX_UD_LEFT_2_ADAU1452_ADDR      0xF6C2
#define REG_SPDIF_TX_UD_LEFT_2_ADAU1452_BYTE      2
#define REG_SPDIF_TX_UD_LEFT_2_ADAU1452_VALUE     0x0

/* SPDIF_TX_UD_LEFT_3  - Registers (ADAU1452) */
#define REG_SPDIF_TX_UD_LEFT_3_ADAU1452_ADDR      0xF6C3
#define REG_SPDIF_TX_UD_LEFT_3_ADAU1452_BYTE      2
#define REG_SPDIF_TX_UD_LEFT_3_ADAU1452_VALUE     0x0

/* SPDIF_TX_UD_LEFT_4  - Registers (ADAU1452) */
#define REG_SPDIF_TX_UD_LEFT_4_ADAU1452_ADDR      0xF6C4
#define REG_SPDIF_TX_UD_LEFT_4_ADAU1452_BYTE      2
#define REG_SPDIF_TX_UD_LEFT_4_ADAU1452_VALUE     0x0

/* SPDIF_TX_UD_LEFT_5  - Registers (ADAU1452) */
#define REG_SPDIF_TX_UD_LEFT_5_ADAU1452_ADDR      0xF6C5
#define REG_SPDIF_TX_UD_LEFT_5_ADAU1452_BYTE      2
#define REG_SPDIF_TX_UD_LEFT_5_ADAU1452_VALUE     0x0

/* SPDIF_TX_UD_LEFT_6  - Registers (ADAU1452) */
#define REG_SPDIF_TX_UD_LEFT_6_ADAU1452_ADDR      0xF6C6
#define REG_SPDIF_TX_UD_LEFT_6_ADAU1452_BYTE      2
#define REG_SPDIF_TX_UD_LEFT_6_ADAU1452_VALUE     0x0

/* SPDIF_TX_UD_LEFT_7  - Registers (ADAU1452) */
#define REG_SPDIF_TX_UD_LEFT_7_ADAU1452_ADDR      0xF6C7
#define REG_SPDIF_TX_UD_LEFT_7_ADAU1452_BYTE      2
#define REG_SPDIF_TX_UD_LEFT_7_ADAU1452_VALUE     0x0

/* SPDIF_TX_UD_LEFT_8  - Registers (ADAU1452) */
#define REG_SPDIF_TX_UD_LEFT_8_ADAU1452_ADDR      0xF6C8
#define REG_SPDIF_TX_UD_LEFT_8_ADAU1452_BYTE      2
#define REG_SPDIF_TX_UD_LEFT_8_ADAU1452_VALUE     0x0

/* SPDIF_TX_UD_LEFT_9  - Registers (ADAU1452) */
#define REG_SPDIF_TX_UD_LEFT_9_ADAU1452_ADDR      0xF6C9
#define REG_SPDIF_TX_UD_LEFT_9_ADAU1452_BYTE      2
#define REG_SPDIF_TX_UD_LEFT_9_ADAU1452_VALUE     0x0

/* SPDIF_TX_UD_LEFT_10  - Registers (ADAU1452) */
#define REG_SPDIF_TX_UD_LEFT_10_ADAU1452_ADDR     0xF6CA
#define REG_SPDIF_TX_UD_LEFT_10_ADAU1452_BYTE     2
#define REG_SPDIF_TX_UD_LEFT_10_ADAU1452_VALUE    0x0

/* SPDIF_TX_UD_LEFT_11  - Registers (ADAU1452) */
#define REG_SPDIF_TX_UD_LEFT_11_ADAU1452_ADDR     0xF6CB
#define REG_SPDIF_TX_UD_LEFT_11_ADAU1452_BYTE     2
#define REG_SPDIF_TX_UD_LEFT_11_ADAU1452_VALUE    0x0

/* SPDIF_TX_UD_RIGHT_0  - Registers (ADAU1452) */
#define REG_SPDIF_TX_UD_RIGHT_0_ADAU1452_ADDR     0xF6D0
#define REG_SPDIF_TX_UD_RIGHT_0_ADAU1452_BYTE     2
#define REG_SPDIF_TX_UD_RIGHT_0_ADAU1452_VALUE    0x0

/* SPDIF_TX_UD_RIGHT_1  - Registers (ADAU1452) */
#define REG_SPDIF_TX_UD_RIGHT_1_ADAU1452_ADDR     0xF6D1
#define REG_SPDIF_TX_UD_RIGHT_1_ADAU1452_BYTE     2
#define REG_SPDIF_TX_UD_RIGHT_1_ADAU1452_VALUE    0x0

/* SPDIF_TX_UD_RIGHT_2  - Registers (ADAU1452) */
#define REG_SPDIF_TX_UD_RIGHT_2_ADAU1452_ADDR     0xF6D2
#define REG_SPDIF_TX_UD_RIGHT_2_ADAU1452_BYTE     2
#define REG_SPDIF_TX_UD_RIGHT_2_ADAU1452_VALUE    0x0

/* SPDIF_TX_UD_RIGHT_3  - Registers (ADAU1452) */
#define REG_SPDIF_TX_UD_RIGHT_3_ADAU1452_ADDR     0xF6D3
#define REG_SPDIF_TX_UD_RIGHT_3_ADAU1452_BYTE     2
#define REG_SPDIF_TX_UD_RIGHT_3_ADAU1452_VALUE    0x0

/* SPDIF_TX_UD_RIGHT_4  - Registers (ADAU1452) */
#define REG_SPDIF_TX_UD_RIGHT_4_ADAU1452_ADDR     0xF6D4
#define REG_SPDIF_TX_UD_RIGHT_4_ADAU1452_BYTE     2
#define REG_SPDIF_TX_UD_RIGHT_4_ADAU1452_VALUE    0x0

/* SPDIF_TX_UD_RIGHT_5  - Registers (ADAU1452) */
#define REG_SPDIF_TX_UD_RIGHT_5_ADAU1452_ADDR     0xF6D5
#define REG_SPDIF_TX_UD_RIGHT_5_ADAU1452_BYTE     2
#define REG_SPDIF_TX_UD_RIGHT_5_ADAU1452_VALUE    0x0

/* SPDIF_TX_UD_RIGHT_6  - Registers (ADAU1452) */
#define REG_SPDIF_TX_UD_RIGHT_6_ADAU1452_ADDR     0xF6D6
#define REG_SPDIF_TX_UD_RIGHT_6_ADAU1452_BYTE     2
#define REG_SPDIF_TX_UD_RIGHT_6_ADAU1452_VALUE    0x0

/* SPDIF_TX_UD_RIGHT_7  - Registers (ADAU1452) */
#define REG_SPDIF_TX_UD_RIGHT_7_ADAU1452_ADDR     0xF6D7
#define REG_SPDIF_TX_UD_RIGHT_7_ADAU1452_BYTE     2
#define REG_SPDIF_TX_UD_RIGHT_7_ADAU1452_VALUE    0x0

/* SPDIF_TX_UD_RIGHT_8  - Registers (ADAU1452) */
#define REG_SPDIF_TX_UD_RIGHT_8_ADAU1452_ADDR     0xF6D8
#define REG_SPDIF_TX_UD_RIGHT_8_ADAU1452_BYTE     2
#define REG_SPDIF_TX_UD_RIGHT_8_ADAU1452_VALUE    0x0

/* SPDIF_TX_UD_RIGHT_9  - Registers (ADAU1452) */
#define REG_SPDIF_TX_UD_RIGHT_9_ADAU1452_ADDR     0xF6D9
#define REG_SPDIF_TX_UD_RIGHT_9_ADAU1452_BYTE     2
#define REG_SPDIF_TX_UD_RIGHT_9_ADAU1452_VALUE    0x0

/* SPDIF_TX_UD_RIGHT_10  - Registers (ADAU1452) */
#define REG_SPDIF_TX_UD_RIGHT_10_ADAU1452_ADDR    0xF6DA
#define REG_SPDIF_TX_UD_RIGHT_10_ADAU1452_BYTE    2
#define REG_SPDIF_TX_UD_RIGHT_10_ADAU1452_VALUE   0x0

/* SPDIF_TX_UD_RIGHT_11  - Registers (ADAU1452) */
#define REG_SPDIF_TX_UD_RIGHT_11_ADAU1452_ADDR    0xF6DB
#define REG_SPDIF_TX_UD_RIGHT_11_ADAU1452_BYTE    2
#define REG_SPDIF_TX_UD_RIGHT_11_ADAU1452_VALUE   0x0

/* SPDIF_TX_VB_LEFT_0  - Registers (ADAU1452) */
#define REG_SPDIF_TX_VB_LEFT_0_ADAU1452_ADDR      0xF6E0
#define REG_SPDIF_TX_VB_LEFT_0_ADAU1452_BYTE      2
#define REG_SPDIF_TX_VB_LEFT_0_ADAU1452_VALUE     0x0

/* SPDIF_TX_VB_LEFT_1  - Registers (ADAU1452) */
#define REG_SPDIF_TX_VB_LEFT_1_ADAU1452_ADDR      0xF6E1
#define REG_SPDIF_TX_VB_LEFT_1_ADAU1452_BYTE      2
#define REG_SPDIF_TX_VB_LEFT_1_ADAU1452_VALUE     0x0

/* SPDIF_TX_VB_LEFT_2  - Registers (ADAU1452) */
#define REG_SPDIF_TX_VB_LEFT_2_ADAU1452_ADDR      0xF6E2
#define REG_SPDIF_TX_VB_LEFT_2_ADAU1452_BYTE      2
#define REG_SPDIF_TX_VB_LEFT_2_ADAU1452_VALUE     0x0

/* SPDIF_TX_VB_LEFT_3  - Registers (ADAU1452) */
#define REG_SPDIF_TX_VB_LEFT_3_ADAU1452_ADDR      0xF6E3
#define REG_SPDIF_TX_VB_LEFT_3_ADAU1452_BYTE      2
#define REG_SPDIF_TX_VB_LEFT_3_ADAU1452_VALUE     0x0

/* SPDIF_TX_VB_LEFT_4  - Registers (ADAU1452) */
#define REG_SPDIF_TX_VB_LEFT_4_ADAU1452_ADDR      0xF6E4
#define REG_SPDIF_TX_VB_LEFT_4_ADAU1452_BYTE      2
#define REG_SPDIF_TX_VB_LEFT_4_ADAU1452_VALUE     0x0

/* SPDIF_TX_VB_LEFT_5  - Registers (ADAU1452) */
#define REG_SPDIF_TX_VB_LEFT_5_ADAU1452_ADDR      0xF6E5
#define REG_SPDIF_TX_VB_LEFT_5_ADAU1452_BYTE      2
#define REG_SPDIF_TX_VB_LEFT_5_ADAU1452_VALUE     0x0

/* SPDIF_TX_VB_LEFT_6  - Registers (ADAU1452) */
#define REG_SPDIF_TX_VB_LEFT_6_ADAU1452_ADDR      0xF6E6
#define REG_SPDIF_TX_VB_LEFT_6_ADAU1452_BYTE      2
#define REG_SPDIF_TX_VB_LEFT_6_ADAU1452_VALUE     0x0

/* SPDIF_TX_VB_LEFT_7  - Registers (ADAU1452) */
#define REG_SPDIF_TX_VB_LEFT_7_ADAU1452_ADDR      0xF6E7
#define REG_SPDIF_TX_VB_LEFT_7_ADAU1452_BYTE      2
#define REG_SPDIF_TX_VB_LEFT_7_ADAU1452_VALUE     0x0

/* SPDIF_TX_VB_LEFT_8  - Registers (ADAU1452) */
#define REG_SPDIF_TX_VB_LEFT_8_ADAU1452_ADDR      0xF6E8
#define REG_SPDIF_TX_VB_LEFT_8_ADAU1452_BYTE      2
#define REG_SPDIF_TX_VB_LEFT_8_ADAU1452_VALUE     0x0

/* SPDIF_TX_VB_LEFT_9  - Registers (ADAU1452) */
#define REG_SPDIF_TX_VB_LEFT_9_ADAU1452_ADDR      0xF6E9
#define REG_SPDIF_TX_VB_LEFT_9_ADAU1452_BYTE      2
#define REG_SPDIF_TX_VB_LEFT_9_ADAU1452_VALUE     0x0

/* SPDIF_TX_VB_LEFT_10  - Registers (ADAU1452) */
#define REG_SPDIF_TX_VB_LEFT_10_ADAU1452_ADDR     0xF6EA
#define REG_SPDIF_TX_VB_LEFT_10_ADAU1452_BYTE     2
#define REG_SPDIF_TX_VB_LEFT_10_ADAU1452_VALUE    0x0

/* SPDIF_TX_VB_LEFT_11  - Registers (ADAU1452) */
#define REG_SPDIF_TX_VB_LEFT_11_ADAU1452_ADDR     0xF6EB
#define REG_SPDIF_TX_VB_LEFT_11_ADAU1452_BYTE     2
#define REG_SPDIF_TX_VB_LEFT_11_ADAU1452_VALUE    0x0

/* SPDIF_TX_VB_RIGHT_0  - Registers (ADAU1452) */
#define REG_SPDIF_TX_VB_RIGHT_0_ADAU1452_ADDR     0xF6F0
#define REG_SPDIF_TX_VB_RIGHT_0_ADAU1452_BYTE     2
#define REG_SPDIF_TX_VB_RIGHT_0_ADAU1452_VALUE    0x0

/* SPDIF_TX_VB_RIGHT_1  - Registers (ADAU1452) */
#define REG_SPDIF_TX_VB_RIGHT_1_ADAU1452_ADDR     0xF6F1
#define REG_SPDIF_TX_VB_RIGHT_1_ADAU1452_BYTE     2
#define REG_SPDIF_TX_VB_RIGHT_1_ADAU1452_VALUE    0x0

/* SPDIF_TX_VB_RIGHT_2  - Registers (ADAU1452) */
#define REG_SPDIF_TX_VB_RIGHT_2_ADAU1452_ADDR     0xF6F2
#define REG_SPDIF_TX_VB_RIGHT_2_ADAU1452_BYTE     2
#define REG_SPDIF_TX_VB_RIGHT_2_ADAU1452_VALUE    0x0

/* SPDIF_TX_VB_RIGHT_3  - Registers (ADAU1452) */
#define REG_SPDIF_TX_VB_RIGHT_3_ADAU1452_ADDR     0xF6F3
#define REG_SPDIF_TX_VB_RIGHT_3_ADAU1452_BYTE     2
#define REG_SPDIF_TX_VB_RIGHT_3_ADAU1452_VALUE    0x0

/* SPDIF_TX_VB_RIGHT_4  - Registers (ADAU1452) */
#define REG_SPDIF_TX_VB_RIGHT_4_ADAU1452_ADDR     0xF6F4
#define REG_SPDIF_TX_VB_RIGHT_4_ADAU1452_BYTE     2
#define REG_SPDIF_TX_VB_RIGHT_4_ADAU1452_VALUE    0x0

/* SPDIF_TX_VB_RIGHT_5  - Registers (ADAU1452) */
#define REG_SPDIF_TX_VB_RIGHT_5_ADAU1452_ADDR     0xF6F5
#define REG_SPDIF_TX_VB_RIGHT_5_ADAU1452_BYTE     2
#define REG_SPDIF_TX_VB_RIGHT_5_ADAU1452_VALUE    0x0

/* SPDIF_TX_VB_RIGHT_6  - Registers (ADAU1452) */
#define REG_SPDIF_TX_VB_RIGHT_6_ADAU1452_ADDR     0xF6F6
#define REG_SPDIF_TX_VB_RIGHT_6_ADAU1452_BYTE     2
#define REG_SPDIF_TX_VB_RIGHT_6_ADAU1452_VALUE    0x0

/* SPDIF_TX_VB_RIGHT_7  - Registers (ADAU1452) */
#define REG_SPDIF_TX_VB_RIGHT_7_ADAU1452_ADDR     0xF6F7
#define REG_SPDIF_TX_VB_RIGHT_7_ADAU1452_BYTE     2
#define REG_SPDIF_TX_VB_RIGHT_7_ADAU1452_VALUE    0x0

/* SPDIF_TX_VB_RIGHT_8  - Registers (ADAU1452) */
#define REG_SPDIF_TX_VB_RIGHT_8_ADAU1452_ADDR     0xF6F8
#define REG_SPDIF_TX_VB_RIGHT_8_ADAU1452_BYTE     2
#define REG_SPDIF_TX_VB_RIGHT_8_ADAU1452_VALUE    0x0

/* SPDIF_TX_VB_RIGHT_9  - Registers (ADAU1452) */
#define REG_SPDIF_TX_VB_RIGHT_9_ADAU1452_ADDR     0xF6F9
#define REG_SPDIF_TX_VB_RIGHT_9_ADAU1452_BYTE     2
#define REG_SPDIF_TX_VB_RIGHT_9_ADAU1452_VALUE    0x0

/* SPDIF_TX_VB_RIGHT_10  - Registers (ADAU1452) */
#define REG_SPDIF_TX_VB_RIGHT_10_ADAU1452_ADDR    0xF6FA
#define REG_SPDIF_TX_VB_RIGHT_10_ADAU1452_BYTE    2
#define REG_SPDIF_TX_VB_RIGHT_10_ADAU1452_VALUE   0x0

/* SPDIF_TX_VB_RIGHT_11  - Registers (ADAU1452) */
#define REG_SPDIF_TX_VB_RIGHT_11_ADAU1452_ADDR    0xF6FB
#define REG_SPDIF_TX_VB_RIGHT_11_ADAU1452_BYTE    2
#define REG_SPDIF_TX_VB_RIGHT_11_ADAU1452_VALUE   0x0

/* SPDIF_TX_PB_LEFT_0  - Registers (ADAU1452) */
#define REG_SPDIF_TX_PB_LEFT_0_ADAU1452_ADDR      0xF700
#define REG_SPDIF_TX_PB_LEFT_0_ADAU1452_BYTE      2
#define REG_SPDIF_TX_PB_LEFT_0_ADAU1452_VALUE     0x0

/* SPDIF_TX_PB_LEFT_1  - Registers (ADAU1452) */
#define REG_SPDIF_TX_PB_LEFT_1_ADAU1452_ADDR      0xF701
#define REG_SPDIF_TX_PB_LEFT_1_ADAU1452_BYTE      2
#define REG_SPDIF_TX_PB_LEFT_1_ADAU1452_VALUE     0x0

/* SPDIF_TX_PB_LEFT_2  - Registers (ADAU1452) */
#define REG_SPDIF_TX_PB_LEFT_2_ADAU1452_ADDR      0xF702
#define REG_SPDIF_TX_PB_LEFT_2_ADAU1452_BYTE      2
#define REG_SPDIF_TX_PB_LEFT_2_ADAU1452_VALUE     0x0

/* SPDIF_TX_PB_LEFT_3  - Registers (ADAU1452) */
#define REG_SPDIF_TX_PB_LEFT_3_ADAU1452_ADDR      0xF703
#define REG_SPDIF_TX_PB_LEFT_3_ADAU1452_BYTE      2
#define REG_SPDIF_TX_PB_LEFT_3_ADAU1452_VALUE     0x0

/* SPDIF_TX_PB_LEFT_4  - Registers (ADAU1452) */
#define REG_SPDIF_TX_PB_LEFT_4_ADAU1452_ADDR      0xF704
#define REG_SPDIF_TX_PB_LEFT_4_ADAU1452_BYTE      2
#define REG_SPDIF_TX_PB_LEFT_4_ADAU1452_VALUE     0x0

/* SPDIF_TX_PB_LEFT_5  - Registers (ADAU1452) */
#define REG_SPDIF_TX_PB_LEFT_5_ADAU1452_ADDR      0xF705
#define REG_SPDIF_TX_PB_LEFT_5_ADAU1452_BYTE      2
#define REG_SPDIF_TX_PB_LEFT_5_ADAU1452_VALUE     0x0

/* SPDIF_TX_PB_LEFT_6  - Registers (ADAU1452) */
#define REG_SPDIF_TX_PB_LEFT_6_ADAU1452_ADDR      0xF706
#define REG_SPDIF_TX_PB_LEFT_6_ADAU1452_BYTE      2
#define REG_SPDIF_TX_PB_LEFT_6_ADAU1452_VALUE     0x0

/* SPDIF_TX_PB_LEFT_7  - Registers (ADAU1452) */
#define REG_SPDIF_TX_PB_LEFT_7_ADAU1452_ADDR      0xF707
#define REG_SPDIF_TX_PB_LEFT_7_ADAU1452_BYTE      2
#define REG_SPDIF_TX_PB_LEFT_7_ADAU1452_VALUE     0x0

/* SPDIF_TX_PB_LEFT_8  - Registers (ADAU1452) */
#define REG_SPDIF_TX_PB_LEFT_8_ADAU1452_ADDR      0xF708
#define REG_SPDIF_TX_PB_LEFT_8_ADAU1452_BYTE      2
#define REG_SPDIF_TX_PB_LEFT_8_ADAU1452_VALUE     0x0

/* SPDIF_TX_PB_LEFT_9  - Registers (ADAU1452) */
#define REG_SPDIF_TX_PB_LEFT_9_ADAU1452_ADDR      0xF709
#define REG_SPDIF_TX_PB_LEFT_9_ADAU1452_BYTE      2
#define REG_SPDIF_TX_PB_LEFT_9_ADAU1452_VALUE     0x0

/* SPDIF_TX_PB_LEFT_10  - Registers (ADAU1452) */
#define REG_SPDIF_TX_PB_LEFT_10_ADAU1452_ADDR     0xF70A
#define REG_SPDIF_TX_PB_LEFT_10_ADAU1452_BYTE     2
#define REG_SPDIF_TX_PB_LEFT_10_ADAU1452_VALUE    0x0

/* SPDIF_TX_PB_LEFT_11  - Registers (ADAU1452) */
#define REG_SPDIF_TX_PB_LEFT_11_ADAU1452_ADDR     0xF70B
#define REG_SPDIF_TX_PB_LEFT_11_ADAU1452_BYTE     2
#define REG_SPDIF_TX_PB_LEFT_11_ADAU1452_VALUE    0x0

/* SPDIF_TX_PB_RIGHT_0  - Registers (ADAU1452) */
#define REG_SPDIF_TX_PB_RIGHT_0_ADAU1452_ADDR     0xF710
#define REG_SPDIF_TX_PB_RIGHT_0_ADAU1452_BYTE     2
#define REG_SPDIF_TX_PB_RIGHT_0_ADAU1452_VALUE    0x0

/* SPDIF_TX_PB_RIGHT_1  - Registers (ADAU1452) */
#define REG_SPDIF_TX_PB_RIGHT_1_ADAU1452_ADDR     0xF711
#define REG_SPDIF_TX_PB_RIGHT_1_ADAU1452_BYTE     2
#define REG_SPDIF_TX_PB_RIGHT_1_ADAU1452_VALUE    0x0

/* SPDIF_TX_PB_RIGHT_2  - Registers (ADAU1452) */
#define REG_SPDIF_TX_PB_RIGHT_2_ADAU1452_ADDR     0xF712
#define REG_SPDIF_TX_PB_RIGHT_2_ADAU1452_BYTE     2
#define REG_SPDIF_TX_PB_RIGHT_2_ADAU1452_VALUE    0x0

/* SPDIF_TX_PB_RIGHT_3  - Registers (ADAU1452) */
#define REG_SPDIF_TX_PB_RIGHT_3_ADAU1452_ADDR     0xF713
#define REG_SPDIF_TX_PB_RIGHT_3_ADAU1452_BYTE     2
#define REG_SPDIF_TX_PB_RIGHT_3_ADAU1452_VALUE    0x0

/* SPDIF_TX_PB_RIGHT_4  - Registers (ADAU1452) */
#define REG_SPDIF_TX_PB_RIGHT_4_ADAU1452_ADDR     0xF714
#define REG_SPDIF_TX_PB_RIGHT_4_ADAU1452_BYTE     2
#define REG_SPDIF_TX_PB_RIGHT_4_ADAU1452_VALUE    0x0

/* SPDIF_TX_PB_RIGHT_5  - Registers (ADAU1452) */
#define REG_SPDIF_TX_PB_RIGHT_5_ADAU1452_ADDR     0xF715
#define REG_SPDIF_TX_PB_RIGHT_5_ADAU1452_BYTE     2
#define REG_SPDIF_TX_PB_RIGHT_5_ADAU1452_VALUE    0x0

/* SPDIF_TX_PB_RIGHT_6  - Registers (ADAU1452) */
#define REG_SPDIF_TX_PB_RIGHT_6_ADAU1452_ADDR     0xF716
#define REG_SPDIF_TX_PB_RIGHT_6_ADAU1452_BYTE     2
#define REG_SPDIF_TX_PB_RIGHT_6_ADAU1452_VALUE    0x0

/* SPDIF_TX_PB_RIGHT_7  - Registers (ADAU1452) */
#define REG_SPDIF_TX_PB_RIGHT_7_ADAU1452_ADDR     0xF717
#define REG_SPDIF_TX_PB_RIGHT_7_ADAU1452_BYTE     2
#define REG_SPDIF_TX_PB_RIGHT_7_ADAU1452_VALUE    0x0

/* SPDIF_TX_PB_RIGHT_8  - Registers (ADAU1452) */
#define REG_SPDIF_TX_PB_RIGHT_8_ADAU1452_ADDR     0xF718
#define REG_SPDIF_TX_PB_RIGHT_8_ADAU1452_BYTE     2
#define REG_SPDIF_TX_PB_RIGHT_8_ADAU1452_VALUE    0x0

/* SPDIF_TX_PB_RIGHT_9  - Registers (ADAU1452) */
#define REG_SPDIF_TX_PB_RIGHT_9_ADAU1452_ADDR     0xF719
#define REG_SPDIF_TX_PB_RIGHT_9_ADAU1452_BYTE     2
#define REG_SPDIF_TX_PB_RIGHT_9_ADAU1452_VALUE    0x0

/* SPDIF_TX_PB_RIGHT_10  - Registers (ADAU1452) */
#define REG_SPDIF_TX_PB_RIGHT_10_ADAU1452_ADDR    0xF71A
#define REG_SPDIF_TX_PB_RIGHT_10_ADAU1452_BYTE    2
#define REG_SPDIF_TX_PB_RIGHT_10_ADAU1452_VALUE   0x0

/* SPDIF_TX_PB_RIGHT_11  - Registers (ADAU1452) */
#define REG_SPDIF_TX_PB_RIGHT_11_ADAU1452_ADDR    0xF71B
#define REG_SPDIF_TX_PB_RIGHT_11_ADAU1452_BYTE    2
#define REG_SPDIF_TX_PB_RIGHT_11_ADAU1452_VALUE   0x0

/* BCLK_IN0_PIN  - Registers (ADAU1452) */
#define REG_BCLK_IN0_PIN_ADAU1452_ADDR            0xF780
#define REG_BCLK_IN0_PIN_ADAU1452_BYTE            2
#define REG_BCLK_IN0_PIN_ADAU1452_VALUE           0x0

/* BCLK_IN1_PIN  - Registers (ADAU1452) */
#define REG_BCLK_IN1_PIN_ADAU1452_ADDR            0xF781
#define REG_BCLK_IN1_PIN_ADAU1452_BYTE            2
#define REG_BCLK_IN1_PIN_ADAU1452_VALUE           0x0

/* BCLK_IN2_PIN  - Registers (ADAU1452) */
#define REG_BCLK_IN2_PIN_ADAU1452_ADDR            0xF782
#define REG_BCLK_IN2_PIN_ADAU1452_BYTE            2
#define REG_BCLK_IN2_PIN_ADAU1452_VALUE           0x0

/* BCLK_IN3_PIN  - Registers (ADAU1452) */
#define REG_BCLK_IN3_PIN_ADAU1452_ADDR            0xF783
#define REG_BCLK_IN3_PIN_ADAU1452_BYTE            2
#define REG_BCLK_IN3_PIN_ADAU1452_VALUE           0x0

/* BCLK_OUT0_PIN  - Registers (ADAU1452) */
#define REG_BCLK_OUT0_PIN_ADAU1452_ADDR           0xF784
#define REG_BCLK_OUT0_PIN_ADAU1452_BYTE           2
#define REG_BCLK_OUT0_PIN_ADAU1452_VALUE          0x0

/* BCLK_OUT1_PIN  - Registers (ADAU1452) */
#define REG_BCLK_OUT1_PIN_ADAU1452_ADDR           0xF785
#define REG_BCLK_OUT1_PIN_ADAU1452_BYTE           2
#define REG_BCLK_OUT1_PIN_ADAU1452_VALUE          0x0

/* BCLK_OUT2_PIN  - Registers (ADAU1452) */
#define REG_BCLK_OUT2_PIN_ADAU1452_ADDR           0xF786
#define REG_BCLK_OUT2_PIN_ADAU1452_BYTE           2
#define REG_BCLK_OUT2_PIN_ADAU1452_VALUE          0x0

/* BCLK_OUT3_PIN  - Registers (ADAU1452) */
#define REG_BCLK_OUT3_PIN_ADAU1452_ADDR           0xF787
#define REG_BCLK_OUT3_PIN_ADAU1452_BYTE           2
#define REG_BCLK_OUT3_PIN_ADAU1452_VALUE          0x0

/* LRCLK_IN0_PIN  - Registers (ADAU1452) */
#define REG_LRCLK_IN0_PIN_ADAU1452_ADDR           0xF788
#define REG_LRCLK_IN0_PIN_ADAU1452_BYTE           2
#define REG_LRCLK_IN0_PIN_ADAU1452_VALUE          0x0

/* LRCLK_IN1_PIN  - Registers (ADAU1452) */
#define REG_LRCLK_IN1_PIN_ADAU1452_ADDR           0xF789
#define REG_LRCLK_IN1_PIN_ADAU1452_BYTE           2
#define REG_LRCLK_IN1_PIN_ADAU1452_VALUE          0x0

/* LRCLK_IN2_PIN  - Registers (ADAU1452) */
#define REG_LRCLK_IN2_PIN_ADAU1452_ADDR           0xF78A
#define REG_LRCLK_IN2_PIN_ADAU1452_BYTE           2
#define REG_LRCLK_IN2_PIN_ADAU1452_VALUE          0x0

/* LRCLK_IN3_PIN  - Registers (ADAU1452) */
#define REG_LRCLK_IN3_PIN_ADAU1452_ADDR           0xF78B
#define REG_LRCLK_IN3_PIN_ADAU1452_BYTE           2
#define REG_LRCLK_IN3_PIN_ADAU1452_VALUE          0x0

/* LRCLK_OUT0_PIN  - Registers (ADAU1452) */
#define REG_LRCLK_OUT0_PIN_ADAU1452_ADDR          0xF78C
#define REG_LRCLK_OUT0_PIN_ADAU1452_BYTE          2
#define REG_LRCLK_OUT0_PIN_ADAU1452_VALUE         0x0

/* LRCLK_OUT1_PIN  - Registers (ADAU1452) */
#define REG_LRCLK_OUT1_PIN_ADAU1452_ADDR          0xF78D
#define REG_LRCLK_OUT1_PIN_ADAU1452_BYTE          2
#define REG_LRCLK_OUT1_PIN_ADAU1452_VALUE         0x0

/* LRCLK_OUT2_PIN  - Registers (ADAU1452) */
#define REG_LRCLK_OUT2_PIN_ADAU1452_ADDR          0xF78E
#define REG_LRCLK_OUT2_PIN_ADAU1452_BYTE          2
#define REG_LRCLK_OUT2_PIN_ADAU1452_VALUE         0x0

/* LRCLK_OUT3_PIN  - Registers (ADAU1452) */
#define REG_LRCLK_OUT3_PIN_ADAU1452_ADDR          0xF78F
#define REG_LRCLK_OUT3_PIN_ADAU1452_BYTE          2
#define REG_LRCLK_OUT3_PIN_ADAU1452_VALUE         0x0

/* SDATA_IN0_PIN  - Registers (ADAU1452) */
#define REG_SDATA_IN0_PIN_ADAU1452_ADDR           0xF790
#define REG_SDATA_IN0_PIN_ADAU1452_BYTE           2
#define REG_SDATA_IN0_PIN_ADAU1452_VALUE          0x0

/* SDATA_IN1_PIN  - Registers (ADAU1452) */
#define REG_SDATA_IN1_PIN_ADAU1452_ADDR           0xF791
#define REG_SDATA_IN1_PIN_ADAU1452_BYTE           2
#define REG_SDATA_IN1_PIN_ADAU1452_VALUE          0x0

/* SDATA_IN2_PIN  - Registers (ADAU1452) */
#define REG_SDATA_IN2_PIN_ADAU1452_ADDR           0xF792
#define REG_SDATA_IN2_PIN_ADAU1452_BYTE           2
#define REG_SDATA_IN2_PIN_ADAU1452_VALUE          0x0

/* SDATA_IN3_PIN  - Registers (ADAU1452) */
#define REG_SDATA_IN3_PIN_ADAU1452_ADDR           0xF793
#define REG_SDATA_IN3_PIN_ADAU1452_BYTE           2
#define REG_SDATA_IN3_PIN_ADAU1452_VALUE          0x0

/* SDATA_OUT0_PIN  - Registers (ADAU1452) */
#define REG_SDATA_OUT0_PIN_ADAU1452_ADDR          0xF794
#define REG_SDATA_OUT0_PIN_ADAU1452_BYTE          2
#define REG_SDATA_OUT0_PIN_ADAU1452_VALUE         0x0

/* SDATA_OUT1_PIN  - Registers (ADAU1452) */
#define REG_SDATA_OUT1_PIN_ADAU1452_ADDR          0xF795
#define REG_SDATA_OUT1_PIN_ADAU1452_BYTE          2
#define REG_SDATA_OUT1_PIN_ADAU1452_VALUE         0x0

/* SDATA_OUT2_PIN  - Registers (ADAU1452) */
#define REG_SDATA_OUT2_PIN_ADAU1452_ADDR          0xF796
#define REG_SDATA_OUT2_PIN_ADAU1452_BYTE          2
#define REG_SDATA_OUT2_PIN_ADAU1452_VALUE         0x0

/* SDATA_OUT3_PIN  - Registers (ADAU1452) */
#define REG_SDATA_OUT3_PIN_ADAU1452_ADDR          0xF797
#define REG_SDATA_OUT3_PIN_ADAU1452_BYTE          2
#define REG_SDATA_OUT3_PIN_ADAU1452_VALUE         0x0

/* SPDIF_TX_PIN  - Registers (ADAU1452) */
#define REG_SPDIF_TX_PIN_ADAU1452_ADDR            0xF798
#define REG_SPDIF_TX_PIN_ADAU1452_BYTE            2
#define REG_SPDIF_TX_PIN_ADAU1452_VALUE           0x0

/* SCLK_SCL_PIN  - Registers (ADAU1452) */
#define REG_SCLK_SCL_PIN_ADAU1452_ADDR            0xF799
#define REG_SCLK_SCL_PIN_ADAU1452_BYTE            2
#define REG_SCLK_SCL_PIN_ADAU1452_VALUE           0x18

/* MISO_SDA_PIN  - Registers (ADAU1452) */
#define REG_MISO_SDA_PIN_ADAU1452_ADDR            0xF79A
#define REG_MISO_SDA_PIN_ADAU1452_BYTE            2
#define REG_MISO_SDA_PIN_ADAU1452_VALUE           0x0

/* SS_PIN  - Registers (ADAU1452) */
#define REG_SS_PIN_ADAU1452_ADDR                  0xF79B
#define REG_SS_PIN_ADAU1452_BYTE                  2
#define REG_SS_PIN_ADAU1452_VALUE                 0x18

/* MOSI_ADDR1_PIN  - Registers (ADAU1452) */
#define REG_MOSI_ADDR1_PIN_ADAU1452_ADDR          0xF79C
#define REG_MOSI_ADDR1_PIN_ADAU1452_BYTE          2
#define REG_MOSI_ADDR1_PIN_ADAU1452_VALUE         0x0

/* SCLK_SCL_M_PIN  - Registers (ADAU1452) */
#define REG_SCLK_SCL_M_PIN_ADAU1452_ADDR          0xF79D
#define REG_SCLK_SCL_M_PIN_ADAU1452_BYTE          2
#define REG_SCLK_SCL_M_PIN_ADAU1452_VALUE         0x0

/* MISO_SDA_M_PIN  - Registers (ADAU1452) */
#define REG_MISO_SDA_M_PIN_ADAU1452_ADDR          0xF79E
#define REG_MISO_SDA_M_PIN_ADAU1452_BYTE          2
#define REG_MISO_SDA_M_PIN_ADAU1452_VALUE         0x0

/* SS_M_PIN  - Registers (ADAU1452) */
#define REG_SS_M_PIN_ADAU1452_ADDR                0xF79F
#define REG_SS_M_PIN_ADAU1452_BYTE                2
#define REG_SS_M_PIN_ADAU1452_VALUE               0x18

/* MOSI_M_PIN  - Registers (ADAU1452) */
#define REG_MOSI_M_PIN_ADAU1452_ADDR              0xF7A0
#define REG_MOSI_M_PIN_ADAU1452_BYTE              2
#define REG_MOSI_M_PIN_ADAU1452_VALUE             0x18

/* MP6_PIN  - Registers (ADAU1452) */
#define REG_MP6_PIN_ADAU1452_ADDR                 0xF7A1
#define REG_MP6_PIN_ADAU1452_BYTE                 2
#define REG_MP6_PIN_ADAU1452_VALUE                0x0

/* MP7_PIN  - Registers (ADAU1452) */
#define REG_MP7_PIN_ADAU1452_ADDR                 0xF7A2
#define REG_MP7_PIN_ADAU1452_BYTE                 2
#define REG_MP7_PIN_ADAU1452_VALUE                0x0

/* CLKOUT_PIN  - Registers (ADAU1452) */
#define REG_CLKOUT_PIN_ADAU1452_ADDR              0xF7A3
#define REG_CLKOUT_PIN_ADAU1452_BYTE              2
#define REG_CLKOUT_PIN_ADAU1452_VALUE             0x0

/* SOFT_RESET  - Registers (ADAU1452) */
#define REG_SOFT_RESET_ADAU1452_ADDR              0xF890
#define REG_SOFT_RESET_ADAU1452_BYTE              2
#define REG_SOFT_RESET_ADAU1452_VALUE             0x1


/*
 *
 * Control register's field descriptions
 *
 */

/* PLL_CTRL0 (ADAU1452) */
#define R0_PLL_CTRL0_PLL_FBDIVIDER_ADAU1452       0x60   /* 1100000b	[6:0] */
#define R0_PLL_CTRL0_PLL_FBDIVIDER_ADAU1452_MASK  0x7F
#define R0_PLL_CTRL0_PLL_FBDIVIDER_ADAU1452_SHIFT 0

/* PLL_CTRL1 (ADAU1452) */
#define R1_PLL_CTRL1_PLL_DIV_ADAU1452             0x2    /* 10b	[1:0] */
#define R1_PLL_CTRL1_PLL_DIV_ADAU1452_MASK        0x3
#define R1_PLL_CTRL1_PLL_DIV_ADAU1452_SHIFT       0

/* PLL_CLK_SRC (ADAU1452) */
#define R2_PLL_CLK_SRC_CLKSRC_ADAU1452            0x1    /* 1b	[0] */
#define R2_PLL_CLK_SRC_CLKSRC_ADAU1452_MASK       0x1
#define R2_PLL_CLK_SRC_CLKSRC_ADAU1452_SHIFT      0

/* PLL_ENABLE (ADAU1452) */
#define R3_PLL_ENABLE_PLL_ENABLE_ADAU1452         0x1    /* 1b	[0] */
#define R3_PLL_ENABLE_PLL_ENABLE_ADAU1452_MASK    0x1
#define R3_PLL_ENABLE_PLL_ENABLE_ADAU1452_SHIFT   0

/* PLL_LOCK (ADAU1452) */
#define R4_PLL_LOCK_PLL_LOCK_ADAU1452             0x0    /* 0b	[0] */
#define R4_PLL_LOCK_PLL_LOCK_ADAU1452_MASK        0x1
#define R4_PLL_LOCK_PLL_LOCK_ADAU1452_SHIFT       0

/* MCLK_OUT (ADAU1452) */
#define R5_MCLK_OUT_CLKOUT_ENABLE_ADAU1452        0x1    /* 1b	[0] */
#define R5_MCLK_OUT_CLKOUT_RATE_ADAU1452          0x2    /* 10b	[2:1] */
#define R5_MCLK_OUT_CLKOUT_ENABLE_ADAU1452_MASK   0x1
#define R5_MCLK_OUT_CLKOUT_ENABLE_ADAU1452_SHIFT  0
#define R5_MCLK_OUT_CLKOUT_RATE_ADAU1452_MASK     0x6
#define R5_MCLK_OUT_CLKOUT_RATE_ADAU1452_SHIFT    1

/* PLL_WATCHDOG (ADAU1452) */
#define R6_PLL_WATCHDOG_PLL_WATCHDOG_ADAU1452     0x0    /* 0b	[0] */
#define R6_PLL_WATCHDOG_PLL_WATCHDOG_ADAU1452_MASK 0x1
#define R6_PLL_WATCHDOG_PLL_WATCHDOG_ADAU1452_SHIFT 0

/* CLK_GEN1_M (ADAU1452) */
#define R7_CLK_GEN1_M_CLOCKGEN1_M_ADAU1452        0x06   /* 000000110b	[8:0] */
#define R7_CLK_GEN1_M_CLOCKGEN1_M_ADAU1452_MASK   0x1FF
#define R7_CLK_GEN1_M_CLOCKGEN1_M_ADAU1452_SHIFT  0

/* CLK_GEN1_N (ADAU1452) */
#define R8_CLK_GEN1_N_CLOCKGEN1_N_ADAU1452        0x01   /* 000000001b	[8:0] */
#define R8_CLK_GEN1_N_CLOCKGEN1_N_ADAU1452_MASK   0x1FF
#define R8_CLK_GEN1_N_CLOCKGEN1_N_ADAU1452_SHIFT  0

/* CLK_GEN2_M (ADAU1452) */
#define R9_CLK_GEN2_M_CLOCKGEN2_M_ADAU1452        0x09   /* 000001001b	[8:0] */
#define R9_CLK_GEN2_M_CLOCKGEN2_M_ADAU1452_MASK   0x1FF
#define R9_CLK_GEN2_M_CLOCKGEN2_M_ADAU1452_SHIFT  0

/* CLK_GEN2_N (ADAU1452) */
#define R10_CLK_GEN2_N_CLOCKGEN2_N_ADAU1452       0x01   /* 000000001b	[8:0] */
#define R10_CLK_GEN2_N_CLOCKGEN2_N_ADAU1452_MASK  0x1FF
#define R10_CLK_GEN2_N_CLOCKGEN2_N_ADAU1452_SHIFT 0

/* CLK_GEN3_M (ADAU1452) */
#define R11_CLK_GEN3_M_CLOCKGEN3_M_ADAU1452       0x0000 /* 0000000000000000b	[15:0] */
#define R11_CLK_GEN3_M_CLOCKGEN3_M_ADAU1452_MASK  0xFFFF
#define R11_CLK_GEN3_M_CLOCKGEN3_M_ADAU1452_SHIFT 0

/* CLK_GEN3_N (ADAU1452) */
#define R12_CLK_GEN3_N_CLOCKGEN3_N_ADAU1452       0x0000 /* 0000000000000000b	[15:0] */
#define R12_CLK_GEN3_N_CLOCKGEN3_N_ADAU1452_MASK  0xFFFF
#define R12_CLK_GEN3_N_CLOCKGEN3_N_ADAU1452_SHIFT 0

/* CLK_GEN3_SRC (ADAU1452) */
#define R13_CLK_GEN3_SRC_FREF_PIN_ADAU1452        0x0    /* 0000b	[3:0] */
#define R13_CLK_GEN3_SRC_CLK_GEN3_SRC_ADAU1452    0x0    /* 0b	[4] */
#define R13_CLK_GEN3_SRC_FREF_PIN_ADAU1452_MASK   0xF
#define R13_CLK_GEN3_SRC_FREF_PIN_ADAU1452_SHIFT  0
#define R13_CLK_GEN3_SRC_CLK_GEN3_SRC_ADAU1452_MASK 0x10
#define R13_CLK_GEN3_SRC_CLK_GEN3_SRC_ADAU1452_SHIFT 4

/* CLK_GEN3_LOCK (ADAU1452) */
#define R14_CLK_GEN3_LOCK_GEN3_LOCK_ADAU1452      0x0    /* 0b	[0] */
#define R14_CLK_GEN3_LOCK_GEN3_LOCK_ADAU1452_MASK 0x1
#define R14_CLK_GEN3_LOCK_GEN3_LOCK_ADAU1452_SHIFT 0

/* POWER_ENABLE0 (ADAU1452) */
#define R15_POWER_ENABLE0_SIN0_PWR_ADAU1452       0x0    /* 0b	[0] */
#define R15_POWER_ENABLE0_SIN1_PWR_ADAU1452       0x1    /* 1b	[1] */
#define R15_POWER_ENABLE0_SIN2_PWR_ADAU1452       0x1    /* 1b	[2] */
#define R15_POWER_ENABLE0_SIN3_PWR_ADAU1452       0x1    /* 1b	[3] */
#define R15_POWER_ENABLE0_SOUT0_PWR_ADAU1452      0x0    /* 0b	[4] */
#define R15_POWER_ENABLE0_SOUT1_PWR_ADAU1452      0x1    /* 1b	[5] */
#define R15_POWER_ENABLE0_SOUT2_PWR_ADAU1452      0x1    /* 1b	[6] */
#define R15_POWER_ENABLE0_SOUT3_PWR_ADAU1452      0x1    /* 1b	[7] */
#define R15_POWER_ENABLE0_ASRCBANK0_PWR_ADAU1452  0x1    /* 1b	[8] */
#define R15_POWER_ENABLE0_ASRCBANK1_PWR_ADAU1452  0x1    /* 1b	[9] */
#define R15_POWER_ENABLE0_CLK_GEN1_PWR_ADAU1452   0x1    /* 1b	[10] */
#define R15_POWER_ENABLE0_CLK_GEN2_PWR_ADAU1452   0x1    /* 1b	[11] */
#define R15_POWER_ENABLE0_CLK_GEN3_PWR_ADAU1452   0x1    /* 1b	[12] */
#define R15_POWER_ENABLE0_SIN0_PWR_ADAU1452_MASK  0x1
#define R15_POWER_ENABLE0_SIN0_PWR_ADAU1452_SHIFT 0
#define R15_POWER_ENABLE0_SIN1_PWR_ADAU1452_MASK  0x2
#define R15_POWER_ENABLE0_SIN1_PWR_ADAU1452_SHIFT 1
#define R15_POWER_ENABLE0_SIN2_PWR_ADAU1452_MASK  0x4
#define R15_POWER_ENABLE0_SIN2_PWR_ADAU1452_SHIFT 2
#define R15_POWER_ENABLE0_SIN3_PWR_ADAU1452_MASK  0x8
#define R15_POWER_ENABLE0_SIN3_PWR_ADAU1452_SHIFT 3
#define R15_POWER_ENABLE0_SOUT0_PWR_ADAU1452_MASK 0x10
#define R15_POWER_ENABLE0_SOUT0_PWR_ADAU1452_SHIFT 4
#define R15_POWER_ENABLE0_SOUT1_PWR_ADAU1452_MASK 0x20
#define R15_POWER_ENABLE0_SOUT1_PWR_ADAU1452_SHIFT 5
#define R15_POWER_ENABLE0_SOUT2_PWR_ADAU1452_MASK 0x40
#define R15_POWER_ENABLE0_SOUT2_PWR_ADAU1452_SHIFT 6
#define R15_POWER_ENABLE0_SOUT3_PWR_ADAU1452_MASK 0x80
#define R15_POWER_ENABLE0_SOUT3_PWR_ADAU1452_SHIFT 7
#define R15_POWER_ENABLE0_ASRCBANK0_PWR_ADAU1452_MASK 0x100
#define R15_POWER_ENABLE0_ASRCBANK0_PWR_ADAU1452_SHIFT 8
#define R15_POWER_ENABLE0_ASRCBANK1_PWR_ADAU1452_MASK 0x200
#define R15_POWER_ENABLE0_ASRCBANK1_PWR_ADAU1452_SHIFT 9
#define R15_POWER_ENABLE0_CLK_GEN1_PWR_ADAU1452_MASK 0x400
#define R15_POWER_ENABLE0_CLK_GEN1_PWR_ADAU1452_SHIFT 10
#define R15_POWER_ENABLE0_CLK_GEN2_PWR_ADAU1452_MASK 0x800
#define R15_POWER_ENABLE0_CLK_GEN2_PWR_ADAU1452_SHIFT 11
#define R15_POWER_ENABLE0_CLK_GEN3_PWR_ADAU1452_MASK 0x1000
#define R15_POWER_ENABLE0_CLK_GEN3_PWR_ADAU1452_SHIFT 12

/* POWER_ENABLE1 (ADAU1452) */
#define R16_POWER_ENABLE1_ADC_PWR_ADAU1452        0x1    /* 1b	[0] */
#define R16_POWER_ENABLE1_RX_PWR_ADAU1452         0x1    /* 1b	[1] */
#define R16_POWER_ENABLE1_TX_PWR_ADAU1452         0x1    /* 1b	[2] */
#define R16_POWER_ENABLE1_PDM0_PWR_ADAU1452       0x1    /* 1b	[3] */
#define R16_POWER_ENABLE1_PDM1_PWR_ADAU1452       0x1    /* 1b	[4] */
#define R16_POWER_ENABLE1_ADC_PWR_ADAU1452_MASK   0x1
#define R16_POWER_ENABLE1_ADC_PWR_ADAU1452_SHIFT  0
#define R16_POWER_ENABLE1_RX_PWR_ADAU1452_MASK    0x2
#define R16_POWER_ENABLE1_RX_PWR_ADAU1452_SHIFT   1
#define R16_POWER_ENABLE1_TX_PWR_ADAU1452_MASK    0x4
#define R16_POWER_ENABLE1_TX_PWR_ADAU1452_SHIFT   2
#define R16_POWER_ENABLE1_PDM0_PWR_ADAU1452_MASK  0x8
#define R16_POWER_ENABLE1_PDM0_PWR_ADAU1452_SHIFT 3
#define R16_POWER_ENABLE1_PDM1_PWR_ADAU1452_MASK  0x10
#define R16_POWER_ENABLE1_PDM1_PWR_ADAU1452_SHIFT 4

/* ASRC_INPUT0 (ADAU1452) */
#define R17_ASRC_INPUT0_ASRC_SOURCE_ADAU1452      0x0    /* 000b	[2:0] */
#define R17_ASRC_INPUT0_ASRC_SIN_CHANNEL_ADAU1452 0x0    /* 00000b	[7:3] */
#define R17_ASRC_INPUT0_ASRC_SOURCE_ADAU1452_MASK 0x7
#define R17_ASRC_INPUT0_ASRC_SOURCE_ADAU1452_SHIFT 0
#define R17_ASRC_INPUT0_ASRC_SIN_CHANNEL_ADAU1452_MASK 0xF8
#define R17_ASRC_INPUT0_ASRC_SIN_CHANNEL_ADAU1452_SHIFT 3

/* ASRC_INPUT1 (ADAU1452) */
#define R18_ASRC_INPUT1_ASRC_SOURCE_ADAU1452      0x0    /* 000b	[2:0] */
#define R18_ASRC_INPUT1_ASRC_SIN_CHANNEL_ADAU1452 0x0    /* 00000b	[7:3] */
#define R18_ASRC_INPUT1_ASRC_SOURCE_ADAU1452_MASK 0x7
#define R18_ASRC_INPUT1_ASRC_SOURCE_ADAU1452_SHIFT 0
#define R18_ASRC_INPUT1_ASRC_SIN_CHANNEL_ADAU1452_MASK 0xF8
#define R18_ASRC_INPUT1_ASRC_SIN_CHANNEL_ADAU1452_SHIFT 3

/* ASRC_INPUT2 (ADAU1452) */
#define R19_ASRC_INPUT2_ASRC_SOURCE_ADAU1452      0x0    /* 000b	[2:0] */
#define R19_ASRC_INPUT2_ASRC_SIN_CHANNEL_ADAU1452 0x0    /* 00000b	[7:3] */
#define R19_ASRC_INPUT2_ASRC_SOURCE_ADAU1452_MASK 0x7
#define R19_ASRC_INPUT2_ASRC_SOURCE_ADAU1452_SHIFT 0
#define R19_ASRC_INPUT2_ASRC_SIN_CHANNEL_ADAU1452_MASK 0xF8
#define R19_ASRC_INPUT2_ASRC_SIN_CHANNEL_ADAU1452_SHIFT 3

/* ASRC_INPUT3 (ADAU1452) */
#define R20_ASRC_INPUT3_ASRC_SOURCE_ADAU1452      0x0    /* 000b	[2:0] */
#define R20_ASRC_INPUT3_ASRC_SIN_CHANNEL_ADAU1452 0x0    /* 00000b	[7:3] */
#define R20_ASRC_INPUT3_ASRC_SOURCE_ADAU1452_MASK 0x7
#define R20_ASRC_INPUT3_ASRC_SOURCE_ADAU1452_SHIFT 0
#define R20_ASRC_INPUT3_ASRC_SIN_CHANNEL_ADAU1452_MASK 0xF8
#define R20_ASRC_INPUT3_ASRC_SIN_CHANNEL_ADAU1452_SHIFT 3

/* ASRC_INPUT4 (ADAU1452) */
#define R21_ASRC_INPUT4_ASRC_SOURCE_ADAU1452      0x0    /* 000b	[2:0] */
#define R21_ASRC_INPUT4_ASRC_SIN_CHANNEL_ADAU1452 0x0    /* 00000b	[7:3] */
#define R21_ASRC_INPUT4_ASRC_SOURCE_ADAU1452_MASK 0x7
#define R21_ASRC_INPUT4_ASRC_SOURCE_ADAU1452_SHIFT 0
#define R21_ASRC_INPUT4_ASRC_SIN_CHANNEL_ADAU1452_MASK 0xF8
#define R21_ASRC_INPUT4_ASRC_SIN_CHANNEL_ADAU1452_SHIFT 3

/* ASRC_INPUT5 (ADAU1452) */
#define R22_ASRC_INPUT5_ASRC_SOURCE_ADAU1452      0x0    /* 000b	[2:0] */
#define R22_ASRC_INPUT5_ASRC_SIN_CHANNEL_ADAU1452 0x0    /* 00000b	[7:3] */
#define R22_ASRC_INPUT5_ASRC_SOURCE_ADAU1452_MASK 0x7
#define R22_ASRC_INPUT5_ASRC_SOURCE_ADAU1452_SHIFT 0
#define R22_ASRC_INPUT5_ASRC_SIN_CHANNEL_ADAU1452_MASK 0xF8
#define R22_ASRC_INPUT5_ASRC_SIN_CHANNEL_ADAU1452_SHIFT 3

/* ASRC_INPUT6 (ADAU1452) */
#define R23_ASRC_INPUT6_ASRC_SOURCE_ADAU1452      0x0    /* 000b	[2:0] */
#define R23_ASRC_INPUT6_ASRC_SIN_CHANNEL_ADAU1452 0x0    /* 00000b	[7:3] */
#define R23_ASRC_INPUT6_ASRC_SOURCE_ADAU1452_MASK 0x7
#define R23_ASRC_INPUT6_ASRC_SOURCE_ADAU1452_SHIFT 0
#define R23_ASRC_INPUT6_ASRC_SIN_CHANNEL_ADAU1452_MASK 0xF8
#define R23_ASRC_INPUT6_ASRC_SIN_CHANNEL_ADAU1452_SHIFT 3

/* ASRC_INPUT7 (ADAU1452) */
#define R24_ASRC_INPUT7_ASRC_SOURCE_ADAU1452      0x0    /* 000b	[2:0] */
#define R24_ASRC_INPUT7_ASRC_SIN_CHANNEL_ADAU1452 0x0    /* 00000b	[7:3] */
#define R24_ASRC_INPUT7_ASRC_SOURCE_ADAU1452_MASK 0x7
#define R24_ASRC_INPUT7_ASRC_SOURCE_ADAU1452_SHIFT 0
#define R24_ASRC_INPUT7_ASRC_SIN_CHANNEL_ADAU1452_MASK 0xF8
#define R24_ASRC_INPUT7_ASRC_SIN_CHANNEL_ADAU1452_SHIFT 3

/* ASRC_OUT_RATE0 (ADAU1452) */
#define R25_ASRC_OUT_RATE0_ASRC_RATE_ADAU1452     0x0    /* 0000b	[3:0] */
#define R25_ASRC_OUT_RATE0_ASRC_RATE_ADAU1452_MASK 0xF
#define R25_ASRC_OUT_RATE0_ASRC_RATE_ADAU1452_SHIFT 0

/* ASRC_OUT_RATE1 (ADAU1452) */
#define R26_ASRC_OUT_RATE1_ASRC_RATE_ADAU1452     0x0    /* 0000b	[3:0] */
#define R26_ASRC_OUT_RATE1_ASRC_RATE_ADAU1452_MASK 0xF
#define R26_ASRC_OUT_RATE1_ASRC_RATE_ADAU1452_SHIFT 0

/* ASRC_OUT_RATE2 (ADAU1452) */
#define R27_ASRC_OUT_RATE2_ASRC_RATE_ADAU1452     0x0    /* 0000b	[3:0] */
#define R27_ASRC_OUT_RATE2_ASRC_RATE_ADAU1452_MASK 0xF
#define R27_ASRC_OUT_RATE2_ASRC_RATE_ADAU1452_SHIFT 0

/* ASRC_OUT_RATE3 (ADAU1452) */
#define R28_ASRC_OUT_RATE3_ASRC_RATE_ADAU1452     0x0    /* 0000b	[3:0] */
#define R28_ASRC_OUT_RATE3_ASRC_RATE_ADAU1452_MASK 0xF
#define R28_ASRC_OUT_RATE3_ASRC_RATE_ADAU1452_SHIFT 0

/* ASRC_OUT_RATE4 (ADAU1452) */
#define R29_ASRC_OUT_RATE4_ASRC_RATE_ADAU1452     0x0    /* 0000b	[3:0] */
#define R29_ASRC_OUT_RATE4_ASRC_RATE_ADAU1452_MASK 0xF
#define R29_ASRC_OUT_RATE4_ASRC_RATE_ADAU1452_SHIFT 0

/* ASRC_OUT_RATE5 (ADAU1452) */
#define R30_ASRC_OUT_RATE5_ASRC_RATE_ADAU1452     0x0    /* 0000b	[3:0] */
#define R30_ASRC_OUT_RATE5_ASRC_RATE_ADAU1452_MASK 0xF
#define R30_ASRC_OUT_RATE5_ASRC_RATE_ADAU1452_SHIFT 0

/* ASRC_OUT_RATE6 (ADAU1452) */
#define R31_ASRC_OUT_RATE6_ASRC_RATE_ADAU1452     0x0    /* 0000b	[3:0] */
#define R31_ASRC_OUT_RATE6_ASRC_RATE_ADAU1452_MASK 0xF
#define R31_ASRC_OUT_RATE6_ASRC_RATE_ADAU1452_SHIFT 0

/* ASRC_OUT_RATE7 (ADAU1452) */
#define R32_ASRC_OUT_RATE7_ASRC_RATE_ADAU1452     0x0    /* 0000b	[3:0] */
#define R32_ASRC_OUT_RATE7_ASRC_RATE_ADAU1452_MASK 0xF
#define R32_ASRC_OUT_RATE7_ASRC_RATE_ADAU1452_SHIFT 0

/* SOUT_SOURCE0 (ADAU1452) */
#define R33_SOUT_SOURCE0_SOUT_SOURCE_ADAU1452     0x2    /* 010b	[2:0] */
#define R33_SOUT_SOURCE0_SOUT_ASRC_SELECT_ADAU1452 0x0   /* 000b	[5:3] */
#define R33_SOUT_SOURCE0_SOUT_SOURCE_ADAU1452_MASK 0x7
#define R33_SOUT_SOURCE0_SOUT_SOURCE_ADAU1452_SHIFT 0
#define R33_SOUT_SOURCE0_SOUT_ASRC_SELECT_ADAU1452_MASK 0x38
#define R33_SOUT_SOURCE0_SOUT_ASRC_SELECT_ADAU1452_SHIFT 3

/* SOUT_SOURCE1 (ADAU1452) */
#define R34_SOUT_SOURCE1_SOUT_SOURCE_ADAU1452     0x2    /* 010b	[2:0] */
#define R34_SOUT_SOURCE1_SOUT_ASRC_SELECT_ADAU1452 0x0   /* 000b	[5:3] */
#define R34_SOUT_SOURCE1_SOUT_SOURCE_ADAU1452_MASK 0x7
#define R34_SOUT_SOURCE1_SOUT_SOURCE_ADAU1452_SHIFT 0
#define R34_SOUT_SOURCE1_SOUT_ASRC_SELECT_ADAU1452_MASK 0x38
#define R34_SOUT_SOURCE1_SOUT_ASRC_SELECT_ADAU1452_SHIFT 3

/* SOUT_SOURCE2 (ADAU1452) */
#define R35_SOUT_SOURCE2_SOUT_SOURCE_ADAU1452     0x2    /* 010b	[2:0] */
#define R35_SOUT_SOURCE2_SOUT_ASRC_SELECT_ADAU1452 0x0   /* 000b	[5:3] */
#define R35_SOUT_SOURCE2_SOUT_SOURCE_ADAU1452_MASK 0x7
#define R35_SOUT_SOURCE2_SOUT_SOURCE_ADAU1452_SHIFT 0
#define R35_SOUT_SOURCE2_SOUT_ASRC_SELECT_ADAU1452_MASK 0x38
#define R35_SOUT_SOURCE2_SOUT_ASRC_SELECT_ADAU1452_SHIFT 3

/* SOUT_SOURCE3 (ADAU1452) */
#define R36_SOUT_SOURCE3_SOUT_SOURCE_ADAU1452     0x2    /* 010b	[2:0] */
#define R36_SOUT_SOURCE3_SOUT_ASRC_SELECT_ADAU1452 0x0   /* 000b	[5:3] */
#define R36_SOUT_SOURCE3_SOUT_SOURCE_ADAU1452_MASK 0x7
#define R36_SOUT_SOURCE3_SOUT_SOURCE_ADAU1452_SHIFT 0
#define R36_SOUT_SOURCE3_SOUT_ASRC_SELECT_ADAU1452_MASK 0x38
#define R36_SOUT_SOURCE3_SOUT_ASRC_SELECT_ADAU1452_SHIFT 3

/* SOUT_SOURCE4 (ADAU1452) */
#define R37_SOUT_SOURCE4_SOUT_SOURCE_ADAU1452     0x2    /* 010b	[2:0] */
#define R37_SOUT_SOURCE4_SOUT_ASRC_SELECT_ADAU1452 0x0   /* 000b	[5:3] */
#define R37_SOUT_SOURCE4_SOUT_SOURCE_ADAU1452_MASK 0x7
#define R37_SOUT_SOURCE4_SOUT_SOURCE_ADAU1452_SHIFT 0
#define R37_SOUT_SOURCE4_SOUT_ASRC_SELECT_ADAU1452_MASK 0x38
#define R37_SOUT_SOURCE4_SOUT_ASRC_SELECT_ADAU1452_SHIFT 3

/* SOUT_SOURCE5 (ADAU1452) */
#define R38_SOUT_SOURCE5_SOUT_SOURCE_ADAU1452     0x2    /* 010b	[2:0] */
#define R38_SOUT_SOURCE5_SOUT_ASRC_SELECT_ADAU1452 0x0   /* 000b	[5:3] */
#define R38_SOUT_SOURCE5_SOUT_SOURCE_ADAU1452_MASK 0x7
#define R38_SOUT_SOURCE5_SOUT_SOURCE_ADAU1452_SHIFT 0
#define R38_SOUT_SOURCE5_SOUT_ASRC_SELECT_ADAU1452_MASK 0x38
#define R38_SOUT_SOURCE5_SOUT_ASRC_SELECT_ADAU1452_SHIFT 3

/* SOUT_SOURCE6 (ADAU1452) */
#define R39_SOUT_SOURCE6_SOUT_SOURCE_ADAU1452     0x2    /* 010b	[2:0] */
#define R39_SOUT_SOURCE6_SOUT_ASRC_SELECT_ADAU1452 0x0   /* 000b	[5:3] */
#define R39_SOUT_SOURCE6_SOUT_SOURCE_ADAU1452_MASK 0x7
#define R39_SOUT_SOURCE6_SOUT_SOURCE_ADAU1452_SHIFT 0
#define R39_SOUT_SOURCE6_SOUT_ASRC_SELECT_ADAU1452_MASK 0x38
#define R39_SOUT_SOURCE6_SOUT_ASRC_SELECT_ADAU1452_SHIFT 3

/* SOUT_SOURCE7 (ADAU1452) */
#define R40_SOUT_SOURCE7_SOUT_SOURCE_ADAU1452     0x2    /* 010b	[2:0] */
#define R40_SOUT_SOURCE7_SOUT_ASRC_SELECT_ADAU1452 0x0   /* 000b	[5:3] */
#define R40_SOUT_SOURCE7_SOUT_SOURCE_ADAU1452_MASK 0x7
#define R40_SOUT_SOURCE7_SOUT_SOURCE_ADAU1452_SHIFT 0
#define R40_SOUT_SOURCE7_SOUT_ASRC_SELECT_ADAU1452_MASK 0x38
#define R40_SOUT_SOURCE7_SOUT_ASRC_SELECT_ADAU1452_SHIFT 3

/* SOUT_SOURCE8 (ADAU1452) */
#define R41_SOUT_SOURCE8_SOUT_SOURCE_ADAU1452     0x2    /* 010b	[2:0] */
#define R41_SOUT_SOURCE8_SOUT_ASRC_SELECT_ADAU1452 0x0   /* 000b	[5:3] */
#define R41_SOUT_SOURCE8_SOUT_SOURCE_ADAU1452_MASK 0x7
#define R41_SOUT_SOURCE8_SOUT_SOURCE_ADAU1452_SHIFT 0
#define R41_SOUT_SOURCE8_SOUT_ASRC_SELECT_ADAU1452_MASK 0x38
#define R41_SOUT_SOURCE8_SOUT_ASRC_SELECT_ADAU1452_SHIFT 3

/* SOUT_SOURCE9 (ADAU1452) */
#define R42_SOUT_SOURCE9_SOUT_SOURCE_ADAU1452     0x2    /* 010b	[2:0] */
#define R42_SOUT_SOURCE9_SOUT_ASRC_SELECT_ADAU1452 0x0   /* 000b	[5:3] */
#define R42_SOUT_SOURCE9_SOUT_SOURCE_ADAU1452_MASK 0x7
#define R42_SOUT_SOURCE9_SOUT_SOURCE_ADAU1452_SHIFT 0
#define R42_SOUT_SOURCE9_SOUT_ASRC_SELECT_ADAU1452_MASK 0x38
#define R42_SOUT_SOURCE9_SOUT_ASRC_SELECT_ADAU1452_SHIFT 3

/* SOUT_SOURCE10 (ADAU1452) */
#define R43_SOUT_SOURCE10_SOUT_SOURCE_ADAU1452    0x2    /* 010b	[2:0] */
#define R43_SOUT_SOURCE10_SOUT_ASRC_SELECT_ADAU1452 0x0  /* 000b	[5:3] */
#define R43_SOUT_SOURCE10_SOUT_SOURCE_ADAU1452_MASK 0x7
#define R43_SOUT_SOURCE10_SOUT_SOURCE_ADAU1452_SHIFT 0
#define R43_SOUT_SOURCE10_SOUT_ASRC_SELECT_ADAU1452_MASK 0x38
#define R43_SOUT_SOURCE10_SOUT_ASRC_SELECT_ADAU1452_SHIFT 3

/* SOUT_SOURCE11 (ADAU1452) */
#define R44_SOUT_SOURCE11_SOUT_SOURCE_ADAU1452    0x2    /* 010b	[2:0] */
#define R44_SOUT_SOURCE11_SOUT_ASRC_SELECT_ADAU1452 0x0  /* 000b	[5:3] */
#define R44_SOUT_SOURCE11_SOUT_SOURCE_ADAU1452_MASK 0x7
#define R44_SOUT_SOURCE11_SOUT_SOURCE_ADAU1452_SHIFT 0
#define R44_SOUT_SOURCE11_SOUT_ASRC_SELECT_ADAU1452_MASK 0x38
#define R44_SOUT_SOURCE11_SOUT_ASRC_SELECT_ADAU1452_SHIFT 3

/* SOUT_SOURCE12 (ADAU1452) */
#define R45_SOUT_SOURCE12_SOUT_SOURCE_ADAU1452    0x2    /* 010b	[2:0] */
#define R45_SOUT_SOURCE12_SOUT_ASRC_SELECT_ADAU1452 0x0  /* 000b	[5:3] */
#define R45_SOUT_SOURCE12_SOUT_SOURCE_ADAU1452_MASK 0x7
#define R45_SOUT_SOURCE12_SOUT_SOURCE_ADAU1452_SHIFT 0
#define R45_SOUT_SOURCE12_SOUT_ASRC_SELECT_ADAU1452_MASK 0x38
#define R45_SOUT_SOURCE12_SOUT_ASRC_SELECT_ADAU1452_SHIFT 3

/* SOUT_SOURCE13 (ADAU1452) */
#define R46_SOUT_SOURCE13_SOUT_SOURCE_ADAU1452    0x2    /* 010b	[2:0] */
#define R46_SOUT_SOURCE13_SOUT_ASRC_SELECT_ADAU1452 0x0  /* 000b	[5:3] */
#define R46_SOUT_SOURCE13_SOUT_SOURCE_ADAU1452_MASK 0x7
#define R46_SOUT_SOURCE13_SOUT_SOURCE_ADAU1452_SHIFT 0
#define R46_SOUT_SOURCE13_SOUT_ASRC_SELECT_ADAU1452_MASK 0x38
#define R46_SOUT_SOURCE13_SOUT_ASRC_SELECT_ADAU1452_SHIFT 3

/* SOUT_SOURCE14 (ADAU1452) */
#define R47_SOUT_SOURCE14_SOUT_SOURCE_ADAU1452    0x2    /* 010b	[2:0] */
#define R47_SOUT_SOURCE14_SOUT_ASRC_SELECT_ADAU1452 0x0  /* 000b	[5:3] */
#define R47_SOUT_SOURCE14_SOUT_SOURCE_ADAU1452_MASK 0x7
#define R47_SOUT_SOURCE14_SOUT_SOURCE_ADAU1452_SHIFT 0
#define R47_SOUT_SOURCE14_SOUT_ASRC_SELECT_ADAU1452_MASK 0x38
#define R47_SOUT_SOURCE14_SOUT_ASRC_SELECT_ADAU1452_SHIFT 3

/* SOUT_SOURCE15 (ADAU1452) */
#define R48_SOUT_SOURCE15_SOUT_SOURCE_ADAU1452    0x2    /* 010b	[2:0] */
#define R48_SOUT_SOURCE15_SOUT_ASRC_SELECT_ADAU1452 0x0  /* 000b	[5:3] */
#define R48_SOUT_SOURCE15_SOUT_SOURCE_ADAU1452_MASK 0x7
#define R48_SOUT_SOURCE15_SOUT_SOURCE_ADAU1452_SHIFT 0
#define R48_SOUT_SOURCE15_SOUT_ASRC_SELECT_ADAU1452_MASK 0x38
#define R48_SOUT_SOURCE15_SOUT_ASRC_SELECT_ADAU1452_SHIFT 3

/* SOUT_SOURCE16 (ADAU1452) */
#define R49_SOUT_SOURCE16_SOUT_SOURCE_ADAU1452    0x2    /* 010b	[2:0] */
#define R49_SOUT_SOURCE16_SOUT_ASRC_SELECT_ADAU1452 0x0  /* 000b	[5:3] */
#define R49_SOUT_SOURCE16_SOUT_SOURCE_ADAU1452_MASK 0x7
#define R49_SOUT_SOURCE16_SOUT_SOURCE_ADAU1452_SHIFT 0
#define R49_SOUT_SOURCE16_SOUT_ASRC_SELECT_ADAU1452_MASK 0x38
#define R49_SOUT_SOURCE16_SOUT_ASRC_SELECT_ADAU1452_SHIFT 3

/* SOUT_SOURCE17 (ADAU1452) */
#define R50_SOUT_SOURCE17_SOUT_SOURCE_ADAU1452    0x2    /* 010b	[2:0] */
#define R50_SOUT_SOURCE17_SOUT_ASRC_SELECT_ADAU1452 0x0  /* 000b	[5:3] */
#define R50_SOUT_SOURCE17_SOUT_SOURCE_ADAU1452_MASK 0x7
#define R50_SOUT_SOURCE17_SOUT_SOURCE_ADAU1452_SHIFT 0
#define R50_SOUT_SOURCE17_SOUT_ASRC_SELECT_ADAU1452_MASK 0x38
#define R50_SOUT_SOURCE17_SOUT_ASRC_SELECT_ADAU1452_SHIFT 3

/* SOUT_SOURCE18 (ADAU1452) */
#define R51_SOUT_SOURCE18_SOUT_SOURCE_ADAU1452    0x2    /* 010b	[2:0] */
#define R51_SOUT_SOURCE18_SOUT_ASRC_SELECT_ADAU1452 0x0  /* 000b	[5:3] */
#define R51_SOUT_SOURCE18_SOUT_SOURCE_ADAU1452_MASK 0x7
#define R51_SOUT_SOURCE18_SOUT_SOURCE_ADAU1452_SHIFT 0
#define R51_SOUT_SOURCE18_SOUT_ASRC_SELECT_ADAU1452_MASK 0x38
#define R51_SOUT_SOURCE18_SOUT_ASRC_SELECT_ADAU1452_SHIFT 3

/* SOUT_SOURCE19 (ADAU1452) */
#define R52_SOUT_SOURCE19_SOUT_SOURCE_ADAU1452    0x2    /* 010b	[2:0] */
#define R52_SOUT_SOURCE19_SOUT_ASRC_SELECT_ADAU1452 0x0  /* 000b	[5:3] */
#define R52_SOUT_SOURCE19_SOUT_SOURCE_ADAU1452_MASK 0x7
#define R52_SOUT_SOURCE19_SOUT_SOURCE_ADAU1452_SHIFT 0
#define R52_SOUT_SOURCE19_SOUT_ASRC_SELECT_ADAU1452_MASK 0x38
#define R52_SOUT_SOURCE19_SOUT_ASRC_SELECT_ADAU1452_SHIFT 3

/* SOUT_SOURCE20 (ADAU1452) */
#define R53_SOUT_SOURCE20_SOUT_SOURCE_ADAU1452    0x2    /* 010b	[2:0] */
#define R53_SOUT_SOURCE20_SOUT_ASRC_SELECT_ADAU1452 0x0  /* 000b	[5:3] */
#define R53_SOUT_SOURCE20_SOUT_SOURCE_ADAU1452_MASK 0x7
#define R53_SOUT_SOURCE20_SOUT_SOURCE_ADAU1452_SHIFT 0
#define R53_SOUT_SOURCE20_SOUT_ASRC_SELECT_ADAU1452_MASK 0x38
#define R53_SOUT_SOURCE20_SOUT_ASRC_SELECT_ADAU1452_SHIFT 3

/* SOUT_SOURCE21 (ADAU1452) */
#define R54_SOUT_SOURCE21_SOUT_SOURCE_ADAU1452    0x2    /* 010b	[2:0] */
#define R54_SOUT_SOURCE21_SOUT_ASRC_SELECT_ADAU1452 0x0  /* 000b	[5:3] */
#define R54_SOUT_SOURCE21_SOUT_SOURCE_ADAU1452_MASK 0x7
#define R54_SOUT_SOURCE21_SOUT_SOURCE_ADAU1452_SHIFT 0
#define R54_SOUT_SOURCE21_SOUT_ASRC_SELECT_ADAU1452_MASK 0x38
#define R54_SOUT_SOURCE21_SOUT_ASRC_SELECT_ADAU1452_SHIFT 3

/* SOUT_SOURCE22 (ADAU1452) */
#define R55_SOUT_SOURCE22_SOUT_SOURCE_ADAU1452    0x2    /* 010b	[2:0] */
#define R55_SOUT_SOURCE22_SOUT_ASRC_SELECT_ADAU1452 0x0  /* 000b	[5:3] */
#define R55_SOUT_SOURCE22_SOUT_SOURCE_ADAU1452_MASK 0x7
#define R55_SOUT_SOURCE22_SOUT_SOURCE_ADAU1452_SHIFT 0
#define R55_SOUT_SOURCE22_SOUT_ASRC_SELECT_ADAU1452_MASK 0x38
#define R55_SOUT_SOURCE22_SOUT_ASRC_SELECT_ADAU1452_SHIFT 3

/* SOUT_SOURCE23 (ADAU1452) */
#define R56_SOUT_SOURCE23_SOUT_SOURCE_ADAU1452    0x2    /* 010b	[2:0] */
#define R56_SOUT_SOURCE23_SOUT_ASRC_SELECT_ADAU1452 0x0  /* 000b	[5:3] */
#define R56_SOUT_SOURCE23_SOUT_SOURCE_ADAU1452_MASK 0x7
#define R56_SOUT_SOURCE23_SOUT_SOURCE_ADAU1452_SHIFT 0
#define R56_SOUT_SOURCE23_SOUT_ASRC_SELECT_ADAU1452_MASK 0x38
#define R56_SOUT_SOURCE23_SOUT_ASRC_SELECT_ADAU1452_SHIFT 3

/* SPDIFTX_INPUT (ADAU1452) */
#define R57_SPDIFTX_INPUT_SPDIFTX_SOURCE_ADAU1452 0x1    /* 01b	[1:0] */
#define R57_SPDIFTX_INPUT_SPDIFTX_SOURCE_ADAU1452_MASK 0x3
#define R57_SPDIFTX_INPUT_SPDIFTX_SOURCE_ADAU1452_SHIFT 0

/* SERIAL_BYTE_0_0 (ADAU1452) */
#define R58_SERIAL_BYTE_0_0_TDM_MODE_ADAU1452     0x2    /* 010b	[2:0] */
#define R58_SERIAL_BYTE_0_0_DATA_FMT_ADAU1452     0x1    /* 01b	[4:3] */
#define R58_SERIAL_BYTE_0_0_WORD_LEN_ADAU1452     0x0    /* 00b	[6:5] */
#define R58_SERIAL_BYTE_0_0_BCLK_POL_ADAU1452     0x1    /* 1b	[7] */
#define R58_SERIAL_BYTE_0_0_LRCLK_POL_ADAU1452    0x1    /* 1b	[8] */
#define R58_SERIAL_BYTE_0_0_LRCLK_MODE_ADAU1452   0x1    /* 1b	[9] */
#define R58_SERIAL_BYTE_0_0_BCLK_SRC_ADAU1452     0x4    /* 100b	[12:10] */
#define R58_SERIAL_BYTE_0_0_LRCLK_SRC_ADAU1452    0x4    /* 100b	[15:13] */
#define R58_SERIAL_BYTE_0_0_TDM_MODE_ADAU1452_MASK 0x7
#define R58_SERIAL_BYTE_0_0_TDM_MODE_ADAU1452_SHIFT 0
#define R58_SERIAL_BYTE_0_0_DATA_FMT_ADAU1452_MASK 0x18
#define R58_SERIAL_BYTE_0_0_DATA_FMT_ADAU1452_SHIFT 3
#define R58_SERIAL_BYTE_0_0_WORD_LEN_ADAU1452_MASK 0x60
#define R58_SERIAL_BYTE_0_0_WORD_LEN_ADAU1452_SHIFT 5
#define R58_SERIAL_BYTE_0_0_BCLK_POL_ADAU1452_MASK 0x80
#define R58_SERIAL_BYTE_0_0_BCLK_POL_ADAU1452_SHIFT 7
#define R58_SERIAL_BYTE_0_0_LRCLK_POL_ADAU1452_MASK 0x100
#define R58_SERIAL_BYTE_0_0_LRCLK_POL_ADAU1452_SHIFT 8
#define R58_SERIAL_BYTE_0_0_LRCLK_MODE_ADAU1452_MASK 0x200
#define R58_SERIAL_BYTE_0_0_LRCLK_MODE_ADAU1452_SHIFT 9
#define R58_SERIAL_BYTE_0_0_BCLK_SRC_ADAU1452_MASK 0x1C00
#define R58_SERIAL_BYTE_0_0_BCLK_SRC_ADAU1452_SHIFT 10
#define R58_SERIAL_BYTE_0_0_LRCLK_SRC_ADAU1452_MASK 0xE000
#define R58_SERIAL_BYTE_0_0_LRCLK_SRC_ADAU1452_SHIFT 13

/* SERIAL_BYTE_0_1 (ADAU1452) */
#define R59_SERIAL_BYTE_0_1_FS_ADAU1452           0x2    /* 010b	[2:0] */
#define R59_SERIAL_BYTE_0_1_CLK_DOMAIN_ADAU1452   0x0    /* 00b	[4:3] */
#define R59_SERIAL_BYTE_0_1_TRISTATE_ADAU1452     0x0    /* 0b	[5] */
#define R59_SERIAL_BYTE_0_1_FS_ADAU1452_MASK      0x7
#define R59_SERIAL_BYTE_0_1_FS_ADAU1452_SHIFT     0
#define R59_SERIAL_BYTE_0_1_CLK_DOMAIN_ADAU1452_MASK 0x18
#define R59_SERIAL_BYTE_0_1_CLK_DOMAIN_ADAU1452_SHIFT 3
#define R59_SERIAL_BYTE_0_1_TRISTATE_ADAU1452_MASK 0x20
#define R59_SERIAL_BYTE_0_1_TRISTATE_ADAU1452_SHIFT 5

/* SERIAL_BYTE_1_0 (ADAU1452) */
#define R60_SERIAL_BYTE_1_0_TDM_MODE_ADAU1452     0x3    /* 011b	[2:0] */
#define R60_SERIAL_BYTE_1_0_DATA_FMT_ADAU1452     0x0    /* 00b	[4:3] */
#define R60_SERIAL_BYTE_1_0_WORD_LEN_ADAU1452     0x0    /* 00b	[6:5] */
#define R60_SERIAL_BYTE_1_0_BCLK_POL_ADAU1452     0x1    /* 1b	[7] */
#define R60_SERIAL_BYTE_1_0_LRCLK_POL_ADAU1452    0x1    /* 1b	[8] */
#define R60_SERIAL_BYTE_1_0_LRCLK_MODE_ADAU1452   0x1    /* 1b	[9] */
#define R60_SERIAL_BYTE_1_0_BCLK_SRC_ADAU1452     0x4    /* 100b	[12:10] */
#define R60_SERIAL_BYTE_1_0_LRCLK_SRC_ADAU1452    0x4    /* 100b	[15:13] */
#define R60_SERIAL_BYTE_1_0_TDM_MODE_ADAU1452_MASK 0x7
#define R60_SERIAL_BYTE_1_0_TDM_MODE_ADAU1452_SHIFT 0
#define R60_SERIAL_BYTE_1_0_DATA_FMT_ADAU1452_MASK 0x18
#define R60_SERIAL_BYTE_1_0_DATA_FMT_ADAU1452_SHIFT 3
#define R60_SERIAL_BYTE_1_0_WORD_LEN_ADAU1452_MASK 0x60
#define R60_SERIAL_BYTE_1_0_WORD_LEN_ADAU1452_SHIFT 5
#define R60_SERIAL_BYTE_1_0_BCLK_POL_ADAU1452_MASK 0x80
#define R60_SERIAL_BYTE_1_0_BCLK_POL_ADAU1452_SHIFT 7
#define R60_SERIAL_BYTE_1_0_LRCLK_POL_ADAU1452_MASK 0x100
#define R60_SERIAL_BYTE_1_0_LRCLK_POL_ADAU1452_SHIFT 8
#define R60_SERIAL_BYTE_1_0_LRCLK_MODE_ADAU1452_MASK 0x200
#define R60_SERIAL_BYTE_1_0_LRCLK_MODE_ADAU1452_SHIFT 9
#define R60_SERIAL_BYTE_1_0_BCLK_SRC_ADAU1452_MASK 0x1C00
#define R60_SERIAL_BYTE_1_0_BCLK_SRC_ADAU1452_SHIFT 10
#define R60_SERIAL_BYTE_1_0_LRCLK_SRC_ADAU1452_MASK 0xE000
#define R60_SERIAL_BYTE_1_0_LRCLK_SRC_ADAU1452_SHIFT 13

/* SERIAL_BYTE_1_1 (ADAU1452) */
#define R61_SERIAL_BYTE_1_1_FS_ADAU1452           0x2    /* 010b	[2:0] */
#define R61_SERIAL_BYTE_1_1_CLK_DOMAIN_ADAU1452   0x0    /* 00b	[4:3] */
#define R61_SERIAL_BYTE_1_1_TRISTATE_ADAU1452     0x0    /* 0b	[5] */
#define R61_SERIAL_BYTE_1_1_FS_ADAU1452_MASK      0x7
#define R61_SERIAL_BYTE_1_1_FS_ADAU1452_SHIFT     0
#define R61_SERIAL_BYTE_1_1_CLK_DOMAIN_ADAU1452_MASK 0x18
#define R61_SERIAL_BYTE_1_1_CLK_DOMAIN_ADAU1452_SHIFT 3
#define R61_SERIAL_BYTE_1_1_TRISTATE_ADAU1452_MASK 0x20
#define R61_SERIAL_BYTE_1_1_TRISTATE_ADAU1452_SHIFT 5

/* SERIAL_BYTE_2_0 (ADAU1452) */
#define R62_SERIAL_BYTE_2_0_TDM_MODE_ADAU1452     0x1    /* 001b	[2:0] */
#define R62_SERIAL_BYTE_2_0_DATA_FMT_ADAU1452     0x1    /* 01b	[4:3] */
#define R62_SERIAL_BYTE_2_0_WORD_LEN_ADAU1452     0x0    /* 00b	[6:5] */
#define R62_SERIAL_BYTE_2_0_BCLK_POL_ADAU1452     0x1    /* 1b	[7] */
#define R62_SERIAL_BYTE_2_0_LRCLK_POL_ADAU1452    0x1    /* 1b	[8] */
#define R62_SERIAL_BYTE_2_0_LRCLK_MODE_ADAU1452   0x0    /* 0b	[9] */
#define R62_SERIAL_BYTE_2_0_BCLK_SRC_ADAU1452     0x4    /* 100b	[12:10] */
#define R62_SERIAL_BYTE_2_0_LRCLK_SRC_ADAU1452    0x4    /* 100b	[15:13] */
#define R62_SERIAL_BYTE_2_0_TDM_MODE_ADAU1452_MASK 0x7
#define R62_SERIAL_BYTE_2_0_TDM_MODE_ADAU1452_SHIFT 0
#define R62_SERIAL_BYTE_2_0_DATA_FMT_ADAU1452_MASK 0x18
#define R62_SERIAL_BYTE_2_0_DATA_FMT_ADAU1452_SHIFT 3
#define R62_SERIAL_BYTE_2_0_WORD_LEN_ADAU1452_MASK 0x60
#define R62_SERIAL_BYTE_2_0_WORD_LEN_ADAU1452_SHIFT 5
#define R62_SERIAL_BYTE_2_0_BCLK_POL_ADAU1452_MASK 0x80
#define R62_SERIAL_BYTE_2_0_BCLK_POL_ADAU1452_SHIFT 7
#define R62_SERIAL_BYTE_2_0_LRCLK_POL_ADAU1452_MASK 0x100
#define R62_SERIAL_BYTE_2_0_LRCLK_POL_ADAU1452_SHIFT 8
#define R62_SERIAL_BYTE_2_0_LRCLK_MODE_ADAU1452_MASK 0x200
#define R62_SERIAL_BYTE_2_0_LRCLK_MODE_ADAU1452_SHIFT 9
#define R62_SERIAL_BYTE_2_0_BCLK_SRC_ADAU1452_MASK 0x1C00
#define R62_SERIAL_BYTE_2_0_BCLK_SRC_ADAU1452_SHIFT 10
#define R62_SERIAL_BYTE_2_0_LRCLK_SRC_ADAU1452_MASK 0xE000
#define R62_SERIAL_BYTE_2_0_LRCLK_SRC_ADAU1452_SHIFT 13

/* SERIAL_BYTE_2_1 (ADAU1452) */
#define R63_SERIAL_BYTE_2_1_FS_ADAU1452           0x2    /* 010b	[2:0] */
#define R63_SERIAL_BYTE_2_1_CLK_DOMAIN_ADAU1452   0x0    /* 00b	[4:3] */
#define R63_SERIAL_BYTE_2_1_TRISTATE_ADAU1452     0x0    /* 0b	[5] */
#define R63_SERIAL_BYTE_2_1_FS_ADAU1452_MASK      0x7
#define R63_SERIAL_BYTE_2_1_FS_ADAU1452_SHIFT     0
#define R63_SERIAL_BYTE_2_1_CLK_DOMAIN_ADAU1452_MASK 0x18
#define R63_SERIAL_BYTE_2_1_CLK_DOMAIN_ADAU1452_SHIFT 3
#define R63_SERIAL_BYTE_2_1_TRISTATE_ADAU1452_MASK 0x20
#define R63_SERIAL_BYTE_2_1_TRISTATE_ADAU1452_SHIFT 5

/* SERIAL_BYTE_3_0 (ADAU1452) */
#define R64_SERIAL_BYTE_3_0_TDM_MODE_ADAU1452     0x1    /* 001b	[2:0] */
#define R64_SERIAL_BYTE_3_0_DATA_FMT_ADAU1452     0x1    /* 01b	[4:3] */
#define R64_SERIAL_BYTE_3_0_WORD_LEN_ADAU1452     0x0    /* 00b	[6:5] */
#define R64_SERIAL_BYTE_3_0_BCLK_POL_ADAU1452     0x1    /* 1b	[7] */
#define R64_SERIAL_BYTE_3_0_LRCLK_POL_ADAU1452    0x1    /* 1b	[8] */
#define R64_SERIAL_BYTE_3_0_LRCLK_MODE_ADAU1452   0x0    /* 0b	[9] */
#define R64_SERIAL_BYTE_3_0_BCLK_SRC_ADAU1452     0x4    /* 100b	[12:10] */
#define R64_SERIAL_BYTE_3_0_LRCLK_SRC_ADAU1452    0x4    /* 100b	[15:13] */
#define R64_SERIAL_BYTE_3_0_TDM_MODE_ADAU1452_MASK 0x7
#define R64_SERIAL_BYTE_3_0_TDM_MODE_ADAU1452_SHIFT 0
#define R64_SERIAL_BYTE_3_0_DATA_FMT_ADAU1452_MASK 0x18
#define R64_SERIAL_BYTE_3_0_DATA_FMT_ADAU1452_SHIFT 3
#define R64_SERIAL_BYTE_3_0_WORD_LEN_ADAU1452_MASK 0x60
#define R64_SERIAL_BYTE_3_0_WORD_LEN_ADAU1452_SHIFT 5
#define R64_SERIAL_BYTE_3_0_BCLK_POL_ADAU1452_MASK 0x80
#define R64_SERIAL_BYTE_3_0_BCLK_POL_ADAU1452_SHIFT 7
#define R64_SERIAL_BYTE_3_0_LRCLK_POL_ADAU1452_MASK 0x100
#define R64_SERIAL_BYTE_3_0_LRCLK_POL_ADAU1452_SHIFT 8
#define R64_SERIAL_BYTE_3_0_LRCLK_MODE_ADAU1452_MASK 0x200
#define R64_SERIAL_BYTE_3_0_LRCLK_MODE_ADAU1452_SHIFT 9
#define R64_SERIAL_BYTE_3_0_BCLK_SRC_ADAU1452_MASK 0x1C00
#define R64_SERIAL_BYTE_3_0_BCLK_SRC_ADAU1452_SHIFT 10
#define R64_SERIAL_BYTE_3_0_LRCLK_SRC_ADAU1452_MASK 0xE000
#define R64_SERIAL_BYTE_3_0_LRCLK_SRC_ADAU1452_SHIFT 13

/* SERIAL_BYTE_3_1 (ADAU1452) */
#define R65_SERIAL_BYTE_3_1_FS_ADAU1452           0x2    /* 010b	[2:0] */
#define R65_SERIAL_BYTE_3_1_CLK_DOMAIN_ADAU1452   0x0    /* 00b	[4:3] */
#define R65_SERIAL_BYTE_3_1_TRISTATE_ADAU1452     0x0    /* 0b	[5] */
#define R65_SERIAL_BYTE_3_1_FS_ADAU1452_MASK      0x7
#define R65_SERIAL_BYTE_3_1_FS_ADAU1452_SHIFT     0
#define R65_SERIAL_BYTE_3_1_CLK_DOMAIN_ADAU1452_MASK 0x18
#define R65_SERIAL_BYTE_3_1_CLK_DOMAIN_ADAU1452_SHIFT 3
#define R65_SERIAL_BYTE_3_1_TRISTATE_ADAU1452_MASK 0x20
#define R65_SERIAL_BYTE_3_1_TRISTATE_ADAU1452_SHIFT 5

/* SERIAL_BYTE_4_0 (ADAU1452) */
#define R66_SERIAL_BYTE_4_0_TDM_MODE_ADAU1452     0x2    /* 010b	[2:0] */
#define R66_SERIAL_BYTE_4_0_DATA_FMT_ADAU1452     0x1    /* 01b	[4:3] */
#define R66_SERIAL_BYTE_4_0_WORD_LEN_ADAU1452     0x0    /* 00b	[6:5] */
#define R66_SERIAL_BYTE_4_0_BCLK_POL_ADAU1452     0x1    /* 1b	[7] */
#define R66_SERIAL_BYTE_4_0_LRCLK_POL_ADAU1452    0x1    /* 1b	[8] */
#define R66_SERIAL_BYTE_4_0_LRCLK_MODE_ADAU1452   0x1    /* 1b	[9] */
#define R66_SERIAL_BYTE_4_0_BCLK_SRC_ADAU1452     0x4    /* 100b	[12:10] */
#define R66_SERIAL_BYTE_4_0_LRCLK_SRC_ADAU1452    0x4    /* 100b	[15:13] */
#define R66_SERIAL_BYTE_4_0_TDM_MODE_ADAU1452_MASK 0x7
#define R66_SERIAL_BYTE_4_0_TDM_MODE_ADAU1452_SHIFT 0
#define R66_SERIAL_BYTE_4_0_DATA_FMT_ADAU1452_MASK 0x18
#define R66_SERIAL_BYTE_4_0_DATA_FMT_ADAU1452_SHIFT 3
#define R66_SERIAL_BYTE_4_0_WORD_LEN_ADAU1452_MASK 0x60
#define R66_SERIAL_BYTE_4_0_WORD_LEN_ADAU1452_SHIFT 5
#define R66_SERIAL_BYTE_4_0_BCLK_POL_ADAU1452_MASK 0x80
#define R66_SERIAL_BYTE_4_0_BCLK_POL_ADAU1452_SHIFT 7
#define R66_SERIAL_BYTE_4_0_LRCLK_POL_ADAU1452_MASK 0x100
#define R66_SERIAL_BYTE_4_0_LRCLK_POL_ADAU1452_SHIFT 8
#define R66_SERIAL_BYTE_4_0_LRCLK_MODE_ADAU1452_MASK 0x200
#define R66_SERIAL_BYTE_4_0_LRCLK_MODE_ADAU1452_SHIFT 9
#define R66_SERIAL_BYTE_4_0_BCLK_SRC_ADAU1452_MASK 0x1C00
#define R66_SERIAL_BYTE_4_0_BCLK_SRC_ADAU1452_SHIFT 10
#define R66_SERIAL_BYTE_4_0_LRCLK_SRC_ADAU1452_MASK 0xE000
#define R66_SERIAL_BYTE_4_0_LRCLK_SRC_ADAU1452_SHIFT 13

/* SERIAL_BYTE_4_1 (ADAU1452) */
#define R67_SERIAL_BYTE_4_1_FS_ADAU1452           0x2    /* 010b	[2:0] */
#define R67_SERIAL_BYTE_4_1_CLK_DOMAIN_ADAU1452   0x0    /* 00b	[4:3] */
#define R67_SERIAL_BYTE_4_1_TRISTATE_ADAU1452     0x0    /* 0b	[5] */
#define R67_SERIAL_BYTE_4_1_FS_ADAU1452_MASK      0x7
#define R67_SERIAL_BYTE_4_1_FS_ADAU1452_SHIFT     0
#define R67_SERIAL_BYTE_4_1_CLK_DOMAIN_ADAU1452_MASK 0x18
#define R67_SERIAL_BYTE_4_1_CLK_DOMAIN_ADAU1452_SHIFT 3
#define R67_SERIAL_BYTE_4_1_TRISTATE_ADAU1452_MASK 0x20
#define R67_SERIAL_BYTE_4_1_TRISTATE_ADAU1452_SHIFT 5

/* SERIAL_BYTE_5_0 (ADAU1452) */
#define R68_SERIAL_BYTE_5_0_TDM_MODE_ADAU1452     0x3    /* 011b	[2:0] */
#define R68_SERIAL_BYTE_5_0_DATA_FMT_ADAU1452     0x1    /* 01b	[4:3] */
#define R68_SERIAL_BYTE_5_0_WORD_LEN_ADAU1452     0x0    /* 00b	[6:5] */
#define R68_SERIAL_BYTE_5_0_BCLK_POL_ADAU1452     0x1    /* 1b	[7] */
#define R68_SERIAL_BYTE_5_0_LRCLK_POL_ADAU1452    0x1    /* 1b	[8] */
#define R68_SERIAL_BYTE_5_0_LRCLK_MODE_ADAU1452   0x1    /* 1b	[9] */
#define R68_SERIAL_BYTE_5_0_BCLK_SRC_ADAU1452     0x4    /* 100b	[12:10] */
#define R68_SERIAL_BYTE_5_0_LRCLK_SRC_ADAU1452    0x4    /* 100b	[15:13] */
#define R68_SERIAL_BYTE_5_0_TDM_MODE_ADAU1452_MASK 0x7
#define R68_SERIAL_BYTE_5_0_TDM_MODE_ADAU1452_SHIFT 0
#define R68_SERIAL_BYTE_5_0_DATA_FMT_ADAU1452_MASK 0x18
#define R68_SERIAL_BYTE_5_0_DATA_FMT_ADAU1452_SHIFT 3
#define R68_SERIAL_BYTE_5_0_WORD_LEN_ADAU1452_MASK 0x60
#define R68_SERIAL_BYTE_5_0_WORD_LEN_ADAU1452_SHIFT 5
#define R68_SERIAL_BYTE_5_0_BCLK_POL_ADAU1452_MASK 0x80
#define R68_SERIAL_BYTE_5_0_BCLK_POL_ADAU1452_SHIFT 7
#define R68_SERIAL_BYTE_5_0_LRCLK_POL_ADAU1452_MASK 0x100
#define R68_SERIAL_BYTE_5_0_LRCLK_POL_ADAU1452_SHIFT 8
#define R68_SERIAL_BYTE_5_0_LRCLK_MODE_ADAU1452_MASK 0x200
#define R68_SERIAL_BYTE_5_0_LRCLK_MODE_ADAU1452_SHIFT 9
#define R68_SERIAL_BYTE_5_0_BCLK_SRC_ADAU1452_MASK 0x1C00
#define R68_SERIAL_BYTE_5_0_BCLK_SRC_ADAU1452_SHIFT 10
#define R68_SERIAL_BYTE_5_0_LRCLK_SRC_ADAU1452_MASK 0xE000
#define R68_SERIAL_BYTE_5_0_LRCLK_SRC_ADAU1452_SHIFT 13

/* SERIAL_BYTE_5_1 (ADAU1452) */
#define R69_SERIAL_BYTE_5_1_FS_ADAU1452           0x2    /* 010b	[2:0] */
#define R69_SERIAL_BYTE_5_1_CLK_DOMAIN_ADAU1452   0x0    /* 00b	[4:3] */
#define R69_SERIAL_BYTE_5_1_TRISTATE_ADAU1452     0x0    /* 0b	[5] */
#define R69_SERIAL_BYTE_5_1_FS_ADAU1452_MASK      0x7
#define R69_SERIAL_BYTE_5_1_FS_ADAU1452_SHIFT     0
#define R69_SERIAL_BYTE_5_1_CLK_DOMAIN_ADAU1452_MASK 0x18
#define R69_SERIAL_BYTE_5_1_CLK_DOMAIN_ADAU1452_SHIFT 3
#define R69_SERIAL_BYTE_5_1_TRISTATE_ADAU1452_MASK 0x20
#define R69_SERIAL_BYTE_5_1_TRISTATE_ADAU1452_SHIFT 5

/* SERIAL_BYTE_6_0 (ADAU1452) */
#define R70_SERIAL_BYTE_6_0_TDM_MODE_ADAU1452     0x2    /* 010b	[2:0] */
#define R70_SERIAL_BYTE_6_0_DATA_FMT_ADAU1452     0x0    /* 00b	[4:3] */
#define R70_SERIAL_BYTE_6_0_WORD_LEN_ADAU1452     0x0    /* 00b	[6:5] */
#define R70_SERIAL_BYTE_6_0_BCLK_POL_ADAU1452     0x1    /* 1b	[7] */
#define R70_SERIAL_BYTE_6_0_LRCLK_POL_ADAU1452    0x1    /* 1b	[8] */
#define R70_SERIAL_BYTE_6_0_LRCLK_MODE_ADAU1452   0x0    /* 0b	[9] */
#define R70_SERIAL_BYTE_6_0_BCLK_SRC_ADAU1452     0x4    /* 100b	[12:10] */
#define R70_SERIAL_BYTE_6_0_LRCLK_SRC_ADAU1452    0x4    /* 100b	[15:13] */
#define R70_SERIAL_BYTE_6_0_TDM_MODE_ADAU1452_MASK 0x7
#define R70_SERIAL_BYTE_6_0_TDM_MODE_ADAU1452_SHIFT 0
#define R70_SERIAL_BYTE_6_0_DATA_FMT_ADAU1452_MASK 0x18
#define R70_SERIAL_BYTE_6_0_DATA_FMT_ADAU1452_SHIFT 3
#define R70_SERIAL_BYTE_6_0_WORD_LEN_ADAU1452_MASK 0x60
#define R70_SERIAL_BYTE_6_0_WORD_LEN_ADAU1452_SHIFT 5
#define R70_SERIAL_BYTE_6_0_BCLK_POL_ADAU1452_MASK 0x80
#define R70_SERIAL_BYTE_6_0_BCLK_POL_ADAU1452_SHIFT 7
#define R70_SERIAL_BYTE_6_0_LRCLK_POL_ADAU1452_MASK 0x100
#define R70_SERIAL_BYTE_6_0_LRCLK_POL_ADAU1452_SHIFT 8
#define R70_SERIAL_BYTE_6_0_LRCLK_MODE_ADAU1452_MASK 0x200
#define R70_SERIAL_BYTE_6_0_LRCLK_MODE_ADAU1452_SHIFT 9
#define R70_SERIAL_BYTE_6_0_BCLK_SRC_ADAU1452_MASK 0x1C00
#define R70_SERIAL_BYTE_6_0_BCLK_SRC_ADAU1452_SHIFT 10
#define R70_SERIAL_BYTE_6_0_LRCLK_SRC_ADAU1452_MASK 0xE000
#define R70_SERIAL_BYTE_6_0_LRCLK_SRC_ADAU1452_SHIFT 13

/* SERIAL_BYTE_6_1 (ADAU1452) */
#define R71_SERIAL_BYTE_6_1_FS_ADAU1452           0x2    /* 010b	[2:0] */
#define R71_SERIAL_BYTE_6_1_CLK_DOMAIN_ADAU1452   0x0    /* 00b	[4:3] */
#define R71_SERIAL_BYTE_6_1_TRISTATE_ADAU1452     0x0    /* 0b	[5] */
#define R71_SERIAL_BYTE_6_1_FS_ADAU1452_MASK      0x7
#define R71_SERIAL_BYTE_6_1_FS_ADAU1452_SHIFT     0
#define R71_SERIAL_BYTE_6_1_CLK_DOMAIN_ADAU1452_MASK 0x18
#define R71_SERIAL_BYTE_6_1_CLK_DOMAIN_ADAU1452_SHIFT 3
#define R71_SERIAL_BYTE_6_1_TRISTATE_ADAU1452_MASK 0x20
#define R71_SERIAL_BYTE_6_1_TRISTATE_ADAU1452_SHIFT 5

/* SERIAL_BYTE_7_0 (ADAU1452) */
#define R72_SERIAL_BYTE_7_0_TDM_MODE_ADAU1452     0x2    /* 010b	[2:0] */
#define R72_SERIAL_BYTE_7_0_DATA_FMT_ADAU1452     0x0    /* 00b	[4:3] */
#define R72_SERIAL_BYTE_7_0_WORD_LEN_ADAU1452     0x0    /* 00b	[6:5] */
#define R72_SERIAL_BYTE_7_0_BCLK_POL_ADAU1452     0x1    /* 1b	[7] */
#define R72_SERIAL_BYTE_7_0_LRCLK_POL_ADAU1452    0x1    /* 1b	[8] */
#define R72_SERIAL_BYTE_7_0_LRCLK_MODE_ADAU1452   0x0    /* 0b	[9] */
#define R72_SERIAL_BYTE_7_0_BCLK_SRC_ADAU1452     0x4    /* 100b	[12:10] */
#define R72_SERIAL_BYTE_7_0_LRCLK_SRC_ADAU1452    0x4    /* 100b	[15:13] */
#define R72_SERIAL_BYTE_7_0_TDM_MODE_ADAU1452_MASK 0x7
#define R72_SERIAL_BYTE_7_0_TDM_MODE_ADAU1452_SHIFT 0
#define R72_SERIAL_BYTE_7_0_DATA_FMT_ADAU1452_MASK 0x18
#define R72_SERIAL_BYTE_7_0_DATA_FMT_ADAU1452_SHIFT 3
#define R72_SERIAL_BYTE_7_0_WORD_LEN_ADAU1452_MASK 0x60
#define R72_SERIAL_BYTE_7_0_WORD_LEN_ADAU1452_SHIFT 5
#define R72_SERIAL_BYTE_7_0_BCLK_POL_ADAU1452_MASK 0x80
#define R72_SERIAL_BYTE_7_0_BCLK_POL_ADAU1452_SHIFT 7
#define R72_SERIAL_BYTE_7_0_LRCLK_POL_ADAU1452_MASK 0x100
#define R72_SERIAL_BYTE_7_0_LRCLK_POL_ADAU1452_SHIFT 8
#define R72_SERIAL_BYTE_7_0_LRCLK_MODE_ADAU1452_MASK 0x200
#define R72_SERIAL_BYTE_7_0_LRCLK_MODE_ADAU1452_SHIFT 9
#define R72_SERIAL_BYTE_7_0_BCLK_SRC_ADAU1452_MASK 0x1C00
#define R72_SERIAL_BYTE_7_0_BCLK_SRC_ADAU1452_SHIFT 10
#define R72_SERIAL_BYTE_7_0_LRCLK_SRC_ADAU1452_MASK 0xE000
#define R72_SERIAL_BYTE_7_0_LRCLK_SRC_ADAU1452_SHIFT 13

/* SERIAL_BYTE_7_1 (ADAU1452) */
#define R73_SERIAL_BYTE_7_1_FS_ADAU1452           0x2    /* 010b	[2:0] */
#define R73_SERIAL_BYTE_7_1_CLK_DOMAIN_ADAU1452   0x0    /* 00b	[4:3] */
#define R73_SERIAL_BYTE_7_1_TRISTATE_ADAU1452     0x0    /* 0b	[5] */
#define R73_SERIAL_BYTE_7_1_FS_ADAU1452_MASK      0x7
#define R73_SERIAL_BYTE_7_1_FS_ADAU1452_SHIFT     0
#define R73_SERIAL_BYTE_7_1_CLK_DOMAIN_ADAU1452_MASK 0x18
#define R73_SERIAL_BYTE_7_1_CLK_DOMAIN_ADAU1452_SHIFT 3
#define R73_SERIAL_BYTE_7_1_TRISTATE_ADAU1452_MASK 0x20
#define R73_SERIAL_BYTE_7_1_TRISTATE_ADAU1452_SHIFT 5

/* FTDM_IN0 (ADAU1452) */
#define R74_FTDM_IN0_BYTE_IN_POS_ADAU1452         0x0    /* 00b	[1:0] */
#define R74_FTDM_IN0_CHANNEL_IN_POS_ADAU1452      0x0    /* 000b	[4:2] */
#define R74_FTDM_IN0_SERIAL_IN_SEL_ADAU1452       0x0    /* 0b	[5] */
#define R74_FTDM_IN0_REVERSE_IN_BYTE_ADAU1452     0x0    /* 0b	[6] */
#define R74_FTDM_IN0_SLOT_ENABLE_IN_ADAU1452      0x0    /* 0b	[7] */
#define R74_FTDM_IN0_BYTE_IN_POS_ADAU1452_MASK    0x3
#define R74_FTDM_IN0_BYTE_IN_POS_ADAU1452_SHIFT   0
#define R74_FTDM_IN0_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R74_FTDM_IN0_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R74_FTDM_IN0_SERIAL_IN_SEL_ADAU1452_MASK  0x20
#define R74_FTDM_IN0_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R74_FTDM_IN0_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R74_FTDM_IN0_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R74_FTDM_IN0_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R74_FTDM_IN0_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN1 (ADAU1452) */
#define R75_FTDM_IN1_BYTE_IN_POS_ADAU1452         0x0    /* 00b	[1:0] */
#define R75_FTDM_IN1_CHANNEL_IN_POS_ADAU1452      0x0    /* 000b	[4:2] */
#define R75_FTDM_IN1_SERIAL_IN_SEL_ADAU1452       0x0    /* 0b	[5] */
#define R75_FTDM_IN1_REVERSE_IN_BYTE_ADAU1452     0x0    /* 0b	[6] */
#define R75_FTDM_IN1_SLOT_ENABLE_IN_ADAU1452      0x0    /* 0b	[7] */
#define R75_FTDM_IN1_BYTE_IN_POS_ADAU1452_MASK    0x3
#define R75_FTDM_IN1_BYTE_IN_POS_ADAU1452_SHIFT   0
#define R75_FTDM_IN1_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R75_FTDM_IN1_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R75_FTDM_IN1_SERIAL_IN_SEL_ADAU1452_MASK  0x20
#define R75_FTDM_IN1_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R75_FTDM_IN1_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R75_FTDM_IN1_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R75_FTDM_IN1_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R75_FTDM_IN1_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN2 (ADAU1452) */
#define R76_FTDM_IN2_BYTE_IN_POS_ADAU1452         0x0    /* 00b	[1:0] */
#define R76_FTDM_IN2_CHANNEL_IN_POS_ADAU1452      0x0    /* 000b	[4:2] */
#define R76_FTDM_IN2_SERIAL_IN_SEL_ADAU1452       0x0    /* 0b	[5] */
#define R76_FTDM_IN2_REVERSE_IN_BYTE_ADAU1452     0x0    /* 0b	[6] */
#define R76_FTDM_IN2_SLOT_ENABLE_IN_ADAU1452      0x0    /* 0b	[7] */
#define R76_FTDM_IN2_BYTE_IN_POS_ADAU1452_MASK    0x3
#define R76_FTDM_IN2_BYTE_IN_POS_ADAU1452_SHIFT   0
#define R76_FTDM_IN2_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R76_FTDM_IN2_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R76_FTDM_IN2_SERIAL_IN_SEL_ADAU1452_MASK  0x20
#define R76_FTDM_IN2_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R76_FTDM_IN2_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R76_FTDM_IN2_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R76_FTDM_IN2_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R76_FTDM_IN2_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN3 (ADAU1452) */
#define R77_FTDM_IN3_BYTE_IN_POS_ADAU1452         0x0    /* 00b	[1:0] */
#define R77_FTDM_IN3_CHANNEL_IN_POS_ADAU1452      0x0    /* 000b	[4:2] */
#define R77_FTDM_IN3_SERIAL_IN_SEL_ADAU1452       0x0    /* 0b	[5] */
#define R77_FTDM_IN3_REVERSE_IN_BYTE_ADAU1452     0x0    /* 0b	[6] */
#define R77_FTDM_IN3_SLOT_ENABLE_IN_ADAU1452      0x0    /* 0b	[7] */
#define R77_FTDM_IN3_BYTE_IN_POS_ADAU1452_MASK    0x3
#define R77_FTDM_IN3_BYTE_IN_POS_ADAU1452_SHIFT   0
#define R77_FTDM_IN3_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R77_FTDM_IN3_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R77_FTDM_IN3_SERIAL_IN_SEL_ADAU1452_MASK  0x20
#define R77_FTDM_IN3_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R77_FTDM_IN3_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R77_FTDM_IN3_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R77_FTDM_IN3_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R77_FTDM_IN3_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN4 (ADAU1452) */
#define R78_FTDM_IN4_BYTE_IN_POS_ADAU1452         0x0    /* 00b	[1:0] */
#define R78_FTDM_IN4_CHANNEL_IN_POS_ADAU1452      0x0    /* 000b	[4:2] */
#define R78_FTDM_IN4_SERIAL_IN_SEL_ADAU1452       0x0    /* 0b	[5] */
#define R78_FTDM_IN4_REVERSE_IN_BYTE_ADAU1452     0x0    /* 0b	[6] */
#define R78_FTDM_IN4_SLOT_ENABLE_IN_ADAU1452      0x0    /* 0b	[7] */
#define R78_FTDM_IN4_BYTE_IN_POS_ADAU1452_MASK    0x3
#define R78_FTDM_IN4_BYTE_IN_POS_ADAU1452_SHIFT   0
#define R78_FTDM_IN4_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R78_FTDM_IN4_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R78_FTDM_IN4_SERIAL_IN_SEL_ADAU1452_MASK  0x20
#define R78_FTDM_IN4_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R78_FTDM_IN4_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R78_FTDM_IN4_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R78_FTDM_IN4_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R78_FTDM_IN4_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN5 (ADAU1452) */
#define R79_FTDM_IN5_BYTE_IN_POS_ADAU1452         0x0    /* 00b	[1:0] */
#define R79_FTDM_IN5_CHANNEL_IN_POS_ADAU1452      0x0    /* 000b	[4:2] */
#define R79_FTDM_IN5_SERIAL_IN_SEL_ADAU1452       0x0    /* 0b	[5] */
#define R79_FTDM_IN5_REVERSE_IN_BYTE_ADAU1452     0x0    /* 0b	[6] */
#define R79_FTDM_IN5_SLOT_ENABLE_IN_ADAU1452      0x0    /* 0b	[7] */
#define R79_FTDM_IN5_BYTE_IN_POS_ADAU1452_MASK    0x3
#define R79_FTDM_IN5_BYTE_IN_POS_ADAU1452_SHIFT   0
#define R79_FTDM_IN5_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R79_FTDM_IN5_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R79_FTDM_IN5_SERIAL_IN_SEL_ADAU1452_MASK  0x20
#define R79_FTDM_IN5_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R79_FTDM_IN5_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R79_FTDM_IN5_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R79_FTDM_IN5_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R79_FTDM_IN5_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN6 (ADAU1452) */
#define R80_FTDM_IN6_BYTE_IN_POS_ADAU1452         0x0    /* 00b	[1:0] */
#define R80_FTDM_IN6_CHANNEL_IN_POS_ADAU1452      0x0    /* 000b	[4:2] */
#define R80_FTDM_IN6_SERIAL_IN_SEL_ADAU1452       0x0    /* 0b	[5] */
#define R80_FTDM_IN6_REVERSE_IN_BYTE_ADAU1452     0x0    /* 0b	[6] */
#define R80_FTDM_IN6_SLOT_ENABLE_IN_ADAU1452      0x0    /* 0b	[7] */
#define R80_FTDM_IN6_BYTE_IN_POS_ADAU1452_MASK    0x3
#define R80_FTDM_IN6_BYTE_IN_POS_ADAU1452_SHIFT   0
#define R80_FTDM_IN6_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R80_FTDM_IN6_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R80_FTDM_IN6_SERIAL_IN_SEL_ADAU1452_MASK  0x20
#define R80_FTDM_IN6_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R80_FTDM_IN6_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R80_FTDM_IN6_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R80_FTDM_IN6_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R80_FTDM_IN6_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN7 (ADAU1452) */
#define R81_FTDM_IN7_BYTE_IN_POS_ADAU1452         0x0    /* 00b	[1:0] */
#define R81_FTDM_IN7_CHANNEL_IN_POS_ADAU1452      0x0    /* 000b	[4:2] */
#define R81_FTDM_IN7_SERIAL_IN_SEL_ADAU1452       0x0    /* 0b	[5] */
#define R81_FTDM_IN7_REVERSE_IN_BYTE_ADAU1452     0x0    /* 0b	[6] */
#define R81_FTDM_IN7_SLOT_ENABLE_IN_ADAU1452      0x0    /* 0b	[7] */
#define R81_FTDM_IN7_BYTE_IN_POS_ADAU1452_MASK    0x3
#define R81_FTDM_IN7_BYTE_IN_POS_ADAU1452_SHIFT   0
#define R81_FTDM_IN7_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R81_FTDM_IN7_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R81_FTDM_IN7_SERIAL_IN_SEL_ADAU1452_MASK  0x20
#define R81_FTDM_IN7_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R81_FTDM_IN7_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R81_FTDM_IN7_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R81_FTDM_IN7_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R81_FTDM_IN7_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN8 (ADAU1452) */
#define R82_FTDM_IN8_BYTE_IN_POS_ADAU1452         0x0    /* 00b	[1:0] */
#define R82_FTDM_IN8_CHANNEL_IN_POS_ADAU1452      0x0    /* 000b	[4:2] */
#define R82_FTDM_IN8_SERIAL_IN_SEL_ADAU1452       0x0    /* 0b	[5] */
#define R82_FTDM_IN8_REVERSE_IN_BYTE_ADAU1452     0x0    /* 0b	[6] */
#define R82_FTDM_IN8_SLOT_ENABLE_IN_ADAU1452      0x0    /* 0b	[7] */
#define R82_FTDM_IN8_BYTE_IN_POS_ADAU1452_MASK    0x3
#define R82_FTDM_IN8_BYTE_IN_POS_ADAU1452_SHIFT   0
#define R82_FTDM_IN8_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R82_FTDM_IN8_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R82_FTDM_IN8_SERIAL_IN_SEL_ADAU1452_MASK  0x20
#define R82_FTDM_IN8_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R82_FTDM_IN8_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R82_FTDM_IN8_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R82_FTDM_IN8_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R82_FTDM_IN8_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN9 (ADAU1452) */
#define R83_FTDM_IN9_BYTE_IN_POS_ADAU1452         0x0    /* 00b	[1:0] */
#define R83_FTDM_IN9_CHANNEL_IN_POS_ADAU1452      0x0    /* 000b	[4:2] */
#define R83_FTDM_IN9_SERIAL_IN_SEL_ADAU1452       0x0    /* 0b	[5] */
#define R83_FTDM_IN9_REVERSE_IN_BYTE_ADAU1452     0x0    /* 0b	[6] */
#define R83_FTDM_IN9_SLOT_ENABLE_IN_ADAU1452      0x0    /* 0b	[7] */
#define R83_FTDM_IN9_BYTE_IN_POS_ADAU1452_MASK    0x3
#define R83_FTDM_IN9_BYTE_IN_POS_ADAU1452_SHIFT   0
#define R83_FTDM_IN9_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R83_FTDM_IN9_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R83_FTDM_IN9_SERIAL_IN_SEL_ADAU1452_MASK  0x20
#define R83_FTDM_IN9_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R83_FTDM_IN9_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R83_FTDM_IN9_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R83_FTDM_IN9_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R83_FTDM_IN9_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN10 (ADAU1452) */
#define R84_FTDM_IN10_BYTE_IN_POS_ADAU1452        0x0    /* 00b	[1:0] */
#define R84_FTDM_IN10_CHANNEL_IN_POS_ADAU1452     0x0    /* 000b	[4:2] */
#define R84_FTDM_IN10_SERIAL_IN_SEL_ADAU1452      0x0    /* 0b	[5] */
#define R84_FTDM_IN10_REVERSE_IN_BYTE_ADAU1452    0x0    /* 0b	[6] */
#define R84_FTDM_IN10_SLOT_ENABLE_IN_ADAU1452     0x0    /* 0b	[7] */
#define R84_FTDM_IN10_BYTE_IN_POS_ADAU1452_MASK   0x3
#define R84_FTDM_IN10_BYTE_IN_POS_ADAU1452_SHIFT  0
#define R84_FTDM_IN10_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R84_FTDM_IN10_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R84_FTDM_IN10_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R84_FTDM_IN10_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R84_FTDM_IN10_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R84_FTDM_IN10_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R84_FTDM_IN10_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R84_FTDM_IN10_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN11 (ADAU1452) */
#define R85_FTDM_IN11_BYTE_IN_POS_ADAU1452        0x0    /* 00b	[1:0] */
#define R85_FTDM_IN11_CHANNEL_IN_POS_ADAU1452     0x0    /* 000b	[4:2] */
#define R85_FTDM_IN11_SERIAL_IN_SEL_ADAU1452      0x0    /* 0b	[5] */
#define R85_FTDM_IN11_REVERSE_IN_BYTE_ADAU1452    0x0    /* 0b	[6] */
#define R85_FTDM_IN11_SLOT_ENABLE_IN_ADAU1452     0x0    /* 0b	[7] */
#define R85_FTDM_IN11_BYTE_IN_POS_ADAU1452_MASK   0x3
#define R85_FTDM_IN11_BYTE_IN_POS_ADAU1452_SHIFT  0
#define R85_FTDM_IN11_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R85_FTDM_IN11_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R85_FTDM_IN11_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R85_FTDM_IN11_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R85_FTDM_IN11_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R85_FTDM_IN11_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R85_FTDM_IN11_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R85_FTDM_IN11_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN12 (ADAU1452) */
#define R86_FTDM_IN12_BYTE_IN_POS_ADAU1452        0x0    /* 00b	[1:0] */
#define R86_FTDM_IN12_CHANNEL_IN_POS_ADAU1452     0x0    /* 000b	[4:2] */
#define R86_FTDM_IN12_SERIAL_IN_SEL_ADAU1452      0x0    /* 0b	[5] */
#define R86_FTDM_IN12_REVERSE_IN_BYTE_ADAU1452    0x0    /* 0b	[6] */
#define R86_FTDM_IN12_SLOT_ENABLE_IN_ADAU1452     0x0    /* 0b	[7] */
#define R86_FTDM_IN12_BYTE_IN_POS_ADAU1452_MASK   0x3
#define R86_FTDM_IN12_BYTE_IN_POS_ADAU1452_SHIFT  0
#define R86_FTDM_IN12_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R86_FTDM_IN12_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R86_FTDM_IN12_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R86_FTDM_IN12_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R86_FTDM_IN12_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R86_FTDM_IN12_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R86_FTDM_IN12_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R86_FTDM_IN12_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN13 (ADAU1452) */
#define R87_FTDM_IN13_BYTE_IN_POS_ADAU1452        0x0    /* 00b	[1:0] */
#define R87_FTDM_IN13_CHANNEL_IN_POS_ADAU1452     0x0    /* 000b	[4:2] */
#define R87_FTDM_IN13_SERIAL_IN_SEL_ADAU1452      0x0    /* 0b	[5] */
#define R87_FTDM_IN13_REVERSE_IN_BYTE_ADAU1452    0x0    /* 0b	[6] */
#define R87_FTDM_IN13_SLOT_ENABLE_IN_ADAU1452     0x0    /* 0b	[7] */
#define R87_FTDM_IN13_BYTE_IN_POS_ADAU1452_MASK   0x3
#define R87_FTDM_IN13_BYTE_IN_POS_ADAU1452_SHIFT  0
#define R87_FTDM_IN13_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R87_FTDM_IN13_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R87_FTDM_IN13_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R87_FTDM_IN13_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R87_FTDM_IN13_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R87_FTDM_IN13_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R87_FTDM_IN13_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R87_FTDM_IN13_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN14 (ADAU1452) */
#define R88_FTDM_IN14_BYTE_IN_POS_ADAU1452        0x0    /* 00b	[1:0] */
#define R88_FTDM_IN14_CHANNEL_IN_POS_ADAU1452     0x0    /* 000b	[4:2] */
#define R88_FTDM_IN14_SERIAL_IN_SEL_ADAU1452      0x0    /* 0b	[5] */
#define R88_FTDM_IN14_REVERSE_IN_BYTE_ADAU1452    0x0    /* 0b	[6] */
#define R88_FTDM_IN14_SLOT_ENABLE_IN_ADAU1452     0x0    /* 0b	[7] */
#define R88_FTDM_IN14_BYTE_IN_POS_ADAU1452_MASK   0x3
#define R88_FTDM_IN14_BYTE_IN_POS_ADAU1452_SHIFT  0
#define R88_FTDM_IN14_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R88_FTDM_IN14_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R88_FTDM_IN14_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R88_FTDM_IN14_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R88_FTDM_IN14_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R88_FTDM_IN14_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R88_FTDM_IN14_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R88_FTDM_IN14_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN15 (ADAU1452) */
#define R89_FTDM_IN15_BYTE_IN_POS_ADAU1452        0x0    /* 00b	[1:0] */
#define R89_FTDM_IN15_CHANNEL_IN_POS_ADAU1452     0x0    /* 000b	[4:2] */
#define R89_FTDM_IN15_SERIAL_IN_SEL_ADAU1452      0x0    /* 0b	[5] */
#define R89_FTDM_IN15_REVERSE_IN_BYTE_ADAU1452    0x0    /* 0b	[6] */
#define R89_FTDM_IN15_SLOT_ENABLE_IN_ADAU1452     0x0    /* 0b	[7] */
#define R89_FTDM_IN15_BYTE_IN_POS_ADAU1452_MASK   0x3
#define R89_FTDM_IN15_BYTE_IN_POS_ADAU1452_SHIFT  0
#define R89_FTDM_IN15_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R89_FTDM_IN15_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R89_FTDM_IN15_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R89_FTDM_IN15_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R89_FTDM_IN15_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R89_FTDM_IN15_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R89_FTDM_IN15_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R89_FTDM_IN15_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN16 (ADAU1452) */
#define R90_FTDM_IN16_BYTE_IN_POS_ADAU1452        0x0    /* 00b	[1:0] */
#define R90_FTDM_IN16_CHANNEL_IN_POS_ADAU1452     0x0    /* 000b	[4:2] */
#define R90_FTDM_IN16_SERIAL_IN_SEL_ADAU1452      0x0    /* 0b	[5] */
#define R90_FTDM_IN16_REVERSE_IN_BYTE_ADAU1452    0x0    /* 0b	[6] */
#define R90_FTDM_IN16_SLOT_ENABLE_IN_ADAU1452     0x0    /* 0b	[7] */
#define R90_FTDM_IN16_BYTE_IN_POS_ADAU1452_MASK   0x3
#define R90_FTDM_IN16_BYTE_IN_POS_ADAU1452_SHIFT  0
#define R90_FTDM_IN16_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R90_FTDM_IN16_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R90_FTDM_IN16_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R90_FTDM_IN16_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R90_FTDM_IN16_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R90_FTDM_IN16_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R90_FTDM_IN16_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R90_FTDM_IN16_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN17 (ADAU1452) */
#define R91_FTDM_IN17_BYTE_IN_POS_ADAU1452        0x0    /* 00b	[1:0] */
#define R91_FTDM_IN17_CHANNEL_IN_POS_ADAU1452     0x0    /* 000b	[4:2] */
#define R91_FTDM_IN17_SERIAL_IN_SEL_ADAU1452      0x0    /* 0b	[5] */
#define R91_FTDM_IN17_REVERSE_IN_BYTE_ADAU1452    0x0    /* 0b	[6] */
#define R91_FTDM_IN17_SLOT_ENABLE_IN_ADAU1452     0x0    /* 0b	[7] */
#define R91_FTDM_IN17_BYTE_IN_POS_ADAU1452_MASK   0x3
#define R91_FTDM_IN17_BYTE_IN_POS_ADAU1452_SHIFT  0
#define R91_FTDM_IN17_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R91_FTDM_IN17_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R91_FTDM_IN17_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R91_FTDM_IN17_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R91_FTDM_IN17_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R91_FTDM_IN17_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R91_FTDM_IN17_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R91_FTDM_IN17_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN18 (ADAU1452) */
#define R92_FTDM_IN18_BYTE_IN_POS_ADAU1452        0x0    /* 00b	[1:0] */
#define R92_FTDM_IN18_CHANNEL_IN_POS_ADAU1452     0x0    /* 000b	[4:2] */
#define R92_FTDM_IN18_SERIAL_IN_SEL_ADAU1452      0x0    /* 0b	[5] */
#define R92_FTDM_IN18_REVERSE_IN_BYTE_ADAU1452    0x0    /* 0b	[6] */
#define R92_FTDM_IN18_SLOT_ENABLE_IN_ADAU1452     0x0    /* 0b	[7] */
#define R92_FTDM_IN18_BYTE_IN_POS_ADAU1452_MASK   0x3
#define R92_FTDM_IN18_BYTE_IN_POS_ADAU1452_SHIFT  0
#define R92_FTDM_IN18_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R92_FTDM_IN18_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R92_FTDM_IN18_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R92_FTDM_IN18_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R92_FTDM_IN18_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R92_FTDM_IN18_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R92_FTDM_IN18_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R92_FTDM_IN18_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN19 (ADAU1452) */
#define R93_FTDM_IN19_BYTE_IN_POS_ADAU1452        0x0    /* 00b	[1:0] */
#define R93_FTDM_IN19_CHANNEL_IN_POS_ADAU1452     0x0    /* 000b	[4:2] */
#define R93_FTDM_IN19_SERIAL_IN_SEL_ADAU1452      0x0    /* 0b	[5] */
#define R93_FTDM_IN19_REVERSE_IN_BYTE_ADAU1452    0x0    /* 0b	[6] */
#define R93_FTDM_IN19_SLOT_ENABLE_IN_ADAU1452     0x0    /* 0b	[7] */
#define R93_FTDM_IN19_BYTE_IN_POS_ADAU1452_MASK   0x3
#define R93_FTDM_IN19_BYTE_IN_POS_ADAU1452_SHIFT  0
#define R93_FTDM_IN19_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R93_FTDM_IN19_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R93_FTDM_IN19_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R93_FTDM_IN19_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R93_FTDM_IN19_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R93_FTDM_IN19_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R93_FTDM_IN19_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R93_FTDM_IN19_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN20 (ADAU1452) */
#define R94_FTDM_IN20_BYTE_IN_POS_ADAU1452        0x0    /* 00b	[1:0] */
#define R94_FTDM_IN20_CHANNEL_IN_POS_ADAU1452     0x0    /* 000b	[4:2] */
#define R94_FTDM_IN20_SERIAL_IN_SEL_ADAU1452      0x0    /* 0b	[5] */
#define R94_FTDM_IN20_REVERSE_IN_BYTE_ADAU1452    0x0    /* 0b	[6] */
#define R94_FTDM_IN20_SLOT_ENABLE_IN_ADAU1452     0x0    /* 0b	[7] */
#define R94_FTDM_IN20_BYTE_IN_POS_ADAU1452_MASK   0x3
#define R94_FTDM_IN20_BYTE_IN_POS_ADAU1452_SHIFT  0
#define R94_FTDM_IN20_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R94_FTDM_IN20_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R94_FTDM_IN20_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R94_FTDM_IN20_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R94_FTDM_IN20_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R94_FTDM_IN20_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R94_FTDM_IN20_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R94_FTDM_IN20_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN21 (ADAU1452) */
#define R95_FTDM_IN21_BYTE_IN_POS_ADAU1452        0x0    /* 00b	[1:0] */
#define R95_FTDM_IN21_CHANNEL_IN_POS_ADAU1452     0x0    /* 000b	[4:2] */
#define R95_FTDM_IN21_SERIAL_IN_SEL_ADAU1452      0x0    /* 0b	[5] */
#define R95_FTDM_IN21_REVERSE_IN_BYTE_ADAU1452    0x0    /* 0b	[6] */
#define R95_FTDM_IN21_SLOT_ENABLE_IN_ADAU1452     0x0    /* 0b	[7] */
#define R95_FTDM_IN21_BYTE_IN_POS_ADAU1452_MASK   0x3
#define R95_FTDM_IN21_BYTE_IN_POS_ADAU1452_SHIFT  0
#define R95_FTDM_IN21_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R95_FTDM_IN21_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R95_FTDM_IN21_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R95_FTDM_IN21_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R95_FTDM_IN21_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R95_FTDM_IN21_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R95_FTDM_IN21_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R95_FTDM_IN21_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN22 (ADAU1452) */
#define R96_FTDM_IN22_BYTE_IN_POS_ADAU1452        0x0    /* 00b	[1:0] */
#define R96_FTDM_IN22_CHANNEL_IN_POS_ADAU1452     0x0    /* 000b	[4:2] */
#define R96_FTDM_IN22_SERIAL_IN_SEL_ADAU1452      0x0    /* 0b	[5] */
#define R96_FTDM_IN22_REVERSE_IN_BYTE_ADAU1452    0x0    /* 0b	[6] */
#define R96_FTDM_IN22_SLOT_ENABLE_IN_ADAU1452     0x0    /* 0b	[7] */
#define R96_FTDM_IN22_BYTE_IN_POS_ADAU1452_MASK   0x3
#define R96_FTDM_IN22_BYTE_IN_POS_ADAU1452_SHIFT  0
#define R96_FTDM_IN22_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R96_FTDM_IN22_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R96_FTDM_IN22_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R96_FTDM_IN22_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R96_FTDM_IN22_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R96_FTDM_IN22_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R96_FTDM_IN22_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R96_FTDM_IN22_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN23 (ADAU1452) */
#define R97_FTDM_IN23_BYTE_IN_POS_ADAU1452        0x0    /* 00b	[1:0] */
#define R97_FTDM_IN23_CHANNEL_IN_POS_ADAU1452     0x0    /* 000b	[4:2] */
#define R97_FTDM_IN23_SERIAL_IN_SEL_ADAU1452      0x0    /* 0b	[5] */
#define R97_FTDM_IN23_REVERSE_IN_BYTE_ADAU1452    0x0    /* 0b	[6] */
#define R97_FTDM_IN23_SLOT_ENABLE_IN_ADAU1452     0x0    /* 0b	[7] */
#define R97_FTDM_IN23_BYTE_IN_POS_ADAU1452_MASK   0x3
#define R97_FTDM_IN23_BYTE_IN_POS_ADAU1452_SHIFT  0
#define R97_FTDM_IN23_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R97_FTDM_IN23_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R97_FTDM_IN23_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R97_FTDM_IN23_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R97_FTDM_IN23_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R97_FTDM_IN23_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R97_FTDM_IN23_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R97_FTDM_IN23_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN24 (ADAU1452) */
#define R98_FTDM_IN24_BYTE_IN_POS_ADAU1452        0x0    /* 00b	[1:0] */
#define R98_FTDM_IN24_CHANNEL_IN_POS_ADAU1452     0x0    /* 000b	[4:2] */
#define R98_FTDM_IN24_SERIAL_IN_SEL_ADAU1452      0x0    /* 0b	[5] */
#define R98_FTDM_IN24_REVERSE_IN_BYTE_ADAU1452    0x0    /* 0b	[6] */
#define R98_FTDM_IN24_SLOT_ENABLE_IN_ADAU1452     0x0    /* 0b	[7] */
#define R98_FTDM_IN24_BYTE_IN_POS_ADAU1452_MASK   0x3
#define R98_FTDM_IN24_BYTE_IN_POS_ADAU1452_SHIFT  0
#define R98_FTDM_IN24_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R98_FTDM_IN24_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R98_FTDM_IN24_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R98_FTDM_IN24_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R98_FTDM_IN24_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R98_FTDM_IN24_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R98_FTDM_IN24_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R98_FTDM_IN24_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN25 (ADAU1452) */
#define R99_FTDM_IN25_BYTE_IN_POS_ADAU1452        0x0    /* 00b	[1:0] */
#define R99_FTDM_IN25_CHANNEL_IN_POS_ADAU1452     0x0    /* 000b	[4:2] */
#define R99_FTDM_IN25_SERIAL_IN_SEL_ADAU1452      0x0    /* 0b	[5] */
#define R99_FTDM_IN25_REVERSE_IN_BYTE_ADAU1452    0x0    /* 0b	[6] */
#define R99_FTDM_IN25_SLOT_ENABLE_IN_ADAU1452     0x0    /* 0b	[7] */
#define R99_FTDM_IN25_BYTE_IN_POS_ADAU1452_MASK   0x3
#define R99_FTDM_IN25_BYTE_IN_POS_ADAU1452_SHIFT  0
#define R99_FTDM_IN25_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R99_FTDM_IN25_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R99_FTDM_IN25_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R99_FTDM_IN25_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R99_FTDM_IN25_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R99_FTDM_IN25_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R99_FTDM_IN25_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R99_FTDM_IN25_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN26 (ADAU1452) */
#define R100_FTDM_IN26_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R100_FTDM_IN26_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R100_FTDM_IN26_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R100_FTDM_IN26_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R100_FTDM_IN26_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R100_FTDM_IN26_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R100_FTDM_IN26_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R100_FTDM_IN26_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R100_FTDM_IN26_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R100_FTDM_IN26_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R100_FTDM_IN26_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R100_FTDM_IN26_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R100_FTDM_IN26_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R100_FTDM_IN26_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R100_FTDM_IN26_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN27 (ADAU1452) */
#define R101_FTDM_IN27_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R101_FTDM_IN27_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R101_FTDM_IN27_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R101_FTDM_IN27_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R101_FTDM_IN27_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R101_FTDM_IN27_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R101_FTDM_IN27_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R101_FTDM_IN27_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R101_FTDM_IN27_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R101_FTDM_IN27_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R101_FTDM_IN27_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R101_FTDM_IN27_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R101_FTDM_IN27_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R101_FTDM_IN27_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R101_FTDM_IN27_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN28 (ADAU1452) */
#define R102_FTDM_IN28_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R102_FTDM_IN28_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R102_FTDM_IN28_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R102_FTDM_IN28_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R102_FTDM_IN28_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R102_FTDM_IN28_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R102_FTDM_IN28_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R102_FTDM_IN28_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R102_FTDM_IN28_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R102_FTDM_IN28_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R102_FTDM_IN28_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R102_FTDM_IN28_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R102_FTDM_IN28_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R102_FTDM_IN28_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R102_FTDM_IN28_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN29 (ADAU1452) */
#define R103_FTDM_IN29_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R103_FTDM_IN29_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R103_FTDM_IN29_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R103_FTDM_IN29_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R103_FTDM_IN29_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R103_FTDM_IN29_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R103_FTDM_IN29_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R103_FTDM_IN29_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R103_FTDM_IN29_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R103_FTDM_IN29_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R103_FTDM_IN29_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R103_FTDM_IN29_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R103_FTDM_IN29_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R103_FTDM_IN29_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R103_FTDM_IN29_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN30 (ADAU1452) */
#define R104_FTDM_IN30_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R104_FTDM_IN30_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R104_FTDM_IN30_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R104_FTDM_IN30_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R104_FTDM_IN30_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R104_FTDM_IN30_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R104_FTDM_IN30_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R104_FTDM_IN30_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R104_FTDM_IN30_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R104_FTDM_IN30_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R104_FTDM_IN30_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R104_FTDM_IN30_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R104_FTDM_IN30_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R104_FTDM_IN30_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R104_FTDM_IN30_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN31 (ADAU1452) */
#define R105_FTDM_IN31_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R105_FTDM_IN31_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R105_FTDM_IN31_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R105_FTDM_IN31_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R105_FTDM_IN31_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R105_FTDM_IN31_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R105_FTDM_IN31_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R105_FTDM_IN31_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R105_FTDM_IN31_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R105_FTDM_IN31_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R105_FTDM_IN31_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R105_FTDM_IN31_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R105_FTDM_IN31_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R105_FTDM_IN31_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R105_FTDM_IN31_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN32 (ADAU1452) */
#define R106_FTDM_IN32_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R106_FTDM_IN32_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R106_FTDM_IN32_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R106_FTDM_IN32_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R106_FTDM_IN32_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R106_FTDM_IN32_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R106_FTDM_IN32_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R106_FTDM_IN32_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R106_FTDM_IN32_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R106_FTDM_IN32_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R106_FTDM_IN32_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R106_FTDM_IN32_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R106_FTDM_IN32_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R106_FTDM_IN32_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R106_FTDM_IN32_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN33 (ADAU1452) */
#define R107_FTDM_IN33_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R107_FTDM_IN33_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R107_FTDM_IN33_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R107_FTDM_IN33_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R107_FTDM_IN33_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R107_FTDM_IN33_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R107_FTDM_IN33_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R107_FTDM_IN33_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R107_FTDM_IN33_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R107_FTDM_IN33_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R107_FTDM_IN33_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R107_FTDM_IN33_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R107_FTDM_IN33_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R107_FTDM_IN33_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R107_FTDM_IN33_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN34 (ADAU1452) */
#define R108_FTDM_IN34_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R108_FTDM_IN34_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R108_FTDM_IN34_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R108_FTDM_IN34_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R108_FTDM_IN34_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R108_FTDM_IN34_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R108_FTDM_IN34_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R108_FTDM_IN34_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R108_FTDM_IN34_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R108_FTDM_IN34_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R108_FTDM_IN34_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R108_FTDM_IN34_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R108_FTDM_IN34_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R108_FTDM_IN34_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R108_FTDM_IN34_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN35 (ADAU1452) */
#define R109_FTDM_IN35_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R109_FTDM_IN35_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R109_FTDM_IN35_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R109_FTDM_IN35_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R109_FTDM_IN35_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R109_FTDM_IN35_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R109_FTDM_IN35_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R109_FTDM_IN35_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R109_FTDM_IN35_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R109_FTDM_IN35_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R109_FTDM_IN35_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R109_FTDM_IN35_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R109_FTDM_IN35_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R109_FTDM_IN35_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R109_FTDM_IN35_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN36 (ADAU1452) */
#define R110_FTDM_IN36_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R110_FTDM_IN36_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R110_FTDM_IN36_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R110_FTDM_IN36_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R110_FTDM_IN36_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R110_FTDM_IN36_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R110_FTDM_IN36_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R110_FTDM_IN36_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R110_FTDM_IN36_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R110_FTDM_IN36_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R110_FTDM_IN36_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R110_FTDM_IN36_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R110_FTDM_IN36_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R110_FTDM_IN36_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R110_FTDM_IN36_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN37 (ADAU1452) */
#define R111_FTDM_IN37_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R111_FTDM_IN37_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R111_FTDM_IN37_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R111_FTDM_IN37_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R111_FTDM_IN37_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R111_FTDM_IN37_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R111_FTDM_IN37_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R111_FTDM_IN37_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R111_FTDM_IN37_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R111_FTDM_IN37_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R111_FTDM_IN37_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R111_FTDM_IN37_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R111_FTDM_IN37_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R111_FTDM_IN37_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R111_FTDM_IN37_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN38 (ADAU1452) */
#define R112_FTDM_IN38_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R112_FTDM_IN38_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R112_FTDM_IN38_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R112_FTDM_IN38_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R112_FTDM_IN38_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R112_FTDM_IN38_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R112_FTDM_IN38_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R112_FTDM_IN38_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R112_FTDM_IN38_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R112_FTDM_IN38_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R112_FTDM_IN38_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R112_FTDM_IN38_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R112_FTDM_IN38_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R112_FTDM_IN38_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R112_FTDM_IN38_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN39 (ADAU1452) */
#define R113_FTDM_IN39_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R113_FTDM_IN39_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R113_FTDM_IN39_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R113_FTDM_IN39_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R113_FTDM_IN39_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R113_FTDM_IN39_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R113_FTDM_IN39_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R113_FTDM_IN39_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R113_FTDM_IN39_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R113_FTDM_IN39_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R113_FTDM_IN39_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R113_FTDM_IN39_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R113_FTDM_IN39_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R113_FTDM_IN39_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R113_FTDM_IN39_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN40 (ADAU1452) */
#define R114_FTDM_IN40_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R114_FTDM_IN40_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R114_FTDM_IN40_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R114_FTDM_IN40_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R114_FTDM_IN40_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R114_FTDM_IN40_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R114_FTDM_IN40_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R114_FTDM_IN40_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R114_FTDM_IN40_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R114_FTDM_IN40_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R114_FTDM_IN40_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R114_FTDM_IN40_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R114_FTDM_IN40_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R114_FTDM_IN40_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R114_FTDM_IN40_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN41 (ADAU1452) */
#define R115_FTDM_IN41_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R115_FTDM_IN41_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R115_FTDM_IN41_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R115_FTDM_IN41_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R115_FTDM_IN41_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R115_FTDM_IN41_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R115_FTDM_IN41_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R115_FTDM_IN41_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R115_FTDM_IN41_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R115_FTDM_IN41_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R115_FTDM_IN41_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R115_FTDM_IN41_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R115_FTDM_IN41_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R115_FTDM_IN41_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R115_FTDM_IN41_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN42 (ADAU1452) */
#define R116_FTDM_IN42_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R116_FTDM_IN42_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R116_FTDM_IN42_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R116_FTDM_IN42_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R116_FTDM_IN42_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R116_FTDM_IN42_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R116_FTDM_IN42_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R116_FTDM_IN42_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R116_FTDM_IN42_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R116_FTDM_IN42_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R116_FTDM_IN42_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R116_FTDM_IN42_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R116_FTDM_IN42_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R116_FTDM_IN42_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R116_FTDM_IN42_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN43 (ADAU1452) */
#define R117_FTDM_IN43_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R117_FTDM_IN43_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R117_FTDM_IN43_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R117_FTDM_IN43_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R117_FTDM_IN43_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R117_FTDM_IN43_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R117_FTDM_IN43_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R117_FTDM_IN43_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R117_FTDM_IN43_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R117_FTDM_IN43_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R117_FTDM_IN43_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R117_FTDM_IN43_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R117_FTDM_IN43_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R117_FTDM_IN43_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R117_FTDM_IN43_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN44 (ADAU1452) */
#define R118_FTDM_IN44_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R118_FTDM_IN44_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R118_FTDM_IN44_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R118_FTDM_IN44_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R118_FTDM_IN44_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R118_FTDM_IN44_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R118_FTDM_IN44_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R118_FTDM_IN44_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R118_FTDM_IN44_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R118_FTDM_IN44_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R118_FTDM_IN44_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R118_FTDM_IN44_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R118_FTDM_IN44_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R118_FTDM_IN44_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R118_FTDM_IN44_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN45 (ADAU1452) */
#define R119_FTDM_IN45_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R119_FTDM_IN45_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R119_FTDM_IN45_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R119_FTDM_IN45_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R119_FTDM_IN45_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R119_FTDM_IN45_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R119_FTDM_IN45_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R119_FTDM_IN45_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R119_FTDM_IN45_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R119_FTDM_IN45_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R119_FTDM_IN45_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R119_FTDM_IN45_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R119_FTDM_IN45_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R119_FTDM_IN45_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R119_FTDM_IN45_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN46 (ADAU1452) */
#define R120_FTDM_IN46_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R120_FTDM_IN46_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R120_FTDM_IN46_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R120_FTDM_IN46_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R120_FTDM_IN46_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R120_FTDM_IN46_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R120_FTDM_IN46_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R120_FTDM_IN46_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R120_FTDM_IN46_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R120_FTDM_IN46_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R120_FTDM_IN46_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R120_FTDM_IN46_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R120_FTDM_IN46_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R120_FTDM_IN46_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R120_FTDM_IN46_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN47 (ADAU1452) */
#define R121_FTDM_IN47_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R121_FTDM_IN47_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R121_FTDM_IN47_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R121_FTDM_IN47_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R121_FTDM_IN47_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R121_FTDM_IN47_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R121_FTDM_IN47_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R121_FTDM_IN47_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R121_FTDM_IN47_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R121_FTDM_IN47_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R121_FTDM_IN47_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R121_FTDM_IN47_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R121_FTDM_IN47_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R121_FTDM_IN47_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R121_FTDM_IN47_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN48 (ADAU1452) */
#define R122_FTDM_IN48_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R122_FTDM_IN48_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R122_FTDM_IN48_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R122_FTDM_IN48_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R122_FTDM_IN48_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R122_FTDM_IN48_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R122_FTDM_IN48_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R122_FTDM_IN48_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R122_FTDM_IN48_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R122_FTDM_IN48_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R122_FTDM_IN48_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R122_FTDM_IN48_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R122_FTDM_IN48_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R122_FTDM_IN48_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R122_FTDM_IN48_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN49 (ADAU1452) */
#define R123_FTDM_IN49_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R123_FTDM_IN49_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R123_FTDM_IN49_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R123_FTDM_IN49_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R123_FTDM_IN49_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R123_FTDM_IN49_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R123_FTDM_IN49_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R123_FTDM_IN49_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R123_FTDM_IN49_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R123_FTDM_IN49_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R123_FTDM_IN49_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R123_FTDM_IN49_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R123_FTDM_IN49_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R123_FTDM_IN49_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R123_FTDM_IN49_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN50 (ADAU1452) */
#define R124_FTDM_IN50_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R124_FTDM_IN50_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R124_FTDM_IN50_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R124_FTDM_IN50_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R124_FTDM_IN50_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R124_FTDM_IN50_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R124_FTDM_IN50_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R124_FTDM_IN50_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R124_FTDM_IN50_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R124_FTDM_IN50_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R124_FTDM_IN50_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R124_FTDM_IN50_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R124_FTDM_IN50_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R124_FTDM_IN50_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R124_FTDM_IN50_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN51 (ADAU1452) */
#define R125_FTDM_IN51_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R125_FTDM_IN51_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R125_FTDM_IN51_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R125_FTDM_IN51_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R125_FTDM_IN51_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R125_FTDM_IN51_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R125_FTDM_IN51_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R125_FTDM_IN51_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R125_FTDM_IN51_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R125_FTDM_IN51_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R125_FTDM_IN51_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R125_FTDM_IN51_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R125_FTDM_IN51_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R125_FTDM_IN51_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R125_FTDM_IN51_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN52 (ADAU1452) */
#define R126_FTDM_IN52_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R126_FTDM_IN52_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R126_FTDM_IN52_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R126_FTDM_IN52_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R126_FTDM_IN52_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R126_FTDM_IN52_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R126_FTDM_IN52_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R126_FTDM_IN52_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R126_FTDM_IN52_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R126_FTDM_IN52_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R126_FTDM_IN52_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R126_FTDM_IN52_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R126_FTDM_IN52_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R126_FTDM_IN52_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R126_FTDM_IN52_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN53 (ADAU1452) */
#define R127_FTDM_IN53_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R127_FTDM_IN53_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R127_FTDM_IN53_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R127_FTDM_IN53_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R127_FTDM_IN53_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R127_FTDM_IN53_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R127_FTDM_IN53_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R127_FTDM_IN53_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R127_FTDM_IN53_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R127_FTDM_IN53_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R127_FTDM_IN53_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R127_FTDM_IN53_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R127_FTDM_IN53_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R127_FTDM_IN53_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R127_FTDM_IN53_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN54 (ADAU1452) */
#define R128_FTDM_IN54_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R128_FTDM_IN54_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R128_FTDM_IN54_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R128_FTDM_IN54_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R128_FTDM_IN54_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R128_FTDM_IN54_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R128_FTDM_IN54_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R128_FTDM_IN54_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R128_FTDM_IN54_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R128_FTDM_IN54_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R128_FTDM_IN54_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R128_FTDM_IN54_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R128_FTDM_IN54_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R128_FTDM_IN54_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R128_FTDM_IN54_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN55 (ADAU1452) */
#define R129_FTDM_IN55_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R129_FTDM_IN55_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R129_FTDM_IN55_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R129_FTDM_IN55_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R129_FTDM_IN55_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R129_FTDM_IN55_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R129_FTDM_IN55_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R129_FTDM_IN55_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R129_FTDM_IN55_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R129_FTDM_IN55_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R129_FTDM_IN55_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R129_FTDM_IN55_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R129_FTDM_IN55_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R129_FTDM_IN55_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R129_FTDM_IN55_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN56 (ADAU1452) */
#define R130_FTDM_IN56_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R130_FTDM_IN56_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R130_FTDM_IN56_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R130_FTDM_IN56_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R130_FTDM_IN56_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R130_FTDM_IN56_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R130_FTDM_IN56_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R130_FTDM_IN56_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R130_FTDM_IN56_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R130_FTDM_IN56_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R130_FTDM_IN56_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R130_FTDM_IN56_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R130_FTDM_IN56_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R130_FTDM_IN56_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R130_FTDM_IN56_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN57 (ADAU1452) */
#define R131_FTDM_IN57_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R131_FTDM_IN57_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R131_FTDM_IN57_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R131_FTDM_IN57_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R131_FTDM_IN57_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R131_FTDM_IN57_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R131_FTDM_IN57_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R131_FTDM_IN57_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R131_FTDM_IN57_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R131_FTDM_IN57_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R131_FTDM_IN57_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R131_FTDM_IN57_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R131_FTDM_IN57_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R131_FTDM_IN57_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R131_FTDM_IN57_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN58 (ADAU1452) */
#define R132_FTDM_IN58_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R132_FTDM_IN58_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R132_FTDM_IN58_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R132_FTDM_IN58_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R132_FTDM_IN58_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R132_FTDM_IN58_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R132_FTDM_IN58_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R132_FTDM_IN58_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R132_FTDM_IN58_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R132_FTDM_IN58_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R132_FTDM_IN58_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R132_FTDM_IN58_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R132_FTDM_IN58_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R132_FTDM_IN58_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R132_FTDM_IN58_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN59 (ADAU1452) */
#define R133_FTDM_IN59_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R133_FTDM_IN59_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R133_FTDM_IN59_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R133_FTDM_IN59_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R133_FTDM_IN59_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R133_FTDM_IN59_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R133_FTDM_IN59_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R133_FTDM_IN59_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R133_FTDM_IN59_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R133_FTDM_IN59_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R133_FTDM_IN59_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R133_FTDM_IN59_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R133_FTDM_IN59_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R133_FTDM_IN59_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R133_FTDM_IN59_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN60 (ADAU1452) */
#define R134_FTDM_IN60_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R134_FTDM_IN60_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R134_FTDM_IN60_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R134_FTDM_IN60_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R134_FTDM_IN60_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R134_FTDM_IN60_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R134_FTDM_IN60_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R134_FTDM_IN60_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R134_FTDM_IN60_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R134_FTDM_IN60_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R134_FTDM_IN60_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R134_FTDM_IN60_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R134_FTDM_IN60_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R134_FTDM_IN60_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R134_FTDM_IN60_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN61 (ADAU1452) */
#define R135_FTDM_IN61_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R135_FTDM_IN61_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R135_FTDM_IN61_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R135_FTDM_IN61_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R135_FTDM_IN61_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R135_FTDM_IN61_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R135_FTDM_IN61_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R135_FTDM_IN61_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R135_FTDM_IN61_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R135_FTDM_IN61_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R135_FTDM_IN61_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R135_FTDM_IN61_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R135_FTDM_IN61_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R135_FTDM_IN61_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R135_FTDM_IN61_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN62 (ADAU1452) */
#define R136_FTDM_IN62_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R136_FTDM_IN62_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R136_FTDM_IN62_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R136_FTDM_IN62_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R136_FTDM_IN62_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R136_FTDM_IN62_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R136_FTDM_IN62_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R136_FTDM_IN62_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R136_FTDM_IN62_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R136_FTDM_IN62_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R136_FTDM_IN62_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R136_FTDM_IN62_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R136_FTDM_IN62_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R136_FTDM_IN62_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R136_FTDM_IN62_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_IN63 (ADAU1452) */
#define R137_FTDM_IN63_BYTE_IN_POS_ADAU1452       0x0    /* 00b	[1:0] */
#define R137_FTDM_IN63_CHANNEL_IN_POS_ADAU1452    0x0    /* 000b	[4:2] */
#define R137_FTDM_IN63_SERIAL_IN_SEL_ADAU1452     0x0    /* 0b	[5] */
#define R137_FTDM_IN63_REVERSE_IN_BYTE_ADAU1452   0x0    /* 0b	[6] */
#define R137_FTDM_IN63_SLOT_ENABLE_IN_ADAU1452    0x0    /* 0b	[7] */
#define R137_FTDM_IN63_BYTE_IN_POS_ADAU1452_MASK  0x3
#define R137_FTDM_IN63_BYTE_IN_POS_ADAU1452_SHIFT 0
#define R137_FTDM_IN63_CHANNEL_IN_POS_ADAU1452_MASK 0x1C
#define R137_FTDM_IN63_CHANNEL_IN_POS_ADAU1452_SHIFT 2
#define R137_FTDM_IN63_SERIAL_IN_SEL_ADAU1452_MASK 0x20
#define R137_FTDM_IN63_SERIAL_IN_SEL_ADAU1452_SHIFT 5
#define R137_FTDM_IN63_REVERSE_IN_BYTE_ADAU1452_MASK 0x40
#define R137_FTDM_IN63_REVERSE_IN_BYTE_ADAU1452_SHIFT 6
#define R137_FTDM_IN63_SLOT_ENABLE_IN_ADAU1452_MASK 0x80
#define R137_FTDM_IN63_SLOT_ENABLE_IN_ADAU1452_SHIFT 7

/* FTDM_OUT0 (ADAU1452) */
#define R138_FTDM_OUT0_BYTE_OUT_POS_ADAU1452      0x0    /* 00b	[1:0] */
#define R138_FTDM_OUT0_CHANNEL_OUT_POS_ADAU1452   0x0    /* 000b	[4:2] */
#define R138_FTDM_OUT0_SERIAL_OUT_SEL_ADAU1452    0x0    /* 0b	[5] */
#define R138_FTDM_OUT0_REVERSE_OUT_BYTE_ADAU1452  0x0    /* 0b	[6] */
#define R138_FTDM_OUT0_SLOT_ENABLE_OUT_ADAU1452   0x0    /* 0b	[7] */
#define R138_FTDM_OUT0_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R138_FTDM_OUT0_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R138_FTDM_OUT0_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R138_FTDM_OUT0_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R138_FTDM_OUT0_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R138_FTDM_OUT0_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R138_FTDM_OUT0_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R138_FTDM_OUT0_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R138_FTDM_OUT0_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R138_FTDM_OUT0_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT1 (ADAU1452) */
#define R139_FTDM_OUT1_BYTE_OUT_POS_ADAU1452      0x0    /* 00b	[1:0] */
#define R139_FTDM_OUT1_CHANNEL_OUT_POS_ADAU1452   0x0    /* 000b	[4:2] */
#define R139_FTDM_OUT1_SERIAL_OUT_SEL_ADAU1452    0x0    /* 0b	[5] */
#define R139_FTDM_OUT1_REVERSE_OUT_BYTE_ADAU1452  0x0    /* 0b	[6] */
#define R139_FTDM_OUT1_SLOT_ENABLE_OUT_ADAU1452   0x0    /* 0b	[7] */
#define R139_FTDM_OUT1_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R139_FTDM_OUT1_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R139_FTDM_OUT1_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R139_FTDM_OUT1_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R139_FTDM_OUT1_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R139_FTDM_OUT1_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R139_FTDM_OUT1_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R139_FTDM_OUT1_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R139_FTDM_OUT1_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R139_FTDM_OUT1_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT2 (ADAU1452) */
#define R140_FTDM_OUT2_BYTE_OUT_POS_ADAU1452      0x0    /* 00b	[1:0] */
#define R140_FTDM_OUT2_CHANNEL_OUT_POS_ADAU1452   0x0    /* 000b	[4:2] */
#define R140_FTDM_OUT2_SERIAL_OUT_SEL_ADAU1452    0x0    /* 0b	[5] */
#define R140_FTDM_OUT2_REVERSE_OUT_BYTE_ADAU1452  0x0    /* 0b	[6] */
#define R140_FTDM_OUT2_SLOT_ENABLE_OUT_ADAU1452   0x0    /* 0b	[7] */
#define R140_FTDM_OUT2_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R140_FTDM_OUT2_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R140_FTDM_OUT2_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R140_FTDM_OUT2_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R140_FTDM_OUT2_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R140_FTDM_OUT2_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R140_FTDM_OUT2_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R140_FTDM_OUT2_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R140_FTDM_OUT2_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R140_FTDM_OUT2_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT3 (ADAU1452) */
#define R141_FTDM_OUT3_BYTE_OUT_POS_ADAU1452      0x0    /* 00b	[1:0] */
#define R141_FTDM_OUT3_CHANNEL_OUT_POS_ADAU1452   0x0    /* 000b	[4:2] */
#define R141_FTDM_OUT3_SERIAL_OUT_SEL_ADAU1452    0x0    /* 0b	[5] */
#define R141_FTDM_OUT3_REVERSE_OUT_BYTE_ADAU1452  0x0    /* 0b	[6] */
#define R141_FTDM_OUT3_SLOT_ENABLE_OUT_ADAU1452   0x0    /* 0b	[7] */
#define R141_FTDM_OUT3_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R141_FTDM_OUT3_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R141_FTDM_OUT3_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R141_FTDM_OUT3_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R141_FTDM_OUT3_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R141_FTDM_OUT3_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R141_FTDM_OUT3_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R141_FTDM_OUT3_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R141_FTDM_OUT3_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R141_FTDM_OUT3_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT4 (ADAU1452) */
#define R142_FTDM_OUT4_BYTE_OUT_POS_ADAU1452      0x0    /* 00b	[1:0] */
#define R142_FTDM_OUT4_CHANNEL_OUT_POS_ADAU1452   0x0    /* 000b	[4:2] */
#define R142_FTDM_OUT4_SERIAL_OUT_SEL_ADAU1452    0x0    /* 0b	[5] */
#define R142_FTDM_OUT4_REVERSE_OUT_BYTE_ADAU1452  0x0    /* 0b	[6] */
#define R142_FTDM_OUT4_SLOT_ENABLE_OUT_ADAU1452   0x0    /* 0b	[7] */
#define R142_FTDM_OUT4_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R142_FTDM_OUT4_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R142_FTDM_OUT4_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R142_FTDM_OUT4_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R142_FTDM_OUT4_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R142_FTDM_OUT4_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R142_FTDM_OUT4_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R142_FTDM_OUT4_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R142_FTDM_OUT4_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R142_FTDM_OUT4_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT5 (ADAU1452) */
#define R143_FTDM_OUT5_BYTE_OUT_POS_ADAU1452      0x0    /* 00b	[1:0] */
#define R143_FTDM_OUT5_CHANNEL_OUT_POS_ADAU1452   0x0    /* 000b	[4:2] */
#define R143_FTDM_OUT5_SERIAL_OUT_SEL_ADAU1452    0x0    /* 0b	[5] */
#define R143_FTDM_OUT5_REVERSE_OUT_BYTE_ADAU1452  0x0    /* 0b	[6] */
#define R143_FTDM_OUT5_SLOT_ENABLE_OUT_ADAU1452   0x0    /* 0b	[7] */
#define R143_FTDM_OUT5_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R143_FTDM_OUT5_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R143_FTDM_OUT5_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R143_FTDM_OUT5_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R143_FTDM_OUT5_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R143_FTDM_OUT5_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R143_FTDM_OUT5_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R143_FTDM_OUT5_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R143_FTDM_OUT5_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R143_FTDM_OUT5_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT6 (ADAU1452) */
#define R144_FTDM_OUT6_BYTE_OUT_POS_ADAU1452      0x0    /* 00b	[1:0] */
#define R144_FTDM_OUT6_CHANNEL_OUT_POS_ADAU1452   0x0    /* 000b	[4:2] */
#define R144_FTDM_OUT6_SERIAL_OUT_SEL_ADAU1452    0x0    /* 0b	[5] */
#define R144_FTDM_OUT6_REVERSE_OUT_BYTE_ADAU1452  0x0    /* 0b	[6] */
#define R144_FTDM_OUT6_SLOT_ENABLE_OUT_ADAU1452   0x0    /* 0b	[7] */
#define R144_FTDM_OUT6_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R144_FTDM_OUT6_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R144_FTDM_OUT6_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R144_FTDM_OUT6_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R144_FTDM_OUT6_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R144_FTDM_OUT6_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R144_FTDM_OUT6_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R144_FTDM_OUT6_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R144_FTDM_OUT6_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R144_FTDM_OUT6_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT7 (ADAU1452) */
#define R145_FTDM_OUT7_BYTE_OUT_POS_ADAU1452      0x0    /* 00b	[1:0] */
#define R145_FTDM_OUT7_CHANNEL_OUT_POS_ADAU1452   0x0    /* 000b	[4:2] */
#define R145_FTDM_OUT7_SERIAL_OUT_SEL_ADAU1452    0x0    /* 0b	[5] */
#define R145_FTDM_OUT7_REVERSE_OUT_BYTE_ADAU1452  0x0    /* 0b	[6] */
#define R145_FTDM_OUT7_SLOT_ENABLE_OUT_ADAU1452   0x0    /* 0b	[7] */
#define R145_FTDM_OUT7_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R145_FTDM_OUT7_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R145_FTDM_OUT7_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R145_FTDM_OUT7_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R145_FTDM_OUT7_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R145_FTDM_OUT7_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R145_FTDM_OUT7_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R145_FTDM_OUT7_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R145_FTDM_OUT7_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R145_FTDM_OUT7_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT8 (ADAU1452) */
#define R146_FTDM_OUT8_BYTE_OUT_POS_ADAU1452      0x0    /* 00b	[1:0] */
#define R146_FTDM_OUT8_CHANNEL_OUT_POS_ADAU1452   0x0    /* 000b	[4:2] */
#define R146_FTDM_OUT8_SERIAL_OUT_SEL_ADAU1452    0x0    /* 0b	[5] */
#define R146_FTDM_OUT8_REVERSE_OUT_BYTE_ADAU1452  0x0    /* 0b	[6] */
#define R146_FTDM_OUT8_SLOT_ENABLE_OUT_ADAU1452   0x0    /* 0b	[7] */
#define R146_FTDM_OUT8_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R146_FTDM_OUT8_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R146_FTDM_OUT8_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R146_FTDM_OUT8_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R146_FTDM_OUT8_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R146_FTDM_OUT8_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R146_FTDM_OUT8_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R146_FTDM_OUT8_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R146_FTDM_OUT8_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R146_FTDM_OUT8_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT9 (ADAU1452) */
#define R147_FTDM_OUT9_BYTE_OUT_POS_ADAU1452      0x0    /* 00b	[1:0] */
#define R147_FTDM_OUT9_CHANNEL_OUT_POS_ADAU1452   0x0    /* 000b	[4:2] */
#define R147_FTDM_OUT9_SERIAL_OUT_SEL_ADAU1452    0x0    /* 0b	[5] */
#define R147_FTDM_OUT9_REVERSE_OUT_BYTE_ADAU1452  0x0    /* 0b	[6] */
#define R147_FTDM_OUT9_SLOT_ENABLE_OUT_ADAU1452   0x0    /* 0b	[7] */
#define R147_FTDM_OUT9_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R147_FTDM_OUT9_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R147_FTDM_OUT9_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R147_FTDM_OUT9_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R147_FTDM_OUT9_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R147_FTDM_OUT9_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R147_FTDM_OUT9_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R147_FTDM_OUT9_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R147_FTDM_OUT9_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R147_FTDM_OUT9_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT10 (ADAU1452) */
#define R148_FTDM_OUT10_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R148_FTDM_OUT10_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R148_FTDM_OUT10_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R148_FTDM_OUT10_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R148_FTDM_OUT10_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R148_FTDM_OUT10_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R148_FTDM_OUT10_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R148_FTDM_OUT10_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R148_FTDM_OUT10_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R148_FTDM_OUT10_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R148_FTDM_OUT10_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R148_FTDM_OUT10_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R148_FTDM_OUT10_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R148_FTDM_OUT10_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R148_FTDM_OUT10_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT11 (ADAU1452) */
#define R149_FTDM_OUT11_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R149_FTDM_OUT11_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R149_FTDM_OUT11_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R149_FTDM_OUT11_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R149_FTDM_OUT11_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R149_FTDM_OUT11_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R149_FTDM_OUT11_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R149_FTDM_OUT11_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R149_FTDM_OUT11_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R149_FTDM_OUT11_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R149_FTDM_OUT11_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R149_FTDM_OUT11_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R149_FTDM_OUT11_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R149_FTDM_OUT11_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R149_FTDM_OUT11_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT12 (ADAU1452) */
#define R150_FTDM_OUT12_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R150_FTDM_OUT12_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R150_FTDM_OUT12_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R150_FTDM_OUT12_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R150_FTDM_OUT12_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R150_FTDM_OUT12_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R150_FTDM_OUT12_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R150_FTDM_OUT12_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R150_FTDM_OUT12_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R150_FTDM_OUT12_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R150_FTDM_OUT12_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R150_FTDM_OUT12_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R150_FTDM_OUT12_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R150_FTDM_OUT12_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R150_FTDM_OUT12_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT13 (ADAU1452) */
#define R151_FTDM_OUT13_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R151_FTDM_OUT13_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R151_FTDM_OUT13_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R151_FTDM_OUT13_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R151_FTDM_OUT13_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R151_FTDM_OUT13_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R151_FTDM_OUT13_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R151_FTDM_OUT13_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R151_FTDM_OUT13_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R151_FTDM_OUT13_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R151_FTDM_OUT13_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R151_FTDM_OUT13_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R151_FTDM_OUT13_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R151_FTDM_OUT13_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R151_FTDM_OUT13_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT14 (ADAU1452) */
#define R152_FTDM_OUT14_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R152_FTDM_OUT14_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R152_FTDM_OUT14_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R152_FTDM_OUT14_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R152_FTDM_OUT14_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R152_FTDM_OUT14_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R152_FTDM_OUT14_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R152_FTDM_OUT14_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R152_FTDM_OUT14_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R152_FTDM_OUT14_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R152_FTDM_OUT14_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R152_FTDM_OUT14_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R152_FTDM_OUT14_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R152_FTDM_OUT14_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R152_FTDM_OUT14_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT15 (ADAU1452) */
#define R153_FTDM_OUT15_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R153_FTDM_OUT15_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R153_FTDM_OUT15_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R153_FTDM_OUT15_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R153_FTDM_OUT15_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R153_FTDM_OUT15_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R153_FTDM_OUT15_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R153_FTDM_OUT15_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R153_FTDM_OUT15_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R153_FTDM_OUT15_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R153_FTDM_OUT15_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R153_FTDM_OUT15_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R153_FTDM_OUT15_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R153_FTDM_OUT15_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R153_FTDM_OUT15_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT16 (ADAU1452) */
#define R154_FTDM_OUT16_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R154_FTDM_OUT16_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R154_FTDM_OUT16_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R154_FTDM_OUT16_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R154_FTDM_OUT16_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R154_FTDM_OUT16_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R154_FTDM_OUT16_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R154_FTDM_OUT16_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R154_FTDM_OUT16_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R154_FTDM_OUT16_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R154_FTDM_OUT16_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R154_FTDM_OUT16_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R154_FTDM_OUT16_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R154_FTDM_OUT16_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R154_FTDM_OUT16_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT17 (ADAU1452) */
#define R155_FTDM_OUT17_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R155_FTDM_OUT17_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R155_FTDM_OUT17_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R155_FTDM_OUT17_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R155_FTDM_OUT17_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R155_FTDM_OUT17_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R155_FTDM_OUT17_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R155_FTDM_OUT17_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R155_FTDM_OUT17_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R155_FTDM_OUT17_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R155_FTDM_OUT17_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R155_FTDM_OUT17_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R155_FTDM_OUT17_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R155_FTDM_OUT17_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R155_FTDM_OUT17_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT18 (ADAU1452) */
#define R156_FTDM_OUT18_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R156_FTDM_OUT18_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R156_FTDM_OUT18_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R156_FTDM_OUT18_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R156_FTDM_OUT18_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R156_FTDM_OUT18_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R156_FTDM_OUT18_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R156_FTDM_OUT18_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R156_FTDM_OUT18_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R156_FTDM_OUT18_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R156_FTDM_OUT18_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R156_FTDM_OUT18_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R156_FTDM_OUT18_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R156_FTDM_OUT18_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R156_FTDM_OUT18_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT19 (ADAU1452) */
#define R157_FTDM_OUT19_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R157_FTDM_OUT19_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R157_FTDM_OUT19_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R157_FTDM_OUT19_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R157_FTDM_OUT19_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R157_FTDM_OUT19_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R157_FTDM_OUT19_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R157_FTDM_OUT19_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R157_FTDM_OUT19_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R157_FTDM_OUT19_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R157_FTDM_OUT19_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R157_FTDM_OUT19_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R157_FTDM_OUT19_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R157_FTDM_OUT19_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R157_FTDM_OUT19_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT20 (ADAU1452) */
#define R158_FTDM_OUT20_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R158_FTDM_OUT20_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R158_FTDM_OUT20_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R158_FTDM_OUT20_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R158_FTDM_OUT20_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R158_FTDM_OUT20_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R158_FTDM_OUT20_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R158_FTDM_OUT20_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R158_FTDM_OUT20_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R158_FTDM_OUT20_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R158_FTDM_OUT20_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R158_FTDM_OUT20_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R158_FTDM_OUT20_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R158_FTDM_OUT20_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R158_FTDM_OUT20_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT21 (ADAU1452) */
#define R159_FTDM_OUT21_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R159_FTDM_OUT21_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R159_FTDM_OUT21_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R159_FTDM_OUT21_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R159_FTDM_OUT21_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R159_FTDM_OUT21_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R159_FTDM_OUT21_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R159_FTDM_OUT21_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R159_FTDM_OUT21_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R159_FTDM_OUT21_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R159_FTDM_OUT21_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R159_FTDM_OUT21_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R159_FTDM_OUT21_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R159_FTDM_OUT21_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R159_FTDM_OUT21_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT22 (ADAU1452) */
#define R160_FTDM_OUT22_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R160_FTDM_OUT22_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R160_FTDM_OUT22_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R160_FTDM_OUT22_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R160_FTDM_OUT22_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R160_FTDM_OUT22_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R160_FTDM_OUT22_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R160_FTDM_OUT22_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R160_FTDM_OUT22_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R160_FTDM_OUT22_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R160_FTDM_OUT22_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R160_FTDM_OUT22_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R160_FTDM_OUT22_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R160_FTDM_OUT22_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R160_FTDM_OUT22_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT23 (ADAU1452) */
#define R161_FTDM_OUT23_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R161_FTDM_OUT23_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R161_FTDM_OUT23_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R161_FTDM_OUT23_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R161_FTDM_OUT23_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R161_FTDM_OUT23_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R161_FTDM_OUT23_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R161_FTDM_OUT23_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R161_FTDM_OUT23_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R161_FTDM_OUT23_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R161_FTDM_OUT23_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R161_FTDM_OUT23_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R161_FTDM_OUT23_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R161_FTDM_OUT23_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R161_FTDM_OUT23_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT24 (ADAU1452) */
#define R162_FTDM_OUT24_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R162_FTDM_OUT24_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R162_FTDM_OUT24_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R162_FTDM_OUT24_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R162_FTDM_OUT24_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R162_FTDM_OUT24_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R162_FTDM_OUT24_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R162_FTDM_OUT24_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R162_FTDM_OUT24_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R162_FTDM_OUT24_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R162_FTDM_OUT24_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R162_FTDM_OUT24_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R162_FTDM_OUT24_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R162_FTDM_OUT24_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R162_FTDM_OUT24_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT25 (ADAU1452) */
#define R163_FTDM_OUT25_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R163_FTDM_OUT25_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R163_FTDM_OUT25_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R163_FTDM_OUT25_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R163_FTDM_OUT25_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R163_FTDM_OUT25_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R163_FTDM_OUT25_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R163_FTDM_OUT25_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R163_FTDM_OUT25_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R163_FTDM_OUT25_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R163_FTDM_OUT25_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R163_FTDM_OUT25_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R163_FTDM_OUT25_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R163_FTDM_OUT25_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R163_FTDM_OUT25_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT26 (ADAU1452) */
#define R164_FTDM_OUT26_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R164_FTDM_OUT26_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R164_FTDM_OUT26_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R164_FTDM_OUT26_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R164_FTDM_OUT26_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R164_FTDM_OUT26_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R164_FTDM_OUT26_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R164_FTDM_OUT26_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R164_FTDM_OUT26_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R164_FTDM_OUT26_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R164_FTDM_OUT26_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R164_FTDM_OUT26_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R164_FTDM_OUT26_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R164_FTDM_OUT26_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R164_FTDM_OUT26_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT27 (ADAU1452) */
#define R165_FTDM_OUT27_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R165_FTDM_OUT27_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R165_FTDM_OUT27_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R165_FTDM_OUT27_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R165_FTDM_OUT27_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R165_FTDM_OUT27_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R165_FTDM_OUT27_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R165_FTDM_OUT27_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R165_FTDM_OUT27_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R165_FTDM_OUT27_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R165_FTDM_OUT27_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R165_FTDM_OUT27_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R165_FTDM_OUT27_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R165_FTDM_OUT27_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R165_FTDM_OUT27_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT28 (ADAU1452) */
#define R166_FTDM_OUT28_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R166_FTDM_OUT28_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R166_FTDM_OUT28_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R166_FTDM_OUT28_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R166_FTDM_OUT28_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R166_FTDM_OUT28_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R166_FTDM_OUT28_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R166_FTDM_OUT28_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R166_FTDM_OUT28_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R166_FTDM_OUT28_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R166_FTDM_OUT28_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R166_FTDM_OUT28_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R166_FTDM_OUT28_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R166_FTDM_OUT28_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R166_FTDM_OUT28_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT29 (ADAU1452) */
#define R167_FTDM_OUT29_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R167_FTDM_OUT29_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R167_FTDM_OUT29_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R167_FTDM_OUT29_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R167_FTDM_OUT29_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R167_FTDM_OUT29_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R167_FTDM_OUT29_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R167_FTDM_OUT29_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R167_FTDM_OUT29_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R167_FTDM_OUT29_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R167_FTDM_OUT29_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R167_FTDM_OUT29_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R167_FTDM_OUT29_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R167_FTDM_OUT29_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R167_FTDM_OUT29_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT30 (ADAU1452) */
#define R168_FTDM_OUT30_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R168_FTDM_OUT30_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R168_FTDM_OUT30_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R168_FTDM_OUT30_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R168_FTDM_OUT30_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R168_FTDM_OUT30_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R168_FTDM_OUT30_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R168_FTDM_OUT30_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R168_FTDM_OUT30_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R168_FTDM_OUT30_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R168_FTDM_OUT30_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R168_FTDM_OUT30_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R168_FTDM_OUT30_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R168_FTDM_OUT30_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R168_FTDM_OUT30_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT31 (ADAU1452) */
#define R169_FTDM_OUT31_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R169_FTDM_OUT31_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R169_FTDM_OUT31_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R169_FTDM_OUT31_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R169_FTDM_OUT31_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R169_FTDM_OUT31_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R169_FTDM_OUT31_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R169_FTDM_OUT31_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R169_FTDM_OUT31_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R169_FTDM_OUT31_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R169_FTDM_OUT31_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R169_FTDM_OUT31_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R169_FTDM_OUT31_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R169_FTDM_OUT31_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R169_FTDM_OUT31_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT32 (ADAU1452) */
#define R170_FTDM_OUT32_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R170_FTDM_OUT32_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R170_FTDM_OUT32_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R170_FTDM_OUT32_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R170_FTDM_OUT32_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R170_FTDM_OUT32_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R170_FTDM_OUT32_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R170_FTDM_OUT32_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R170_FTDM_OUT32_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R170_FTDM_OUT32_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R170_FTDM_OUT32_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R170_FTDM_OUT32_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R170_FTDM_OUT32_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R170_FTDM_OUT32_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R170_FTDM_OUT32_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT33 (ADAU1452) */
#define R171_FTDM_OUT33_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R171_FTDM_OUT33_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R171_FTDM_OUT33_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R171_FTDM_OUT33_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R171_FTDM_OUT33_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R171_FTDM_OUT33_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R171_FTDM_OUT33_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R171_FTDM_OUT33_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R171_FTDM_OUT33_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R171_FTDM_OUT33_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R171_FTDM_OUT33_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R171_FTDM_OUT33_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R171_FTDM_OUT33_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R171_FTDM_OUT33_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R171_FTDM_OUT33_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT34 (ADAU1452) */
#define R172_FTDM_OUT34_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R172_FTDM_OUT34_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R172_FTDM_OUT34_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R172_FTDM_OUT34_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R172_FTDM_OUT34_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R172_FTDM_OUT34_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R172_FTDM_OUT34_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R172_FTDM_OUT34_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R172_FTDM_OUT34_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R172_FTDM_OUT34_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R172_FTDM_OUT34_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R172_FTDM_OUT34_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R172_FTDM_OUT34_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R172_FTDM_OUT34_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R172_FTDM_OUT34_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT35 (ADAU1452) */
#define R173_FTDM_OUT35_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R173_FTDM_OUT35_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R173_FTDM_OUT35_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R173_FTDM_OUT35_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R173_FTDM_OUT35_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R173_FTDM_OUT35_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R173_FTDM_OUT35_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R173_FTDM_OUT35_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R173_FTDM_OUT35_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R173_FTDM_OUT35_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R173_FTDM_OUT35_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R173_FTDM_OUT35_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R173_FTDM_OUT35_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R173_FTDM_OUT35_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R173_FTDM_OUT35_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT36 (ADAU1452) */
#define R174_FTDM_OUT36_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R174_FTDM_OUT36_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R174_FTDM_OUT36_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R174_FTDM_OUT36_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R174_FTDM_OUT36_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R174_FTDM_OUT36_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R174_FTDM_OUT36_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R174_FTDM_OUT36_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R174_FTDM_OUT36_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R174_FTDM_OUT36_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R174_FTDM_OUT36_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R174_FTDM_OUT36_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R174_FTDM_OUT36_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R174_FTDM_OUT36_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R174_FTDM_OUT36_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT37 (ADAU1452) */
#define R175_FTDM_OUT37_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R175_FTDM_OUT37_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R175_FTDM_OUT37_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R175_FTDM_OUT37_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R175_FTDM_OUT37_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R175_FTDM_OUT37_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R175_FTDM_OUT37_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R175_FTDM_OUT37_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R175_FTDM_OUT37_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R175_FTDM_OUT37_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R175_FTDM_OUT37_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R175_FTDM_OUT37_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R175_FTDM_OUT37_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R175_FTDM_OUT37_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R175_FTDM_OUT37_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT38 (ADAU1452) */
#define R176_FTDM_OUT38_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R176_FTDM_OUT38_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R176_FTDM_OUT38_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R176_FTDM_OUT38_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R176_FTDM_OUT38_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R176_FTDM_OUT38_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R176_FTDM_OUT38_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R176_FTDM_OUT38_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R176_FTDM_OUT38_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R176_FTDM_OUT38_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R176_FTDM_OUT38_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R176_FTDM_OUT38_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R176_FTDM_OUT38_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R176_FTDM_OUT38_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R176_FTDM_OUT38_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT39 (ADAU1452) */
#define R177_FTDM_OUT39_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R177_FTDM_OUT39_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R177_FTDM_OUT39_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R177_FTDM_OUT39_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R177_FTDM_OUT39_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R177_FTDM_OUT39_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R177_FTDM_OUT39_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R177_FTDM_OUT39_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R177_FTDM_OUT39_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R177_FTDM_OUT39_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R177_FTDM_OUT39_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R177_FTDM_OUT39_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R177_FTDM_OUT39_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R177_FTDM_OUT39_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R177_FTDM_OUT39_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT40 (ADAU1452) */
#define R178_FTDM_OUT40_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R178_FTDM_OUT40_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R178_FTDM_OUT40_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R178_FTDM_OUT40_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R178_FTDM_OUT40_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R178_FTDM_OUT40_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R178_FTDM_OUT40_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R178_FTDM_OUT40_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R178_FTDM_OUT40_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R178_FTDM_OUT40_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R178_FTDM_OUT40_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R178_FTDM_OUT40_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R178_FTDM_OUT40_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R178_FTDM_OUT40_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R178_FTDM_OUT40_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT41 (ADAU1452) */
#define R179_FTDM_OUT41_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R179_FTDM_OUT41_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R179_FTDM_OUT41_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R179_FTDM_OUT41_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R179_FTDM_OUT41_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R179_FTDM_OUT41_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R179_FTDM_OUT41_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R179_FTDM_OUT41_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R179_FTDM_OUT41_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R179_FTDM_OUT41_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R179_FTDM_OUT41_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R179_FTDM_OUT41_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R179_FTDM_OUT41_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R179_FTDM_OUT41_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R179_FTDM_OUT41_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT42 (ADAU1452) */
#define R180_FTDM_OUT42_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R180_FTDM_OUT42_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R180_FTDM_OUT42_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R180_FTDM_OUT42_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R180_FTDM_OUT42_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R180_FTDM_OUT42_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R180_FTDM_OUT42_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R180_FTDM_OUT42_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R180_FTDM_OUT42_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R180_FTDM_OUT42_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R180_FTDM_OUT42_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R180_FTDM_OUT42_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R180_FTDM_OUT42_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R180_FTDM_OUT42_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R180_FTDM_OUT42_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT43 (ADAU1452) */
#define R181_FTDM_OUT43_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R181_FTDM_OUT43_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R181_FTDM_OUT43_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R181_FTDM_OUT43_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R181_FTDM_OUT43_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R181_FTDM_OUT43_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R181_FTDM_OUT43_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R181_FTDM_OUT43_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R181_FTDM_OUT43_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R181_FTDM_OUT43_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R181_FTDM_OUT43_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R181_FTDM_OUT43_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R181_FTDM_OUT43_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R181_FTDM_OUT43_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R181_FTDM_OUT43_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT44 (ADAU1452) */
#define R182_FTDM_OUT44_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R182_FTDM_OUT44_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R182_FTDM_OUT44_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R182_FTDM_OUT44_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R182_FTDM_OUT44_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R182_FTDM_OUT44_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R182_FTDM_OUT44_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R182_FTDM_OUT44_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R182_FTDM_OUT44_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R182_FTDM_OUT44_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R182_FTDM_OUT44_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R182_FTDM_OUT44_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R182_FTDM_OUT44_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R182_FTDM_OUT44_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R182_FTDM_OUT44_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT45 (ADAU1452) */
#define R183_FTDM_OUT45_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R183_FTDM_OUT45_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R183_FTDM_OUT45_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R183_FTDM_OUT45_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R183_FTDM_OUT45_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R183_FTDM_OUT45_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R183_FTDM_OUT45_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R183_FTDM_OUT45_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R183_FTDM_OUT45_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R183_FTDM_OUT45_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R183_FTDM_OUT45_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R183_FTDM_OUT45_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R183_FTDM_OUT45_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R183_FTDM_OUT45_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R183_FTDM_OUT45_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT46 (ADAU1452) */
#define R184_FTDM_OUT46_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R184_FTDM_OUT46_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R184_FTDM_OUT46_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R184_FTDM_OUT46_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R184_FTDM_OUT46_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R184_FTDM_OUT46_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R184_FTDM_OUT46_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R184_FTDM_OUT46_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R184_FTDM_OUT46_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R184_FTDM_OUT46_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R184_FTDM_OUT46_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R184_FTDM_OUT46_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R184_FTDM_OUT46_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R184_FTDM_OUT46_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R184_FTDM_OUT46_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT47 (ADAU1452) */
#define R185_FTDM_OUT47_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R185_FTDM_OUT47_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R185_FTDM_OUT47_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R185_FTDM_OUT47_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R185_FTDM_OUT47_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R185_FTDM_OUT47_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R185_FTDM_OUT47_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R185_FTDM_OUT47_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R185_FTDM_OUT47_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R185_FTDM_OUT47_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R185_FTDM_OUT47_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R185_FTDM_OUT47_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R185_FTDM_OUT47_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R185_FTDM_OUT47_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R185_FTDM_OUT47_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT48 (ADAU1452) */
#define R186_FTDM_OUT48_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R186_FTDM_OUT48_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R186_FTDM_OUT48_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R186_FTDM_OUT48_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R186_FTDM_OUT48_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R186_FTDM_OUT48_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R186_FTDM_OUT48_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R186_FTDM_OUT48_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R186_FTDM_OUT48_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R186_FTDM_OUT48_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R186_FTDM_OUT48_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R186_FTDM_OUT48_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R186_FTDM_OUT48_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R186_FTDM_OUT48_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R186_FTDM_OUT48_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT49 (ADAU1452) */
#define R187_FTDM_OUT49_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R187_FTDM_OUT49_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R187_FTDM_OUT49_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R187_FTDM_OUT49_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R187_FTDM_OUT49_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R187_FTDM_OUT49_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R187_FTDM_OUT49_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R187_FTDM_OUT49_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R187_FTDM_OUT49_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R187_FTDM_OUT49_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R187_FTDM_OUT49_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R187_FTDM_OUT49_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R187_FTDM_OUT49_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R187_FTDM_OUT49_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R187_FTDM_OUT49_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT50 (ADAU1452) */
#define R188_FTDM_OUT50_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R188_FTDM_OUT50_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R188_FTDM_OUT50_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R188_FTDM_OUT50_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R188_FTDM_OUT50_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R188_FTDM_OUT50_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R188_FTDM_OUT50_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R188_FTDM_OUT50_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R188_FTDM_OUT50_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R188_FTDM_OUT50_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R188_FTDM_OUT50_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R188_FTDM_OUT50_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R188_FTDM_OUT50_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R188_FTDM_OUT50_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R188_FTDM_OUT50_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT51 (ADAU1452) */
#define R189_FTDM_OUT51_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R189_FTDM_OUT51_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R189_FTDM_OUT51_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R189_FTDM_OUT51_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R189_FTDM_OUT51_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R189_FTDM_OUT51_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R189_FTDM_OUT51_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R189_FTDM_OUT51_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R189_FTDM_OUT51_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R189_FTDM_OUT51_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R189_FTDM_OUT51_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R189_FTDM_OUT51_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R189_FTDM_OUT51_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R189_FTDM_OUT51_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R189_FTDM_OUT51_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT52 (ADAU1452) */
#define R190_FTDM_OUT52_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R190_FTDM_OUT52_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R190_FTDM_OUT52_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R190_FTDM_OUT52_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R190_FTDM_OUT52_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R190_FTDM_OUT52_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R190_FTDM_OUT52_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R190_FTDM_OUT52_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R190_FTDM_OUT52_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R190_FTDM_OUT52_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R190_FTDM_OUT52_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R190_FTDM_OUT52_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R190_FTDM_OUT52_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R190_FTDM_OUT52_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R190_FTDM_OUT52_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT53 (ADAU1452) */
#define R191_FTDM_OUT53_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R191_FTDM_OUT53_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R191_FTDM_OUT53_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R191_FTDM_OUT53_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R191_FTDM_OUT53_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R191_FTDM_OUT53_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R191_FTDM_OUT53_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R191_FTDM_OUT53_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R191_FTDM_OUT53_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R191_FTDM_OUT53_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R191_FTDM_OUT53_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R191_FTDM_OUT53_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R191_FTDM_OUT53_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R191_FTDM_OUT53_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R191_FTDM_OUT53_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT54 (ADAU1452) */
#define R192_FTDM_OUT54_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R192_FTDM_OUT54_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R192_FTDM_OUT54_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R192_FTDM_OUT54_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R192_FTDM_OUT54_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R192_FTDM_OUT54_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R192_FTDM_OUT54_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R192_FTDM_OUT54_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R192_FTDM_OUT54_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R192_FTDM_OUT54_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R192_FTDM_OUT54_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R192_FTDM_OUT54_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R192_FTDM_OUT54_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R192_FTDM_OUT54_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R192_FTDM_OUT54_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT55 (ADAU1452) */
#define R193_FTDM_OUT55_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R193_FTDM_OUT55_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R193_FTDM_OUT55_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R193_FTDM_OUT55_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R193_FTDM_OUT55_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R193_FTDM_OUT55_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R193_FTDM_OUT55_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R193_FTDM_OUT55_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R193_FTDM_OUT55_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R193_FTDM_OUT55_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R193_FTDM_OUT55_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R193_FTDM_OUT55_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R193_FTDM_OUT55_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R193_FTDM_OUT55_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R193_FTDM_OUT55_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT56 (ADAU1452) */
#define R194_FTDM_OUT56_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R194_FTDM_OUT56_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R194_FTDM_OUT56_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R194_FTDM_OUT56_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R194_FTDM_OUT56_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R194_FTDM_OUT56_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R194_FTDM_OUT56_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R194_FTDM_OUT56_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R194_FTDM_OUT56_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R194_FTDM_OUT56_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R194_FTDM_OUT56_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R194_FTDM_OUT56_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R194_FTDM_OUT56_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R194_FTDM_OUT56_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R194_FTDM_OUT56_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT57 (ADAU1452) */
#define R195_FTDM_OUT57_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R195_FTDM_OUT57_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R195_FTDM_OUT57_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R195_FTDM_OUT57_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R195_FTDM_OUT57_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R195_FTDM_OUT57_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R195_FTDM_OUT57_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R195_FTDM_OUT57_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R195_FTDM_OUT57_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R195_FTDM_OUT57_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R195_FTDM_OUT57_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R195_FTDM_OUT57_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R195_FTDM_OUT57_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R195_FTDM_OUT57_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R195_FTDM_OUT57_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT58 (ADAU1452) */
#define R196_FTDM_OUT58_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R196_FTDM_OUT58_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R196_FTDM_OUT58_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R196_FTDM_OUT58_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R196_FTDM_OUT58_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R196_FTDM_OUT58_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R196_FTDM_OUT58_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R196_FTDM_OUT58_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R196_FTDM_OUT58_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R196_FTDM_OUT58_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R196_FTDM_OUT58_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R196_FTDM_OUT58_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R196_FTDM_OUT58_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R196_FTDM_OUT58_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R196_FTDM_OUT58_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT59 (ADAU1452) */
#define R197_FTDM_OUT59_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R197_FTDM_OUT59_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R197_FTDM_OUT59_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R197_FTDM_OUT59_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R197_FTDM_OUT59_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R197_FTDM_OUT59_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R197_FTDM_OUT59_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R197_FTDM_OUT59_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R197_FTDM_OUT59_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R197_FTDM_OUT59_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R197_FTDM_OUT59_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R197_FTDM_OUT59_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R197_FTDM_OUT59_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R197_FTDM_OUT59_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R197_FTDM_OUT59_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT60 (ADAU1452) */
#define R198_FTDM_OUT60_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R198_FTDM_OUT60_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R198_FTDM_OUT60_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R198_FTDM_OUT60_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R198_FTDM_OUT60_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R198_FTDM_OUT60_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R198_FTDM_OUT60_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R198_FTDM_OUT60_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R198_FTDM_OUT60_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R198_FTDM_OUT60_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R198_FTDM_OUT60_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R198_FTDM_OUT60_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R198_FTDM_OUT60_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R198_FTDM_OUT60_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R198_FTDM_OUT60_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT61 (ADAU1452) */
#define R199_FTDM_OUT61_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R199_FTDM_OUT61_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R199_FTDM_OUT61_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R199_FTDM_OUT61_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R199_FTDM_OUT61_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R199_FTDM_OUT61_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R199_FTDM_OUT61_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R199_FTDM_OUT61_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R199_FTDM_OUT61_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R199_FTDM_OUT61_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R199_FTDM_OUT61_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R199_FTDM_OUT61_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R199_FTDM_OUT61_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R199_FTDM_OUT61_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R199_FTDM_OUT61_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT62 (ADAU1452) */
#define R200_FTDM_OUT62_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R200_FTDM_OUT62_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R200_FTDM_OUT62_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R200_FTDM_OUT62_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R200_FTDM_OUT62_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R200_FTDM_OUT62_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R200_FTDM_OUT62_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R200_FTDM_OUT62_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R200_FTDM_OUT62_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R200_FTDM_OUT62_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R200_FTDM_OUT62_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R200_FTDM_OUT62_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R200_FTDM_OUT62_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R200_FTDM_OUT62_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R200_FTDM_OUT62_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* FTDM_OUT63 (ADAU1452) */
#define R201_FTDM_OUT63_BYTE_OUT_POS_ADAU1452     0x0    /* 00b	[1:0] */
#define R201_FTDM_OUT63_CHANNEL_OUT_POS_ADAU1452  0x0    /* 000b	[4:2] */
#define R201_FTDM_OUT63_SERIAL_OUT_SEL_ADAU1452   0x0    /* 0b	[5] */
#define R201_FTDM_OUT63_REVERSE_OUT_BYTE_ADAU1452 0x0    /* 0b	[6] */
#define R201_FTDM_OUT63_SLOT_ENABLE_OUT_ADAU1452  0x0    /* 0b	[7] */
#define R201_FTDM_OUT63_BYTE_OUT_POS_ADAU1452_MASK 0x3
#define R201_FTDM_OUT63_BYTE_OUT_POS_ADAU1452_SHIFT 0
#define R201_FTDM_OUT63_CHANNEL_OUT_POS_ADAU1452_MASK 0x1C
#define R201_FTDM_OUT63_CHANNEL_OUT_POS_ADAU1452_SHIFT 2
#define R201_FTDM_OUT63_SERIAL_OUT_SEL_ADAU1452_MASK 0x20
#define R201_FTDM_OUT63_SERIAL_OUT_SEL_ADAU1452_SHIFT 5
#define R201_FTDM_OUT63_REVERSE_OUT_BYTE_ADAU1452_MASK 0x40
#define R201_FTDM_OUT63_REVERSE_OUT_BYTE_ADAU1452_SHIFT 6
#define R201_FTDM_OUT63_SLOT_ENABLE_OUT_ADAU1452_MASK 0x80
#define R201_FTDM_OUT63_SLOT_ENABLE_OUT_ADAU1452_SHIFT 7

/* HIBERNATE (ADAU1452) */
#define R202_HIBERNATE_HIBERNATE_ADAU1452         0x0    /* 0b	[0] */
#define R202_HIBERNATE_HIBERNATE_ADAU1452_MASK    0x1
#define R202_HIBERNATE_HIBERNATE_ADAU1452_SHIFT   0

/* START_PULSE (ADAU1452) */
#define R203_START_PULSE_START_PULSE_ADAU1452     0x2    /* 00010b	[4:0] */
#define R203_START_PULSE_START_PULSE_ADAU1452_MASK 0x1F
#define R203_START_PULSE_START_PULSE_ADAU1452_SHIFT 0

/* START_CORE (ADAU1452) */
#define R204_START_CORE_START_CORE_ADAU1452       0x1    /* 1b	[0] */
#define R204_START_CORE_START_CORE_ADAU1452_MASK  0x1
#define R204_START_CORE_START_CORE_ADAU1452_SHIFT 0

/* KILL_CORE (ADAU1452) */
#define R205_KILL_CORE_KILL_CORE_ADAU1452         0x0    /* 0b	[0] */
#define R205_KILL_CORE_KILL_CORE_ADAU1452_MASK    0x1
#define R205_KILL_CORE_KILL_CORE_ADAU1452_SHIFT   0

/* START_ADDRESS (ADAU1452) */
#define R206_START_ADDRESS_START_ADDRESS_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R206_START_ADDRESS_START_ADDRESS_ADAU1452_MASK 0xFFFF
#define R206_START_ADDRESS_START_ADDRESS_ADAU1452_SHIFT 0

/* CORE_STATUS (ADAU1452) */
#define R207_CORE_STATUS_CORE_STATUS_ADAU1452     0x0    /* 000b	[2:0] */
#define R207_CORE_STATUS_CORE_STATUS_ADAU1452_MASK 0x7
#define R207_CORE_STATUS_CORE_STATUS_ADAU1452_SHIFT 0

/* DEBUG_MODE (ADAU1452) */
#define R208_DEBUG_MODE_DEBUG_MODE_ADAU1452       0x0    /* 0b	[0] */
#define R208_DEBUG_MODE_DEBUG_MODE_ADAU1452_MASK  0x1
#define R208_DEBUG_MODE_DEBUG_MODE_ADAU1452_SHIFT 0

/* PANIC_CLEAR (ADAU1452) */
#define R209_PANIC_CLEAR_PANIC_CLEAR_ADAU1452     0x0    /* 0b	[0] */
#define R209_PANIC_CLEAR_PANIC_CLEAR_ADAU1452_MASK 0x1
#define R209_PANIC_CLEAR_PANIC_CLEAR_ADAU1452_SHIFT 0

/* PANIC_PARITY_MASK (ADAU1452) */
#define R210_PANIC_PARITY_MASK_ASRC0_MASK_ADAU1452 0x0   /* 0b	[0] */
#define R210_PANIC_PARITY_MASK_ASRC1_MASK_ADAU1452 0x0   /* 0b	[1] */
#define R210_PANIC_PARITY_MASK_PM0_MASK_ADAU1452  0x0    /* 0b	[2] */
#define R210_PANIC_PARITY_MASK_PM1_MASK_ADAU1452  0x0    /* 0b	[3] */
#define R210_PANIC_PARITY_MASK_DM0_BANK0_MASK_ADAU1452 0x0 /* 0b	[4] */
#define R210_PANIC_PARITY_MASK_DM0_BANK1_MASK_ADAU1452 0x0 /* 0b	[5] */
#define R210_PANIC_PARITY_MASK_DM0_BANK2_MASK_ADAU1452 0x0 /* 0b	[6] */
#define R210_PANIC_PARITY_MASK_DM0_BANK3_MASK_ADAU1452 0x0 /* 0b	[7] */
#define R210_PANIC_PARITY_MASK_DM1_BANK0_MASK_ADAU1452 0x0 /* 0b	[8] */
#define R210_PANIC_PARITY_MASK_DM1_BANK1_MASK_ADAU1452 0x0 /* 0b	[9] */
#define R210_PANIC_PARITY_MASK_DM1_BANK2_MASK_ADAU1452 0x0 /* 0b	[10] */
#define R210_PANIC_PARITY_MASK_DM1_BANK3_MASK_ADAU1452 0x0 /* 0b	[11] */
#define R210_PANIC_PARITY_MASK_ASRC0_MASK_ADAU1452_MASK 0x1
#define R210_PANIC_PARITY_MASK_ASRC0_MASK_ADAU1452_SHIFT 0
#define R210_PANIC_PARITY_MASK_ASRC1_MASK_ADAU1452_MASK 0x2
#define R210_PANIC_PARITY_MASK_ASRC1_MASK_ADAU1452_SHIFT 1
#define R210_PANIC_PARITY_MASK_PM0_MASK_ADAU1452_MASK 0x4
#define R210_PANIC_PARITY_MASK_PM0_MASK_ADAU1452_SHIFT 2
#define R210_PANIC_PARITY_MASK_PM1_MASK_ADAU1452_MASK 0x8
#define R210_PANIC_PARITY_MASK_PM1_MASK_ADAU1452_SHIFT 3
#define R210_PANIC_PARITY_MASK_DM0_BANK0_MASK_ADAU1452_MASK 0x10
#define R210_PANIC_PARITY_MASK_DM0_BANK0_MASK_ADAU1452_SHIFT 4
#define R210_PANIC_PARITY_MASK_DM0_BANK1_MASK_ADAU1452_MASK 0x20
#define R210_PANIC_PARITY_MASK_DM0_BANK1_MASK_ADAU1452_SHIFT 5
#define R210_PANIC_PARITY_MASK_DM0_BANK2_MASK_ADAU1452_MASK 0x40
#define R210_PANIC_PARITY_MASK_DM0_BANK2_MASK_ADAU1452_SHIFT 6
#define R210_PANIC_PARITY_MASK_DM0_BANK3_MASK_ADAU1452_MASK 0x80
#define R210_PANIC_PARITY_MASK_DM0_BANK3_MASK_ADAU1452_SHIFT 7
#define R210_PANIC_PARITY_MASK_DM1_BANK0_MASK_ADAU1452_MASK 0x100
#define R210_PANIC_PARITY_MASK_DM1_BANK0_MASK_ADAU1452_SHIFT 8
#define R210_PANIC_PARITY_MASK_DM1_BANK1_MASK_ADAU1452_MASK 0x200
#define R210_PANIC_PARITY_MASK_DM1_BANK1_MASK_ADAU1452_SHIFT 9
#define R210_PANIC_PARITY_MASK_DM1_BANK2_MASK_ADAU1452_MASK 0x400
#define R210_PANIC_PARITY_MASK_DM1_BANK2_MASK_ADAU1452_SHIFT 10
#define R210_PANIC_PARITY_MASK_DM1_BANK3_MASK_ADAU1452_MASK 0x800
#define R210_PANIC_PARITY_MASK_DM1_BANK3_MASK_ADAU1452_SHIFT 11

/* PANIC_SOFTWARE_MASK (ADAU1452) */
#define R211_PANIC_SOFTWARE_MASK_PANIC_SOFTWARE_ADAU1452 0x0 /* 0b	[0] */
#define R211_PANIC_SOFTWARE_MASK_PANIC_SOFTWARE_ADAU1452_MASK 0x1
#define R211_PANIC_SOFTWARE_MASK_PANIC_SOFTWARE_ADAU1452_SHIFT 0

/* PANIC_WD_MASK (ADAU1452) */
#define R212_PANIC_WD_MASK_PANIC_WD_ADAU1452      0x0    /* 0b	[0] */
#define R212_PANIC_WD_MASK_PANIC_WD_ADAU1452_MASK 0x1
#define R212_PANIC_WD_MASK_PANIC_WD_ADAU1452_SHIFT 0

/* PANIC_STACK_MASK (ADAU1452) */
#define R213_PANIC_STACK_MASK_PANIC_STACK_ADAU1452 0x0   /* 0b	[0] */
#define R213_PANIC_STACK_MASK_PANIC_STACK_ADAU1452_MASK 0x1
#define R213_PANIC_STACK_MASK_PANIC_STACK_ADAU1452_SHIFT 0

/* PANIC_LOOP_MASK (ADAU1452) */
#define R214_PANIC_LOOP_MASK_PANIC_LOOP_ADAU1452  0x0    /* 0b	[0] */
#define R214_PANIC_LOOP_MASK_PANIC_LOOP_ADAU1452_MASK 0x1
#define R214_PANIC_LOOP_MASK_PANIC_LOOP_ADAU1452_SHIFT 0

/* PANIC_FLAG (ADAU1452) */
#define R215_PANIC_FLAG_PANIC_FLAG_ADAU1452       0x0    /* 0b	[0] */
#define R215_PANIC_FLAG_PANIC_FLAG_ADAU1452_MASK  0x1
#define R215_PANIC_FLAG_PANIC_FLAG_ADAU1452_SHIFT 0

/* PANIC_CODE (ADAU1452) */
#define R216_PANIC_CODE_ERR_ASRC0_ADAU1452        0x0    /* 0b	[0] */
#define R216_PANIC_CODE_ERR_ASRC1_ADAU1452        0x0    /* 0b	[1] */
#define R216_PANIC_CODE_ERR_PM0_ADAU1452          0x0    /* 0b	[2] */
#define R216_PANIC_CODE_ERR_PM1_ADAU1452          0x0    /* 0b	[3] */
#define R216_PANIC_CODE_ERR_DM0B0_ADAU1452        0x0    /* 0b	[4] */
#define R216_PANIC_CODE_ERR_DM0B1_ADAU1452        0x0    /* 0b	[5] */
#define R216_PANIC_CODE_ERR_DM0B2_ADAU1452        0x0    /* 0b	[6] */
#define R216_PANIC_CODE_ERR_DM0B3_ADAU1452        0x0    /* 0b	[7] */
#define R216_PANIC_CODE_ERR_DM1B0_ADAU1452        0x0    /* 0b	[8] */
#define R216_PANIC_CODE_ERR_DM1B1_ADAU1452        0x0    /* 0b	[9] */
#define R216_PANIC_CODE_ERR_DM1B2_ADAU1452        0x0    /* 0b	[10] */
#define R216_PANIC_CODE_ERR_DM1B3_ADAU1452        0x0    /* 0b	[11] */
#define R216_PANIC_CODE_ERR_WATCHDOG_ADAU1452     0x0    /* 0b	[12] */
#define R216_PANIC_CODE_ERR_STACK_ADAU1452        0x0    /* 0b	[13] */
#define R216_PANIC_CODE_ERR_LOOP_ADAU1452         0x0    /* 0b	[14] */
#define R216_PANIC_CODE_ERR_SOFT_ADAU1452         0x0    /* 0b	[15] */
#define R216_PANIC_CODE_ERR_ASRC0_ADAU1452_MASK   0x1
#define R216_PANIC_CODE_ERR_ASRC0_ADAU1452_SHIFT  0
#define R216_PANIC_CODE_ERR_ASRC1_ADAU1452_MASK   0x2
#define R216_PANIC_CODE_ERR_ASRC1_ADAU1452_SHIFT  1
#define R216_PANIC_CODE_ERR_PM0_ADAU1452_MASK     0x4
#define R216_PANIC_CODE_ERR_PM0_ADAU1452_SHIFT    2
#define R216_PANIC_CODE_ERR_PM1_ADAU1452_MASK     0x8
#define R216_PANIC_CODE_ERR_PM1_ADAU1452_SHIFT    3
#define R216_PANIC_CODE_ERR_DM0B0_ADAU1452_MASK   0x10
#define R216_PANIC_CODE_ERR_DM0B0_ADAU1452_SHIFT  4
#define R216_PANIC_CODE_ERR_DM0B1_ADAU1452_MASK   0x20
#define R216_PANIC_CODE_ERR_DM0B1_ADAU1452_SHIFT  5
#define R216_PANIC_CODE_ERR_DM0B2_ADAU1452_MASK   0x40
#define R216_PANIC_CODE_ERR_DM0B2_ADAU1452_SHIFT  6
#define R216_PANIC_CODE_ERR_DM0B3_ADAU1452_MASK   0x80
#define R216_PANIC_CODE_ERR_DM0B3_ADAU1452_SHIFT  7
#define R216_PANIC_CODE_ERR_DM1B0_ADAU1452_MASK   0x100
#define R216_PANIC_CODE_ERR_DM1B0_ADAU1452_SHIFT  8
#define R216_PANIC_CODE_ERR_DM1B1_ADAU1452_MASK   0x200
#define R216_PANIC_CODE_ERR_DM1B1_ADAU1452_SHIFT  9
#define R216_PANIC_CODE_ERR_DM1B2_ADAU1452_MASK   0x400
#define R216_PANIC_CODE_ERR_DM1B2_ADAU1452_SHIFT  10
#define R216_PANIC_CODE_ERR_DM1B3_ADAU1452_MASK   0x800
#define R216_PANIC_CODE_ERR_DM1B3_ADAU1452_SHIFT  11
#define R216_PANIC_CODE_ERR_WATCHDOG_ADAU1452_MASK 0x1000
#define R216_PANIC_CODE_ERR_WATCHDOG_ADAU1452_SHIFT 12
#define R216_PANIC_CODE_ERR_STACK_ADAU1452_MASK   0x2000
#define R216_PANIC_CODE_ERR_STACK_ADAU1452_SHIFT  13
#define R216_PANIC_CODE_ERR_LOOP_ADAU1452_MASK    0x4000
#define R216_PANIC_CODE_ERR_LOOP_ADAU1452_SHIFT   14
#define R216_PANIC_CODE_ERR_SOFT_ADAU1452_MASK    0x8000
#define R216_PANIC_CODE_ERR_SOFT_ADAU1452_SHIFT   15

/* DECODE_OP0 (ADAU1452) */
#define R217_DECODE_OP0_DECODE_OP0_ADAU1452       0x0000 /* 0000000000000000b	[15:0] */
#define R217_DECODE_OP0_DECODE_OP0_ADAU1452_MASK  0xFFFF
#define R217_DECODE_OP0_DECODE_OP0_ADAU1452_SHIFT 0

/* DECODE_OP1 (ADAU1452) */
#define R218_DECODE_OP1_DECODE_OP1_ADAU1452       0x0000 /* 0000000000000000b	[15:0] */
#define R218_DECODE_OP1_DECODE_OP1_ADAU1452_MASK  0xFFFF
#define R218_DECODE_OP1_DECODE_OP1_ADAU1452_SHIFT 0

/* DECODE_OP2 (ADAU1452) */
#define R219_DECODE_OP2_DECODE_OP2_ADAU1452       0x0000 /* 0000000000000000b	[15:0] */
#define R219_DECODE_OP2_DECODE_OP2_ADAU1452_MASK  0xFFFF
#define R219_DECODE_OP2_DECODE_OP2_ADAU1452_SHIFT 0

/* DECODE_OP3 (ADAU1452) */
#define R220_DECODE_OP3_DECODE_OP3_ADAU1452       0x0000 /* 0000000000000000b	[15:0] */
#define R220_DECODE_OP3_DECODE_OP3_ADAU1452_MASK  0xFFFF
#define R220_DECODE_OP3_DECODE_OP3_ADAU1452_SHIFT 0

/* EXECUTE_OP0 (ADAU1452) */
#define R221_EXECUTE_OP0_DECODE_EX0_ADAU1452      0x0000 /* 0000000000000000b	[15:0] */
#define R221_EXECUTE_OP0_DECODE_EX0_ADAU1452_MASK 0xFFFF
#define R221_EXECUTE_OP0_DECODE_EX0_ADAU1452_SHIFT 0

/* EXECUTE_OP1 (ADAU1452) */
#define R222_EXECUTE_OP1_DECODE_EX1_ADAU1452      0x0000 /* 0000000000000000b	[15:0] */
#define R222_EXECUTE_OP1_DECODE_EX1_ADAU1452_MASK 0xFFFF
#define R222_EXECUTE_OP1_DECODE_EX1_ADAU1452_SHIFT 0

/* EXECUTE_OP2 (ADAU1452) */
#define R223_EXECUTE_OP2_DECODE_EX2_ADAU1452      0x0000 /* 0000000000000000b	[15:0] */
#define R223_EXECUTE_OP2_DECODE_EX2_ADAU1452_MASK 0xFFFF
#define R223_EXECUTE_OP2_DECODE_EX2_ADAU1452_SHIFT 0

/* EXECUTE_OP3 (ADAU1452) */
#define R224_EXECUTE_OP3_DECODE_EX3_ADAU1452      0x0000 /* 0000000000000000b	[15:0] */
#define R224_EXECUTE_OP3_DECODE_EX3_ADAU1452_MASK 0xFFFF
#define R224_EXECUTE_OP3_DECODE_EX3_ADAU1452_SHIFT 0

/* DECODE_COUNT (ADAU1452) */
#define R225_DECODE_COUNT_DECODE_COUNT_ADAU1452   0x0000 /* 0000000000000000b	[15:0] */
#define R225_DECODE_COUNT_DECODE_COUNT_ADAU1452_MASK 0xFFFF
#define R225_DECODE_COUNT_DECODE_COUNT_ADAU1452_SHIFT 0

/* EXECUTE_COUNT (ADAU1452) */
#define R226_EXECUTE_COUNT_EXECUTE_COUNT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R226_EXECUTE_COUNT_EXECUTE_COUNT_ADAU1452_MASK 0xFFFF
#define R226_EXECUTE_COUNT_EXECUTE_COUNT_ADAU1452_SHIFT 0

/* SOFTWARE_VALUE_0 (ADAU1452) */
#define R227_SOFTWARE_VALUE_0_SOFTWARE_VALUE_0_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R227_SOFTWARE_VALUE_0_SOFTWARE_VALUE_0_ADAU1452_MASK 0xFFFF
#define R227_SOFTWARE_VALUE_0_SOFTWARE_VALUE_0_ADAU1452_SHIFT 0

/* SOFTWARE_VALUE_1 (ADAU1452) */
#define R228_SOFTWARE_VALUE_1_SOFTWARE_VALUE_1_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R228_SOFTWARE_VALUE_1_SOFTWARE_VALUE_1_ADAU1452_MASK 0xFFFF
#define R228_SOFTWARE_VALUE_1_SOFTWARE_VALUE_1_ADAU1452_SHIFT 0

/* WATCHDOG_MAXCOUNT (ADAU1452) */
#define R229_WATCHDOG_MAXCOUNT_WD_MAXCOUNT_ADAU1452 0x000 /* 0000000000000b	[12:0] */
#define R229_WATCHDOG_MAXCOUNT_WD_MAXCOUNT_ADAU1452_MASK 0x1FFF
#define R229_WATCHDOG_MAXCOUNT_WD_MAXCOUNT_ADAU1452_SHIFT 0

/* WATCHDOG_PRESCALE (ADAU1452) */
#define R230_WATCHDOG_PRESCALE_WD_PRESCALE_ADAU1452 0x0  /* 0000b	[3:0] */
#define R230_WATCHDOG_PRESCALE_WD_PRESCALE_ADAU1452_MASK 0xF
#define R230_WATCHDOG_PRESCALE_WD_PRESCALE_ADAU1452_SHIFT 0

/* BLOCKINT_EN (ADAU1452) */
#define R231_BLOCKINT_EN_BLOCKINT_EN_ADAU1452     0x0    /* 0b	[0] */
#define R231_BLOCKINT_EN_BLOCKINT_EN_ADAU1452_MASK 0x1
#define R231_BLOCKINT_EN_BLOCKINT_EN_ADAU1452_SHIFT 0

/* BLOCKINT_VALUE (ADAU1452) */
#define R232_BLOCKINT_VALUE_BLOCKINT_VALUE_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R232_BLOCKINT_VALUE_BLOCKINT_VALUE_ADAU1452_MASK 0xFFFF
#define R232_BLOCKINT_VALUE_BLOCKINT_VALUE_ADAU1452_SHIFT 0

/* PROG_CNTR0 (ADAU1452) */
#define R233_PROG_CNTR0_PROG_CNTR_MSB_ADAU1452    0x00   /* 00000000b	[7:0] */
#define R233_PROG_CNTR0_PROG_CNTR_MSB_ADAU1452_MASK 0xFF
#define R233_PROG_CNTR0_PROG_CNTR_MSB_ADAU1452_SHIFT 0

/* PROG_CNTR1 (ADAU1452) */
#define R234_PROG_CNTR1_PROG_CNTR_LSB_ADAU1452    0x0000 /* 0000000000000000b	[15:0] */
#define R234_PROG_CNTR1_PROG_CNTR_LSB_ADAU1452_MASK 0xFFFF
#define R234_PROG_CNTR1_PROG_CNTR_LSB_ADAU1452_SHIFT 0

/* PROG_CNTR_CLEAR (ADAU1452) */
#define R235_PROG_CNTR_CLEAR_PROG_CNTR_CLEAR_ADAU1452 0x0 /* 0b	[0] */
#define R235_PROG_CNTR_CLEAR_PROG_CNTR_CLEAR_ADAU1452_MASK 0x1
#define R235_PROG_CNTR_CLEAR_PROG_CNTR_CLEAR_ADAU1452_SHIFT 0

/* PROG_CNTR_LENGTH0 (ADAU1452) */
#define R236_PROG_CNTR_LENGTH0_PROG_LENGTH_MSB_ADAU1452 0x00 /* 00000000b	[7:0] */
#define R236_PROG_CNTR_LENGTH0_PROG_LENGTH_MSB_ADAU1452_MASK 0xFF
#define R236_PROG_CNTR_LENGTH0_PROG_LENGTH_MSB_ADAU1452_SHIFT 0

/* PROG_CNTR_LENGTH1 (ADAU1452) */
#define R237_PROG_CNTR_LENGTH1_PROG_LENGTH_LSB_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R237_PROG_CNTR_LENGTH1_PROG_LENGTH_LSB_ADAU1452_MASK 0xFFFF
#define R237_PROG_CNTR_LENGTH1_PROG_LENGTH_LSB_ADAU1452_SHIFT 0

/* PROG_CNTR_MAXLENGTH0 (ADAU1452) */
#define R238_PROG_CNTR_MAXLENGTH0_PROG_MAXLENGTH_MSB_ADAU1452 0x00 /* 00000000b	[7:0] */
#define R238_PROG_CNTR_MAXLENGTH0_PROG_MAXLENGTH_MSB_ADAU1452_MASK 0xFF
#define R238_PROG_CNTR_MAXLENGTH0_PROG_MAXLENGTH_MSB_ADAU1452_SHIFT 0

/* PROG_CNTR_MAXLENGTH1 (ADAU1452) */
#define R239_PROG_CNTR_MAXLENGTH1_PROG_MAXLENGTH_LSB_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R239_PROG_CNTR_MAXLENGTH1_PROG_MAXLENGTH_LSB_ADAU1452_MASK 0xFFFF
#define R239_PROG_CNTR_MAXLENGTH1_PROG_MAXLENGTH_LSB_ADAU1452_SHIFT 0

/* MP0_MODE (ADAU1452) */
#define R240_MP0_MODE_MP_ENABLE_ADAU1452          0x0    /* 0b	[0] */
#define R240_MP0_MODE_MP_MODE_ADAU1452            0x0    /* 000b	[3:1] */
#define R240_MP0_MODE_DEBOUNCE_VALUE_ADAU1452     0x0    /* 0000b	[7:4] */
#define R240_MP0_MODE_SS_SELECT_ADAU1452          0x0    /* 000b	[10:8] */
#define R240_MP0_MODE_MP_ENABLE_ADAU1452_MASK     0x1
#define R240_MP0_MODE_MP_ENABLE_ADAU1452_SHIFT    0
#define R240_MP0_MODE_MP_MODE_ADAU1452_MASK       0xE
#define R240_MP0_MODE_MP_MODE_ADAU1452_SHIFT      1
#define R240_MP0_MODE_DEBOUNCE_VALUE_ADAU1452_MASK 0xF0
#define R240_MP0_MODE_DEBOUNCE_VALUE_ADAU1452_SHIFT 4
#define R240_MP0_MODE_SS_SELECT_ADAU1452_MASK     0x700
#define R240_MP0_MODE_SS_SELECT_ADAU1452_SHIFT    8

/* MP1_MODE (ADAU1452) */
#define R241_MP1_MODE_MP_ENABLE_ADAU1452          0x0    /* 0b	[0] */
#define R241_MP1_MODE_MP_MODE_ADAU1452            0x0    /* 000b	[3:1] */
#define R241_MP1_MODE_DEBOUNCE_VALUE_ADAU1452     0x0    /* 0000b	[7:4] */
#define R241_MP1_MODE_SS_SELECT_ADAU1452          0x0    /* 000b	[10:8] */
#define R241_MP1_MODE_MP_ENABLE_ADAU1452_MASK     0x1
#define R241_MP1_MODE_MP_ENABLE_ADAU1452_SHIFT    0
#define R241_MP1_MODE_MP_MODE_ADAU1452_MASK       0xE
#define R241_MP1_MODE_MP_MODE_ADAU1452_SHIFT      1
#define R241_MP1_MODE_DEBOUNCE_VALUE_ADAU1452_MASK 0xF0
#define R241_MP1_MODE_DEBOUNCE_VALUE_ADAU1452_SHIFT 4
#define R241_MP1_MODE_SS_SELECT_ADAU1452_MASK     0x700
#define R241_MP1_MODE_SS_SELECT_ADAU1452_SHIFT    8

/* MP2_MODE (ADAU1452) */
#define R242_MP2_MODE_MP_ENABLE_ADAU1452          0x0    /* 0b	[0] */
#define R242_MP2_MODE_MP_MODE_ADAU1452            0x0    /* 000b	[3:1] */
#define R242_MP2_MODE_DEBOUNCE_VALUE_ADAU1452     0x0    /* 0000b	[7:4] */
#define R242_MP2_MODE_SS_SELECT_ADAU1452          0x0    /* 000b	[10:8] */
#define R242_MP2_MODE_MP_ENABLE_ADAU1452_MASK     0x1
#define R242_MP2_MODE_MP_ENABLE_ADAU1452_SHIFT    0
#define R242_MP2_MODE_MP_MODE_ADAU1452_MASK       0xE
#define R242_MP2_MODE_MP_MODE_ADAU1452_SHIFT      1
#define R242_MP2_MODE_DEBOUNCE_VALUE_ADAU1452_MASK 0xF0
#define R242_MP2_MODE_DEBOUNCE_VALUE_ADAU1452_SHIFT 4
#define R242_MP2_MODE_SS_SELECT_ADAU1452_MASK     0x700
#define R242_MP2_MODE_SS_SELECT_ADAU1452_SHIFT    8

/* MP3_MODE (ADAU1452) */
#define R243_MP3_MODE_MP_ENABLE_ADAU1452          0x0    /* 0b	[0] */
#define R243_MP3_MODE_MP_MODE_ADAU1452            0x0    /* 000b	[3:1] */
#define R243_MP3_MODE_DEBOUNCE_VALUE_ADAU1452     0x0    /* 0000b	[7:4] */
#define R243_MP3_MODE_SS_SELECT_ADAU1452          0x0    /* 000b	[10:8] */
#define R243_MP3_MODE_MP_ENABLE_ADAU1452_MASK     0x1
#define R243_MP3_MODE_MP_ENABLE_ADAU1452_SHIFT    0
#define R243_MP3_MODE_MP_MODE_ADAU1452_MASK       0xE
#define R243_MP3_MODE_MP_MODE_ADAU1452_SHIFT      1
#define R243_MP3_MODE_DEBOUNCE_VALUE_ADAU1452_MASK 0xF0
#define R243_MP3_MODE_DEBOUNCE_VALUE_ADAU1452_SHIFT 4
#define R243_MP3_MODE_SS_SELECT_ADAU1452_MASK     0x700
#define R243_MP3_MODE_SS_SELECT_ADAU1452_SHIFT    8

/* MP4_MODE (ADAU1452) */
#define R244_MP4_MODE_MP_ENABLE_ADAU1452          0x0    /* 0b	[0] */
#define R244_MP4_MODE_MP_MODE_ADAU1452            0x0    /* 000b	[3:1] */
#define R244_MP4_MODE_DEBOUNCE_VALUE_ADAU1452     0x0    /* 0000b	[7:4] */
#define R244_MP4_MODE_SS_SELECT_ADAU1452          0x0    /* 000b	[10:8] */
#define R244_MP4_MODE_MP_ENABLE_ADAU1452_MASK     0x1
#define R244_MP4_MODE_MP_ENABLE_ADAU1452_SHIFT    0
#define R244_MP4_MODE_MP_MODE_ADAU1452_MASK       0xE
#define R244_MP4_MODE_MP_MODE_ADAU1452_SHIFT      1
#define R244_MP4_MODE_DEBOUNCE_VALUE_ADAU1452_MASK 0xF0
#define R244_MP4_MODE_DEBOUNCE_VALUE_ADAU1452_SHIFT 4
#define R244_MP4_MODE_SS_SELECT_ADAU1452_MASK     0x700
#define R244_MP4_MODE_SS_SELECT_ADAU1452_SHIFT    8

/* MP5_MODE (ADAU1452) */
#define R245_MP5_MODE_MP_ENABLE_ADAU1452          0x0    /* 0b	[0] */
#define R245_MP5_MODE_MP_MODE_ADAU1452            0x0    /* 000b	[3:1] */
#define R245_MP5_MODE_DEBOUNCE_VALUE_ADAU1452     0x0    /* 0000b	[7:4] */
#define R245_MP5_MODE_SS_SELECT_ADAU1452          0x0    /* 000b	[10:8] */
#define R245_MP5_MODE_MP_ENABLE_ADAU1452_MASK     0x1
#define R245_MP5_MODE_MP_ENABLE_ADAU1452_SHIFT    0
#define R245_MP5_MODE_MP_MODE_ADAU1452_MASK       0xE
#define R245_MP5_MODE_MP_MODE_ADAU1452_SHIFT      1
#define R245_MP5_MODE_DEBOUNCE_VALUE_ADAU1452_MASK 0xF0
#define R245_MP5_MODE_DEBOUNCE_VALUE_ADAU1452_SHIFT 4
#define R245_MP5_MODE_SS_SELECT_ADAU1452_MASK     0x700
#define R245_MP5_MODE_SS_SELECT_ADAU1452_SHIFT    8

/* MP6_MODE (ADAU1452) */
#define R246_MP6_MODE_MP_ENABLE_ADAU1452          0x1    /* 1b	[0] */
#define R246_MP6_MODE_MP_MODE_ADAU1452            0x3    /* 011b	[3:1] */
#define R246_MP6_MODE_DEBOUNCE_VALUE_ADAU1452     0x0    /* 0000b	[7:4] */
#define R246_MP6_MODE_SS_SELECT_ADAU1452          0x6    /* 110b	[10:8] */
#define R246_MP6_MODE_MP_ENABLE_ADAU1452_MASK     0x1
#define R246_MP6_MODE_MP_ENABLE_ADAU1452_SHIFT    0
#define R246_MP6_MODE_MP_MODE_ADAU1452_MASK       0xE
#define R246_MP6_MODE_MP_MODE_ADAU1452_SHIFT      1
#define R246_MP6_MODE_DEBOUNCE_VALUE_ADAU1452_MASK 0xF0
#define R246_MP6_MODE_DEBOUNCE_VALUE_ADAU1452_SHIFT 4
#define R246_MP6_MODE_SS_SELECT_ADAU1452_MASK     0x700
#define R246_MP6_MODE_SS_SELECT_ADAU1452_SHIFT    8

/* MP7_MODE (ADAU1452) */
#define R247_MP7_MODE_MP_ENABLE_ADAU1452          0x0    /* 0b	[0] */
#define R247_MP7_MODE_MP_MODE_ADAU1452            0x0    /* 000b	[3:1] */
#define R247_MP7_MODE_DEBOUNCE_VALUE_ADAU1452     0x0    /* 0000b	[7:4] */
#define R247_MP7_MODE_SS_SELECT_ADAU1452          0x0    /* 000b	[10:8] */
#define R247_MP7_MODE_MP_ENABLE_ADAU1452_MASK     0x1
#define R247_MP7_MODE_MP_ENABLE_ADAU1452_SHIFT    0
#define R247_MP7_MODE_MP_MODE_ADAU1452_MASK       0xE
#define R247_MP7_MODE_MP_MODE_ADAU1452_SHIFT      1
#define R247_MP7_MODE_DEBOUNCE_VALUE_ADAU1452_MASK 0xF0
#define R247_MP7_MODE_DEBOUNCE_VALUE_ADAU1452_SHIFT 4
#define R247_MP7_MODE_SS_SELECT_ADAU1452_MASK     0x700
#define R247_MP7_MODE_SS_SELECT_ADAU1452_SHIFT    8

/* MP8_MODE (ADAU1452) */
#define R248_MP8_MODE_MP_ENABLE_ADAU1452          0x0    /* 0b	[0] */
#define R248_MP8_MODE_MP_MODE_ADAU1452            0x0    /* 000b	[3:1] */
#define R248_MP8_MODE_DEBOUNCE_VALUE_ADAU1452     0x0    /* 0000b	[7:4] */
#define R248_MP8_MODE_SS_SELECT_ADAU1452          0x0    /* 000b	[10:8] */
#define R248_MP8_MODE_MP_ENABLE_ADAU1452_MASK     0x1
#define R248_MP8_MODE_MP_ENABLE_ADAU1452_SHIFT    0
#define R248_MP8_MODE_MP_MODE_ADAU1452_MASK       0xE
#define R248_MP8_MODE_MP_MODE_ADAU1452_SHIFT      1
#define R248_MP8_MODE_DEBOUNCE_VALUE_ADAU1452_MASK 0xF0
#define R248_MP8_MODE_DEBOUNCE_VALUE_ADAU1452_SHIFT 4
#define R248_MP8_MODE_SS_SELECT_ADAU1452_MASK     0x700
#define R248_MP8_MODE_SS_SELECT_ADAU1452_SHIFT    8

/* MP9_MODE (ADAU1452) */
#define R249_MP9_MODE_MP_ENABLE_ADAU1452          0x0    /* 0b	[0] */
#define R249_MP9_MODE_MP_MODE_ADAU1452            0x0    /* 000b	[3:1] */
#define R249_MP9_MODE_DEBOUNCE_VALUE_ADAU1452     0x0    /* 0000b	[7:4] */
#define R249_MP9_MODE_SS_SELECT_ADAU1452          0x0    /* 000b	[10:8] */
#define R249_MP9_MODE_MP_ENABLE_ADAU1452_MASK     0x1
#define R249_MP9_MODE_MP_ENABLE_ADAU1452_SHIFT    0
#define R249_MP9_MODE_MP_MODE_ADAU1452_MASK       0xE
#define R249_MP9_MODE_MP_MODE_ADAU1452_SHIFT      1
#define R249_MP9_MODE_DEBOUNCE_VALUE_ADAU1452_MASK 0xF0
#define R249_MP9_MODE_DEBOUNCE_VALUE_ADAU1452_SHIFT 4
#define R249_MP9_MODE_SS_SELECT_ADAU1452_MASK     0x700
#define R249_MP9_MODE_SS_SELECT_ADAU1452_SHIFT    8

/* MP10_MODE (ADAU1452) */
#define R250_MP10_MODE_MP_ENABLE_ADAU1452         0x0    /* 0b	[0] */
#define R250_MP10_MODE_MP_MODE_ADAU1452           0x0    /* 000b	[3:1] */
#define R250_MP10_MODE_DEBOUNCE_VALUE_ADAU1452    0x0    /* 0000b	[7:4] */
#define R250_MP10_MODE_SS_SELECT_ADAU1452         0x0    /* 000b	[10:8] */
#define R250_MP10_MODE_MP_ENABLE_ADAU1452_MASK    0x1
#define R250_MP10_MODE_MP_ENABLE_ADAU1452_SHIFT   0
#define R250_MP10_MODE_MP_MODE_ADAU1452_MASK      0xE
#define R250_MP10_MODE_MP_MODE_ADAU1452_SHIFT     1
#define R250_MP10_MODE_DEBOUNCE_VALUE_ADAU1452_MASK 0xF0
#define R250_MP10_MODE_DEBOUNCE_VALUE_ADAU1452_SHIFT 4
#define R250_MP10_MODE_SS_SELECT_ADAU1452_MASK    0x700
#define R250_MP10_MODE_SS_SELECT_ADAU1452_SHIFT   8

/* MP11_MODE (ADAU1452) */
#define R251_MP11_MODE_MP_ENABLE_ADAU1452         0x0    /* 0b	[0] */
#define R251_MP11_MODE_MP_MODE_ADAU1452           0x0    /* 000b	[3:1] */
#define R251_MP11_MODE_DEBOUNCE_VALUE_ADAU1452    0x0    /* 0000b	[7:4] */
#define R251_MP11_MODE_SS_SELECT_ADAU1452         0x0    /* 000b	[10:8] */
#define R251_MP11_MODE_MP_ENABLE_ADAU1452_MASK    0x1
#define R251_MP11_MODE_MP_ENABLE_ADAU1452_SHIFT   0
#define R251_MP11_MODE_MP_MODE_ADAU1452_MASK      0xE
#define R251_MP11_MODE_MP_MODE_ADAU1452_SHIFT     1
#define R251_MP11_MODE_DEBOUNCE_VALUE_ADAU1452_MASK 0xF0
#define R251_MP11_MODE_DEBOUNCE_VALUE_ADAU1452_SHIFT 4
#define R251_MP11_MODE_SS_SELECT_ADAU1452_MASK    0x700
#define R251_MP11_MODE_SS_SELECT_ADAU1452_SHIFT   8

/* MP12_MODE (ADAU1452) */
#define R252_MP12_MODE_MP_ENABLE_ADAU1452         0x0    /* 0b	[0] */
#define R252_MP12_MODE_MP_MODE_ADAU1452           0x0    /* 000b	[3:1] */
#define R252_MP12_MODE_DEBOUNCE_VALUE_ADAU1452    0x0    /* 0000b	[7:4] */
#define R252_MP12_MODE_SS_SELECT_ADAU1452         0x0    /* 000b	[10:8] */
#define R252_MP12_MODE_MP_ENABLE_ADAU1452_MASK    0x1
#define R252_MP12_MODE_MP_ENABLE_ADAU1452_SHIFT   0
#define R252_MP12_MODE_MP_MODE_ADAU1452_MASK      0xE
#define R252_MP12_MODE_MP_MODE_ADAU1452_SHIFT     1
#define R252_MP12_MODE_DEBOUNCE_VALUE_ADAU1452_MASK 0xF0
#define R252_MP12_MODE_DEBOUNCE_VALUE_ADAU1452_SHIFT 4
#define R252_MP12_MODE_SS_SELECT_ADAU1452_MASK    0x700
#define R252_MP12_MODE_SS_SELECT_ADAU1452_SHIFT   8

/* MP13_MODE (ADAU1452) */
#define R253_MP13_MODE_MP_ENABLE_ADAU1452         0x0    /* 0b	[0] */
#define R253_MP13_MODE_MP_MODE_ADAU1452           0x0    /* 000b	[3:1] */
#define R253_MP13_MODE_DEBOUNCE_VALUE_ADAU1452    0x0    /* 0000b	[7:4] */
#define R253_MP13_MODE_SS_SELECT_ADAU1452         0x0    /* 000b	[10:8] */
#define R253_MP13_MODE_MP_ENABLE_ADAU1452_MASK    0x1
#define R253_MP13_MODE_MP_ENABLE_ADAU1452_SHIFT   0
#define R253_MP13_MODE_MP_MODE_ADAU1452_MASK      0xE
#define R253_MP13_MODE_MP_MODE_ADAU1452_SHIFT     1
#define R253_MP13_MODE_DEBOUNCE_VALUE_ADAU1452_MASK 0xF0
#define R253_MP13_MODE_DEBOUNCE_VALUE_ADAU1452_SHIFT 4
#define R253_MP13_MODE_SS_SELECT_ADAU1452_MASK    0x700
#define R253_MP13_MODE_SS_SELECT_ADAU1452_SHIFT   8

/* MP0_WRITE (ADAU1452) */
#define R254_MP0_WRITE_MP_REG_WRITE_ADAU1452      0x0    /* 0b	[0] */
#define R254_MP0_WRITE_MP_REG_WRITE_ADAU1452_MASK 0x1
#define R254_MP0_WRITE_MP_REG_WRITE_ADAU1452_SHIFT 0

/* MP1_WRITE (ADAU1452) */
#define R255_MP1_WRITE_MP_REG_WRITE_ADAU1452      0x0    /* 0b	[0] */
#define R255_MP1_WRITE_MP_REG_WRITE_ADAU1452_MASK 0x1
#define R255_MP1_WRITE_MP_REG_WRITE_ADAU1452_SHIFT 0

/* MP2_WRITE (ADAU1452) */
#define R256_MP2_WRITE_MP_REG_WRITE_ADAU1452      0x0    /* 0b	[0] */
#define R256_MP2_WRITE_MP_REG_WRITE_ADAU1452_MASK 0x1
#define R256_MP2_WRITE_MP_REG_WRITE_ADAU1452_SHIFT 0

/* MP3_WRITE (ADAU1452) */
#define R257_MP3_WRITE_MP_REG_WRITE_ADAU1452      0x0    /* 0b	[0] */
#define R257_MP3_WRITE_MP_REG_WRITE_ADAU1452_MASK 0x1
#define R257_MP3_WRITE_MP_REG_WRITE_ADAU1452_SHIFT 0

/* MP4_WRITE (ADAU1452) */
#define R258_MP4_WRITE_MP_REG_WRITE_ADAU1452      0x0    /* 0b	[0] */
#define R258_MP4_WRITE_MP_REG_WRITE_ADAU1452_MASK 0x1
#define R258_MP4_WRITE_MP_REG_WRITE_ADAU1452_SHIFT 0

/* MP5_WRITE (ADAU1452) */
#define R259_MP5_WRITE_MP_REG_WRITE_ADAU1452      0x0    /* 0b	[0] */
#define R259_MP5_WRITE_MP_REG_WRITE_ADAU1452_MASK 0x1
#define R259_MP5_WRITE_MP_REG_WRITE_ADAU1452_SHIFT 0

/* MP6_WRITE (ADAU1452) */
#define R260_MP6_WRITE_MP_REG_WRITE_ADAU1452      0x0    /* 0b	[0] */
#define R260_MP6_WRITE_MP_REG_WRITE_ADAU1452_MASK 0x1
#define R260_MP6_WRITE_MP_REG_WRITE_ADAU1452_SHIFT 0

/* MP7_WRITE (ADAU1452) */
#define R261_MP7_WRITE_MP_REG_WRITE_ADAU1452      0x0    /* 0b	[0] */
#define R261_MP7_WRITE_MP_REG_WRITE_ADAU1452_MASK 0x1
#define R261_MP7_WRITE_MP_REG_WRITE_ADAU1452_SHIFT 0

/* MP8_WRITE (ADAU1452) */
#define R262_MP8_WRITE_MP_REG_WRITE_ADAU1452      0x0    /* 0b	[0] */
#define R262_MP8_WRITE_MP_REG_WRITE_ADAU1452_MASK 0x1
#define R262_MP8_WRITE_MP_REG_WRITE_ADAU1452_SHIFT 0

/* MP9_WRITE (ADAU1452) */
#define R263_MP9_WRITE_MP_REG_WRITE_ADAU1452      0x0    /* 0b	[0] */
#define R263_MP9_WRITE_MP_REG_WRITE_ADAU1452_MASK 0x1
#define R263_MP9_WRITE_MP_REG_WRITE_ADAU1452_SHIFT 0

/* MP10_WRITE (ADAU1452) */
#define R264_MP10_WRITE_MP_REG_WRITE_ADAU1452     0x0    /* 0b	[0] */
#define R264_MP10_WRITE_MP_REG_WRITE_ADAU1452_MASK 0x1
#define R264_MP10_WRITE_MP_REG_WRITE_ADAU1452_SHIFT 0

/* MP11_WRITE (ADAU1452) */
#define R265_MP11_WRITE_MP_REG_WRITE_ADAU1452     0x0    /* 0b	[0] */
#define R265_MP11_WRITE_MP_REG_WRITE_ADAU1452_MASK 0x1
#define R265_MP11_WRITE_MP_REG_WRITE_ADAU1452_SHIFT 0

/* MP12_WRITE (ADAU1452) */
#define R266_MP12_WRITE_MP_REG_WRITE_ADAU1452     0x0    /* 0b	[0] */
#define R266_MP12_WRITE_MP_REG_WRITE_ADAU1452_MASK 0x1
#define R266_MP12_WRITE_MP_REG_WRITE_ADAU1452_SHIFT 0

/* MP13_WRITE (ADAU1452) */
#define R267_MP13_WRITE_MP_REG_WRITE_ADAU1452     0x0    /* 0b	[0] */
#define R267_MP13_WRITE_MP_REG_WRITE_ADAU1452_MASK 0x1
#define R267_MP13_WRITE_MP_REG_WRITE_ADAU1452_SHIFT 0

/* MP0_READ (ADAU1452) */
#define R268_MP0_READ_MP_REG_READ_ADAU1452        0x0    /* 0b	[0] */
#define R268_MP0_READ_MP_REG_READ_ADAU1452_MASK   0x1
#define R268_MP0_READ_MP_REG_READ_ADAU1452_SHIFT  0

/* MP1_READ (ADAU1452) */
#define R269_MP1_READ_MP_REG_READ_ADAU1452        0x0    /* 0b	[0] */
#define R269_MP1_READ_MP_REG_READ_ADAU1452_MASK   0x1
#define R269_MP1_READ_MP_REG_READ_ADAU1452_SHIFT  0

/* MP2_READ (ADAU1452) */
#define R270_MP2_READ_MP_REG_READ_ADAU1452        0x0    /* 0b	[0] */
#define R270_MP2_READ_MP_REG_READ_ADAU1452_MASK   0x1
#define R270_MP2_READ_MP_REG_READ_ADAU1452_SHIFT  0

/* MP3_READ (ADAU1452) */
#define R271_MP3_READ_MP_REG_READ_ADAU1452        0x0    /* 0b	[0] */
#define R271_MP3_READ_MP_REG_READ_ADAU1452_MASK   0x1
#define R271_MP3_READ_MP_REG_READ_ADAU1452_SHIFT  0

/* MP4_READ (ADAU1452) */
#define R272_MP4_READ_MP_REG_READ_ADAU1452        0x0    /* 0b	[0] */
#define R272_MP4_READ_MP_REG_READ_ADAU1452_MASK   0x1
#define R272_MP4_READ_MP_REG_READ_ADAU1452_SHIFT  0

/* MP5_READ (ADAU1452) */
#define R273_MP5_READ_MP_REG_READ_ADAU1452        0x0    /* 0b	[0] */
#define R273_MP5_READ_MP_REG_READ_ADAU1452_MASK   0x1
#define R273_MP5_READ_MP_REG_READ_ADAU1452_SHIFT  0

/* MP6_READ (ADAU1452) */
#define R274_MP6_READ_MP_REG_READ_ADAU1452        0x0    /* 0b	[0] */
#define R274_MP6_READ_MP_REG_READ_ADAU1452_MASK   0x1
#define R274_MP6_READ_MP_REG_READ_ADAU1452_SHIFT  0

/* MP7_READ (ADAU1452) */
#define R275_MP7_READ_MP_REG_READ_ADAU1452        0x0    /* 0b	[0] */
#define R275_MP7_READ_MP_REG_READ_ADAU1452_MASK   0x1
#define R275_MP7_READ_MP_REG_READ_ADAU1452_SHIFT  0

/* MP8_READ (ADAU1452) */
#define R276_MP8_READ_MP_REG_READ_ADAU1452        0x0    /* 0b	[0] */
#define R276_MP8_READ_MP_REG_READ_ADAU1452_MASK   0x1
#define R276_MP8_READ_MP_REG_READ_ADAU1452_SHIFT  0

/* MP9_READ (ADAU1452) */
#define R277_MP9_READ_MP_REG_READ_ADAU1452        0x0    /* 0b	[0] */
#define R277_MP9_READ_MP_REG_READ_ADAU1452_MASK   0x1
#define R277_MP9_READ_MP_REG_READ_ADAU1452_SHIFT  0

/* MP10_READ (ADAU1452) */
#define R278_MP10_READ_MP_REG_READ_ADAU1452       0x0    /* 0b	[0] */
#define R278_MP10_READ_MP_REG_READ_ADAU1452_MASK  0x1
#define R278_MP10_READ_MP_REG_READ_ADAU1452_SHIFT 0

/* MP11_READ (ADAU1452) */
#define R279_MP11_READ_MP_REG_READ_ADAU1452       0x0    /* 0b	[0] */
#define R279_MP11_READ_MP_REG_READ_ADAU1452_MASK  0x1
#define R279_MP11_READ_MP_REG_READ_ADAU1452_SHIFT 0

/* MP12_READ (ADAU1452) */
#define R280_MP12_READ_MP_REG_READ_ADAU1452       0x0    /* 0b	[0] */
#define R280_MP12_READ_MP_REG_READ_ADAU1452_MASK  0x1
#define R280_MP12_READ_MP_REG_READ_ADAU1452_SHIFT 0

/* MP13_READ (ADAU1452) */
#define R281_MP13_READ_MP_REG_READ_ADAU1452       0x0    /* 0b	[0] */
#define R281_MP13_READ_MP_REG_READ_ADAU1452_MASK  0x1
#define R281_MP13_READ_MP_REG_READ_ADAU1452_SHIFT 0

/* DMIC_CTRL0 (ADAU1452) */
#define R282_DMIC_CTRL0_DMIC_EN_ADAU1452          0x0    /* 0b	[0] */
#define R282_DMIC_CTRL0_DMSW_ADAU1452             0x0    /* 0b	[1] */
#define R282_DMIC_CTRL0_DMPOL_ADAU1452            0x0    /* 0b	[2] */
#define R282_DMIC_CTRL0_HPF_ADAU1452              0x0    /* 0b	[3] */
#define R282_DMIC_CTRL0_DMIC_CLK_ADAU1452         0x0    /* 000b	[6:4] */
#define R282_DMIC_CTRL0_MIC_DATA_SRC_ADAU1452     0x0    /* 0000b	[11:8] */
#define R282_DMIC_CTRL0_CUTOFF_ADAU1452           0x0    /* 000b	[14:12] */
#define R282_DMIC_CTRL0_DMIC_EN_ADAU1452_MASK     0x1
#define R282_DMIC_CTRL0_DMIC_EN_ADAU1452_SHIFT    0
#define R282_DMIC_CTRL0_DMSW_ADAU1452_MASK        0x2
#define R282_DMIC_CTRL0_DMSW_ADAU1452_SHIFT       1
#define R282_DMIC_CTRL0_DMPOL_ADAU1452_MASK       0x4
#define R282_DMIC_CTRL0_DMPOL_ADAU1452_SHIFT      2
#define R282_DMIC_CTRL0_HPF_ADAU1452_MASK         0x8
#define R282_DMIC_CTRL0_HPF_ADAU1452_SHIFT        3
#define R282_DMIC_CTRL0_DMIC_CLK_ADAU1452_MASK    0x70
#define R282_DMIC_CTRL0_DMIC_CLK_ADAU1452_SHIFT   4
#define R282_DMIC_CTRL0_MIC_DATA_SRC_ADAU1452_MASK 0xF00
#define R282_DMIC_CTRL0_MIC_DATA_SRC_ADAU1452_SHIFT 8
#define R282_DMIC_CTRL0_CUTOFF_ADAU1452_MASK      0x7000
#define R282_DMIC_CTRL0_CUTOFF_ADAU1452_SHIFT     12

/* DMIC_CTRL1 (ADAU1452) */
#define R283_DMIC_CTRL1_DMIC_EN_ADAU1452          0x0    /* 0b	[0] */
#define R283_DMIC_CTRL1_DMSW_ADAU1452             0x0    /* 0b	[1] */
#define R283_DMIC_CTRL1_DMPOL_ADAU1452            0x0    /* 0b	[2] */
#define R283_DMIC_CTRL1_HPF_ADAU1452              0x0    /* 0b	[3] */
#define R283_DMIC_CTRL1_DMIC_CLK_ADAU1452         0x0    /* 000b	[6:4] */
#define R283_DMIC_CTRL1_MIC_DATA_SRC_ADAU1452     0x0    /* 0000b	[11:8] */
#define R283_DMIC_CTRL1_CUTOFF_ADAU1452           0x0    /* 000b	[14:12] */
#define R283_DMIC_CTRL1_DMIC_EN_ADAU1452_MASK     0x1
#define R283_DMIC_CTRL1_DMIC_EN_ADAU1452_SHIFT    0
#define R283_DMIC_CTRL1_DMSW_ADAU1452_MASK        0x2
#define R283_DMIC_CTRL1_DMSW_ADAU1452_SHIFT       1
#define R283_DMIC_CTRL1_DMPOL_ADAU1452_MASK       0x4
#define R283_DMIC_CTRL1_DMPOL_ADAU1452_SHIFT      2
#define R283_DMIC_CTRL1_HPF_ADAU1452_MASK         0x8
#define R283_DMIC_CTRL1_HPF_ADAU1452_SHIFT        3
#define R283_DMIC_CTRL1_DMIC_CLK_ADAU1452_MASK    0x70
#define R283_DMIC_CTRL1_DMIC_CLK_ADAU1452_SHIFT   4
#define R283_DMIC_CTRL1_MIC_DATA_SRC_ADAU1452_MASK 0xF00
#define R283_DMIC_CTRL1_MIC_DATA_SRC_ADAU1452_SHIFT 8
#define R283_DMIC_CTRL1_CUTOFF_ADAU1452_MASK      0x7000
#define R283_DMIC_CTRL1_CUTOFF_ADAU1452_SHIFT     12

/* ASRC_LOCK (ADAU1452) */
#define R284_ASRC_LOCK_ASRC0L_ADAU1452            0x0    /* 0b	[0] */
#define R284_ASRC_LOCK_ASRC1L_ADAU1452            0x0    /* 0b	[1] */
#define R284_ASRC_LOCK_ASRC2L_ADAU1452            0x0    /* 0b	[2] */
#define R284_ASRC_LOCK_ASRC3L_ADAU1452            0x0    /* 0b	[3] */
#define R284_ASRC_LOCK_ASRC4L_ADAU1452            0x0    /* 0b	[4] */
#define R284_ASRC_LOCK_ASRC5L_ADAU1452            0x0    /* 0b	[5] */
#define R284_ASRC_LOCK_ASRC6L_ADAU1452            0x0    /* 0b	[6] */
#define R284_ASRC_LOCK_ASRC7L_ADAU1452            0x0    /* 0b	[7] */
#define R284_ASRC_LOCK_ASRC0L_ADAU1452_MASK       0x1
#define R284_ASRC_LOCK_ASRC0L_ADAU1452_SHIFT      0
#define R284_ASRC_LOCK_ASRC1L_ADAU1452_MASK       0x2
#define R284_ASRC_LOCK_ASRC1L_ADAU1452_SHIFT      1
#define R284_ASRC_LOCK_ASRC2L_ADAU1452_MASK       0x4
#define R284_ASRC_LOCK_ASRC2L_ADAU1452_SHIFT      2
#define R284_ASRC_LOCK_ASRC3L_ADAU1452_MASK       0x8
#define R284_ASRC_LOCK_ASRC3L_ADAU1452_SHIFT      3
#define R284_ASRC_LOCK_ASRC4L_ADAU1452_MASK       0x10
#define R284_ASRC_LOCK_ASRC4L_ADAU1452_SHIFT      4
#define R284_ASRC_LOCK_ASRC5L_ADAU1452_MASK       0x20
#define R284_ASRC_LOCK_ASRC5L_ADAU1452_SHIFT      5
#define R284_ASRC_LOCK_ASRC6L_ADAU1452_MASK       0x40
#define R284_ASRC_LOCK_ASRC6L_ADAU1452_SHIFT      6
#define R284_ASRC_LOCK_ASRC7L_ADAU1452_MASK       0x80
#define R284_ASRC_LOCK_ASRC7L_ADAU1452_SHIFT      7

/* ASRC_MUTE (ADAU1452) */
#define R285_ASRC_MUTE_ASRC0M_ADAU1452            0x0    /* 0b	[0] */
#define R285_ASRC_MUTE_ASRC1M_ADAU1452            0x0    /* 0b	[1] */
#define R285_ASRC_MUTE_ASRC2M_ADAU1452            0x0    /* 0b	[2] */
#define R285_ASRC_MUTE_ASRC3M_ADAU1452            0x0    /* 0b	[3] */
#define R285_ASRC_MUTE_ASRC4M_ADAU1452            0x0    /* 0b	[4] */
#define R285_ASRC_MUTE_ASRC5M_ADAU1452            0x0    /* 0b	[5] */
#define R285_ASRC_MUTE_ASRC6M_ADAU1452            0x0    /* 0b	[6] */
#define R285_ASRC_MUTE_ASRC7M_ADAU1452            0x0    /* 0b	[7] */
#define R285_ASRC_MUTE_ASRC_RAMP0_ADAU1452        0x0    /* 0b	[8] */
#define R285_ASRC_MUTE_ASRC_RAMP1_ADAU1452        0x0    /* 0b	[9] */
#define R285_ASRC_MUTE_LOCKMUTE_ADAU1452          0x0    /* 0b	[10] */
#define R285_ASRC_MUTE_ASRC0M_ADAU1452_MASK       0x1
#define R285_ASRC_MUTE_ASRC0M_ADAU1452_SHIFT      0
#define R285_ASRC_MUTE_ASRC1M_ADAU1452_MASK       0x2
#define R285_ASRC_MUTE_ASRC1M_ADAU1452_SHIFT      1
#define R285_ASRC_MUTE_ASRC2M_ADAU1452_MASK       0x4
#define R285_ASRC_MUTE_ASRC2M_ADAU1452_SHIFT      2
#define R285_ASRC_MUTE_ASRC3M_ADAU1452_MASK       0x8
#define R285_ASRC_MUTE_ASRC3M_ADAU1452_SHIFT      3
#define R285_ASRC_MUTE_ASRC4M_ADAU1452_MASK       0x10
#define R285_ASRC_MUTE_ASRC4M_ADAU1452_SHIFT      4
#define R285_ASRC_MUTE_ASRC5M_ADAU1452_MASK       0x20
#define R285_ASRC_MUTE_ASRC5M_ADAU1452_SHIFT      5
#define R285_ASRC_MUTE_ASRC6M_ADAU1452_MASK       0x40
#define R285_ASRC_MUTE_ASRC6M_ADAU1452_SHIFT      6
#define R285_ASRC_MUTE_ASRC7M_ADAU1452_MASK       0x80
#define R285_ASRC_MUTE_ASRC7M_ADAU1452_SHIFT      7
#define R285_ASRC_MUTE_ASRC_RAMP0_ADAU1452_MASK   0x100
#define R285_ASRC_MUTE_ASRC_RAMP0_ADAU1452_SHIFT  8
#define R285_ASRC_MUTE_ASRC_RAMP1_ADAU1452_MASK   0x200
#define R285_ASRC_MUTE_ASRC_RAMP1_ADAU1452_SHIFT  9
#define R285_ASRC_MUTE_LOCKMUTE_ADAU1452_MASK     0x400
#define R285_ASRC_MUTE_LOCKMUTE_ADAU1452_SHIFT    10

/* ASRC0_RATIO (ADAU1452) */
#define R286_ASRC0_RATIO_ASRC_RATIO_ADAU1452      0x0000 /* 0000000000000000b	[15:0] */
#define R286_ASRC0_RATIO_ASRC_RATIO_ADAU1452_MASK 0xFFFF
#define R286_ASRC0_RATIO_ASRC_RATIO_ADAU1452_SHIFT 0

/* ASRC1_RATIO (ADAU1452) */
#define R287_ASRC1_RATIO_ASRC_RATIO_ADAU1452      0x0000 /* 0000000000000000b	[15:0] */
#define R287_ASRC1_RATIO_ASRC_RATIO_ADAU1452_MASK 0xFFFF
#define R287_ASRC1_RATIO_ASRC_RATIO_ADAU1452_SHIFT 0

/* ASRC2_RATIO (ADAU1452) */
#define R288_ASRC2_RATIO_ASRC_RATIO_ADAU1452      0x0000 /* 0000000000000000b	[15:0] */
#define R288_ASRC2_RATIO_ASRC_RATIO_ADAU1452_MASK 0xFFFF
#define R288_ASRC2_RATIO_ASRC_RATIO_ADAU1452_SHIFT 0

/* ASRC3_RATIO (ADAU1452) */
#define R289_ASRC3_RATIO_ASRC_RATIO_ADAU1452      0x0000 /* 0000000000000000b	[15:0] */
#define R289_ASRC3_RATIO_ASRC_RATIO_ADAU1452_MASK 0xFFFF
#define R289_ASRC3_RATIO_ASRC_RATIO_ADAU1452_SHIFT 0

/* ASRC4_RATIO (ADAU1452) */
#define R290_ASRC4_RATIO_ASRC_RATIO_ADAU1452      0x0000 /* 0000000000000000b	[15:0] */
#define R290_ASRC4_RATIO_ASRC_RATIO_ADAU1452_MASK 0xFFFF
#define R290_ASRC4_RATIO_ASRC_RATIO_ADAU1452_SHIFT 0

/* ASRC5_RATIO (ADAU1452) */
#define R291_ASRC5_RATIO_ASRC_RATIO_ADAU1452      0x0000 /* 0000000000000000b	[15:0] */
#define R291_ASRC5_RATIO_ASRC_RATIO_ADAU1452_MASK 0xFFFF
#define R291_ASRC5_RATIO_ASRC_RATIO_ADAU1452_SHIFT 0

/* ASRC6_RATIO (ADAU1452) */
#define R292_ASRC6_RATIO_ASRC_RATIO_ADAU1452      0x0000 /* 0000000000000000b	[15:0] */
#define R292_ASRC6_RATIO_ASRC_RATIO_ADAU1452_MASK 0xFFFF
#define R292_ASRC6_RATIO_ASRC_RATIO_ADAU1452_SHIFT 0

/* ASRC7_RATIO (ADAU1452) */
#define R293_ASRC7_RATIO_ASRC_RATIO_ADAU1452      0x0000 /* 0000000000000000b	[15:0] */
#define R293_ASRC7_RATIO_ASRC_RATIO_ADAU1452_MASK 0xFFFF
#define R293_ASRC7_RATIO_ASRC_RATIO_ADAU1452_SHIFT 0

/* ADC_READ0 (ADAU1452) */
#define R294_ADC_READ0_ADC_VALUE_ADAU1452         0x0000 /* 0000000000000000b	[15:0] */
#define R294_ADC_READ0_ADC_VALUE_ADAU1452_MASK    0xFFFF
#define R294_ADC_READ0_ADC_VALUE_ADAU1452_SHIFT   0

/* ADC_READ1 (ADAU1452) */
#define R295_ADC_READ1_ADC_VALUE_ADAU1452         0x0000 /* 0000000000000000b	[15:0] */
#define R295_ADC_READ1_ADC_VALUE_ADAU1452_MASK    0xFFFF
#define R295_ADC_READ1_ADC_VALUE_ADAU1452_SHIFT   0

/* ADC_READ2 (ADAU1452) */
#define R296_ADC_READ2_ADC_VALUE_ADAU1452         0x0000 /* 0000000000000000b	[15:0] */
#define R296_ADC_READ2_ADC_VALUE_ADAU1452_MASK    0xFFFF
#define R296_ADC_READ2_ADC_VALUE_ADAU1452_SHIFT   0

/* ADC_READ3 (ADAU1452) */
#define R297_ADC_READ3_ADC_VALUE_ADAU1452         0x0000 /* 0000000000000000b	[15:0] */
#define R297_ADC_READ3_ADC_VALUE_ADAU1452_MASK    0xFFFF
#define R297_ADC_READ3_ADC_VALUE_ADAU1452_SHIFT   0

/* ADC_READ4 (ADAU1452) */
#define R298_ADC_READ4_ADC_VALUE_ADAU1452         0x0000 /* 0000000000000000b	[15:0] */
#define R298_ADC_READ4_ADC_VALUE_ADAU1452_MASK    0xFFFF
#define R298_ADC_READ4_ADC_VALUE_ADAU1452_SHIFT   0

/* ADC_READ5 (ADAU1452) */
#define R299_ADC_READ5_ADC_VALUE_ADAU1452         0x0000 /* 0000000000000000b	[15:0] */
#define R299_ADC_READ5_ADC_VALUE_ADAU1452_MASK    0xFFFF
#define R299_ADC_READ5_ADC_VALUE_ADAU1452_SHIFT   0

/* SPDIF_LOCK_DET (ADAU1452) */
#define R300_SPDIF_LOCK_DET_LOCK_ADAU1452         0x0    /* 0b	[0] */
#define R300_SPDIF_LOCK_DET_LOCK_ADAU1452_MASK    0x1
#define R300_SPDIF_LOCK_DET_LOCK_ADAU1452_SHIFT   0

/* SPDIF_RX_CTRL (ADAU1452) */
#define R301_SPDIF_RX_CTRL_RX_LENGTHCTRL_ADAU1452 0x0    /* 00b	[1:0] */
#define R301_SPDIF_RX_CTRL_FSOUTSTRENGTH_ADAU1452 0x0    /* 0b	[2] */
#define R301_SPDIF_RX_CTRL_FASTLOCK_ADAU1452      0x0    /* 0b	[3] */
#define R301_SPDIF_RX_CTRL_RX_LENGTHCTRL_ADAU1452_MASK 0x3
#define R301_SPDIF_RX_CTRL_RX_LENGTHCTRL_ADAU1452_SHIFT 0
#define R301_SPDIF_RX_CTRL_FSOUTSTRENGTH_ADAU1452_MASK 0x4
#define R301_SPDIF_RX_CTRL_FSOUTSTRENGTH_ADAU1452_SHIFT 2
#define R301_SPDIF_RX_CTRL_FASTLOCK_ADAU1452_MASK 0x8
#define R301_SPDIF_RX_CTRL_FASTLOCK_ADAU1452_SHIFT 3

/* SPDIF_RX_DECODE (ADAU1452) */
#define R302_SPDIF_RX_DECODE_AUDIO_TYPE_ADAU1452  0x0    /* 0b	[0] */
#define R302_SPDIF_RX_DECODE_COMPR_TYPE_ADAU1452  0x0    /* 0b	[1] */
#define R302_SPDIF_RX_DECODE_RX_WORDLENGTH_L_ADAU1452 0x2 /* 0010b	[5:2] */
#define R302_SPDIF_RX_DECODE_RX_WORDLENGTH_R_ADAU1452 0x2 /* 0010b	[9:6] */
#define R302_SPDIF_RX_DECODE_AUDIO_TYPE_ADAU1452_MASK 0x1
#define R302_SPDIF_RX_DECODE_AUDIO_TYPE_ADAU1452_SHIFT 0
#define R302_SPDIF_RX_DECODE_COMPR_TYPE_ADAU1452_MASK 0x2
#define R302_SPDIF_RX_DECODE_COMPR_TYPE_ADAU1452_SHIFT 1
#define R302_SPDIF_RX_DECODE_RX_WORDLENGTH_L_ADAU1452_MASK 0x3C
#define R302_SPDIF_RX_DECODE_RX_WORDLENGTH_L_ADAU1452_SHIFT 2
#define R302_SPDIF_RX_DECODE_RX_WORDLENGTH_R_ADAU1452_MASK 0x3C0
#define R302_SPDIF_RX_DECODE_RX_WORDLENGTH_R_ADAU1452_SHIFT 6

/* SPDIF_RX_COMPRMODE (ADAU1452) */
#define R303_SPDIF_RX_COMPRMODE_COMPR_MODE_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R303_SPDIF_RX_COMPRMODE_COMPR_MODE_ADAU1452_MASK 0xFFFF
#define R303_SPDIF_RX_COMPRMODE_COMPR_MODE_ADAU1452_SHIFT 0

/* SPDIF_RESTART (ADAU1452) */
#define R304_SPDIF_RESTART_RESTART_AUDIO_ADAU1452 0x0    /* 0b	[0] */
#define R304_SPDIF_RESTART_RESTART_AUDIO_ADAU1452_MASK 0x1
#define R304_SPDIF_RESTART_RESTART_AUDIO_ADAU1452_SHIFT 0

/* SPDIF_LOSS_OF_LOCK (ADAU1452) */
#define R305_SPDIF_LOSS_OF_LOCK_LOSS_OF_LOCK_ADAU1452 0x0 /* 0b	[0] */
#define R305_SPDIF_LOSS_OF_LOCK_LOSS_OF_LOCK_ADAU1452_MASK 0x1
#define R305_SPDIF_LOSS_OF_LOCK_LOSS_OF_LOCK_ADAU1452_SHIFT 0

/* SPDIF_AUX_EN (ADAU1452) */
#define R306_SPDIF_AUX_EN_TDMOUT_ADAU1452         0x0    /* 0000b	[3:0] */
#define R306_SPDIF_AUX_EN_TDMOUT_CLK_ADAU1452     0x0    /* 0b	[4] */
#define R306_SPDIF_AUX_EN_TDMOUT_ADAU1452_MASK    0xF
#define R306_SPDIF_AUX_EN_TDMOUT_ADAU1452_SHIFT   0
#define R306_SPDIF_AUX_EN_TDMOUT_CLK_ADAU1452_MASK 0x10
#define R306_SPDIF_AUX_EN_TDMOUT_CLK_ADAU1452_SHIFT 4

/* SPDIF_RX_AUXBIT_READY (ADAU1452) */
#define R307_SPDIF_RX_AUXBIT_READY_AUXBITS_READY_ADAU1452 0x0 /* 0b	[0] */
#define R307_SPDIF_RX_AUXBIT_READY_AUXBITS_READY_ADAU1452_MASK 0x1
#define R307_SPDIF_RX_AUXBIT_READY_AUXBITS_READY_ADAU1452_SHIFT 0

/* SPDIF_RX_CS_LEFT_0 (ADAU1452) */
#define R308_SPDIF_RX_CS_LEFT_0_SPDIF_RX_CS_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R308_SPDIF_RX_CS_LEFT_0_SPDIF_RX_CS_LEFT_ADAU1452_MASK 0xFFFF
#define R308_SPDIF_RX_CS_LEFT_0_SPDIF_RX_CS_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_CS_LEFT_1 (ADAU1452) */
#define R309_SPDIF_RX_CS_LEFT_1_SPDIF_RX_CS_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R309_SPDIF_RX_CS_LEFT_1_SPDIF_RX_CS_LEFT_ADAU1452_MASK 0xFFFF
#define R309_SPDIF_RX_CS_LEFT_1_SPDIF_RX_CS_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_CS_LEFT_2 (ADAU1452) */
#define R310_SPDIF_RX_CS_LEFT_2_SPDIF_RX_CS_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R310_SPDIF_RX_CS_LEFT_2_SPDIF_RX_CS_LEFT_ADAU1452_MASK 0xFFFF
#define R310_SPDIF_RX_CS_LEFT_2_SPDIF_RX_CS_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_CS_LEFT_3 (ADAU1452) */
#define R311_SPDIF_RX_CS_LEFT_3_SPDIF_RX_CS_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R311_SPDIF_RX_CS_LEFT_3_SPDIF_RX_CS_LEFT_ADAU1452_MASK 0xFFFF
#define R311_SPDIF_RX_CS_LEFT_3_SPDIF_RX_CS_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_CS_LEFT_4 (ADAU1452) */
#define R312_SPDIF_RX_CS_LEFT_4_SPDIF_RX_CS_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R312_SPDIF_RX_CS_LEFT_4_SPDIF_RX_CS_LEFT_ADAU1452_MASK 0xFFFF
#define R312_SPDIF_RX_CS_LEFT_4_SPDIF_RX_CS_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_CS_LEFT_5 (ADAU1452) */
#define R313_SPDIF_RX_CS_LEFT_5_SPDIF_RX_CS_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R313_SPDIF_RX_CS_LEFT_5_SPDIF_RX_CS_LEFT_ADAU1452_MASK 0xFFFF
#define R313_SPDIF_RX_CS_LEFT_5_SPDIF_RX_CS_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_CS_LEFT_6 (ADAU1452) */
#define R314_SPDIF_RX_CS_LEFT_6_SPDIF_RX_CS_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R314_SPDIF_RX_CS_LEFT_6_SPDIF_RX_CS_LEFT_ADAU1452_MASK 0xFFFF
#define R314_SPDIF_RX_CS_LEFT_6_SPDIF_RX_CS_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_CS_LEFT_7 (ADAU1452) */
#define R315_SPDIF_RX_CS_LEFT_7_SPDIF_RX_CS_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R315_SPDIF_RX_CS_LEFT_7_SPDIF_RX_CS_LEFT_ADAU1452_MASK 0xFFFF
#define R315_SPDIF_RX_CS_LEFT_7_SPDIF_RX_CS_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_CS_LEFT_8 (ADAU1452) */
#define R316_SPDIF_RX_CS_LEFT_8_SPDIF_RX_CS_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R316_SPDIF_RX_CS_LEFT_8_SPDIF_RX_CS_LEFT_ADAU1452_MASK 0xFFFF
#define R316_SPDIF_RX_CS_LEFT_8_SPDIF_RX_CS_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_CS_LEFT_9 (ADAU1452) */
#define R317_SPDIF_RX_CS_LEFT_9_SPDIF_RX_CS_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R317_SPDIF_RX_CS_LEFT_9_SPDIF_RX_CS_LEFT_ADAU1452_MASK 0xFFFF
#define R317_SPDIF_RX_CS_LEFT_9_SPDIF_RX_CS_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_CS_LEFT_10 (ADAU1452) */
#define R318_SPDIF_RX_CS_LEFT_10_SPDIF_RX_CS_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R318_SPDIF_RX_CS_LEFT_10_SPDIF_RX_CS_LEFT_ADAU1452_MASK 0xFFFF
#define R318_SPDIF_RX_CS_LEFT_10_SPDIF_RX_CS_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_CS_LEFT_11 (ADAU1452) */
#define R319_SPDIF_RX_CS_LEFT_11_SPDIF_RX_CS_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R319_SPDIF_RX_CS_LEFT_11_SPDIF_RX_CS_LEFT_ADAU1452_MASK 0xFFFF
#define R319_SPDIF_RX_CS_LEFT_11_SPDIF_RX_CS_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_CS_RIGHT_0 (ADAU1452) */
#define R320_SPDIF_RX_CS_RIGHT_0_SPDIF_RX_CS_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R320_SPDIF_RX_CS_RIGHT_0_SPDIF_RX_CS_RIGHT_ADAU1452_MASK 0xFFFF
#define R320_SPDIF_RX_CS_RIGHT_0_SPDIF_RX_CS_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_CS_RIGHT_1 (ADAU1452) */
#define R321_SPDIF_RX_CS_RIGHT_1_SPDIF_RX_CS_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R321_SPDIF_RX_CS_RIGHT_1_SPDIF_RX_CS_RIGHT_ADAU1452_MASK 0xFFFF
#define R321_SPDIF_RX_CS_RIGHT_1_SPDIF_RX_CS_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_CS_RIGHT_2 (ADAU1452) */
#define R322_SPDIF_RX_CS_RIGHT_2_SPDIF_RX_CS_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R322_SPDIF_RX_CS_RIGHT_2_SPDIF_RX_CS_RIGHT_ADAU1452_MASK 0xFFFF
#define R322_SPDIF_RX_CS_RIGHT_2_SPDIF_RX_CS_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_CS_RIGHT_3 (ADAU1452) */
#define R323_SPDIF_RX_CS_RIGHT_3_SPDIF_RX_CS_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R323_SPDIF_RX_CS_RIGHT_3_SPDIF_RX_CS_RIGHT_ADAU1452_MASK 0xFFFF
#define R323_SPDIF_RX_CS_RIGHT_3_SPDIF_RX_CS_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_CS_RIGHT_4 (ADAU1452) */
#define R324_SPDIF_RX_CS_RIGHT_4_SPDIF_RX_CS_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R324_SPDIF_RX_CS_RIGHT_4_SPDIF_RX_CS_RIGHT_ADAU1452_MASK 0xFFFF
#define R324_SPDIF_RX_CS_RIGHT_4_SPDIF_RX_CS_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_CS_RIGHT_5 (ADAU1452) */
#define R325_SPDIF_RX_CS_RIGHT_5_SPDIF_RX_CS_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R325_SPDIF_RX_CS_RIGHT_5_SPDIF_RX_CS_RIGHT_ADAU1452_MASK 0xFFFF
#define R325_SPDIF_RX_CS_RIGHT_5_SPDIF_RX_CS_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_CS_RIGHT_6 (ADAU1452) */
#define R326_SPDIF_RX_CS_RIGHT_6_SPDIF_RX_CS_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R326_SPDIF_RX_CS_RIGHT_6_SPDIF_RX_CS_RIGHT_ADAU1452_MASK 0xFFFF
#define R326_SPDIF_RX_CS_RIGHT_6_SPDIF_RX_CS_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_CS_RIGHT_7 (ADAU1452) */
#define R327_SPDIF_RX_CS_RIGHT_7_SPDIF_RX_CS_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R327_SPDIF_RX_CS_RIGHT_7_SPDIF_RX_CS_RIGHT_ADAU1452_MASK 0xFFFF
#define R327_SPDIF_RX_CS_RIGHT_7_SPDIF_RX_CS_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_CS_RIGHT_8 (ADAU1452) */
#define R328_SPDIF_RX_CS_RIGHT_8_SPDIF_RX_CS_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R328_SPDIF_RX_CS_RIGHT_8_SPDIF_RX_CS_RIGHT_ADAU1452_MASK 0xFFFF
#define R328_SPDIF_RX_CS_RIGHT_8_SPDIF_RX_CS_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_CS_RIGHT_9 (ADAU1452) */
#define R329_SPDIF_RX_CS_RIGHT_9_SPDIF_RX_CS_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R329_SPDIF_RX_CS_RIGHT_9_SPDIF_RX_CS_RIGHT_ADAU1452_MASK 0xFFFF
#define R329_SPDIF_RX_CS_RIGHT_9_SPDIF_RX_CS_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_CS_RIGHT_10 (ADAU1452) */
#define R330_SPDIF_RX_CS_RIGHT_10_SPDIF_RX_CS_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R330_SPDIF_RX_CS_RIGHT_10_SPDIF_RX_CS_RIGHT_ADAU1452_MASK 0xFFFF
#define R330_SPDIF_RX_CS_RIGHT_10_SPDIF_RX_CS_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_CS_RIGHT_11 (ADAU1452) */
#define R331_SPDIF_RX_CS_RIGHT_11_SPDIF_RX_CS_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R331_SPDIF_RX_CS_RIGHT_11_SPDIF_RX_CS_RIGHT_ADAU1452_MASK 0xFFFF
#define R331_SPDIF_RX_CS_RIGHT_11_SPDIF_RX_CS_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_UD_LEFT_0 (ADAU1452) */
#define R332_SPDIF_RX_UD_LEFT_0_SPDIF_RX_UD_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R332_SPDIF_RX_UD_LEFT_0_SPDIF_RX_UD_LEFT_ADAU1452_MASK 0xFFFF
#define R332_SPDIF_RX_UD_LEFT_0_SPDIF_RX_UD_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_UD_LEFT_1 (ADAU1452) */
#define R333_SPDIF_RX_UD_LEFT_1_SPDIF_RX_UD_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R333_SPDIF_RX_UD_LEFT_1_SPDIF_RX_UD_LEFT_ADAU1452_MASK 0xFFFF
#define R333_SPDIF_RX_UD_LEFT_1_SPDIF_RX_UD_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_UD_LEFT_2 (ADAU1452) */
#define R334_SPDIF_RX_UD_LEFT_2_SPDIF_RX_UD_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R334_SPDIF_RX_UD_LEFT_2_SPDIF_RX_UD_LEFT_ADAU1452_MASK 0xFFFF
#define R334_SPDIF_RX_UD_LEFT_2_SPDIF_RX_UD_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_UD_LEFT_3 (ADAU1452) */
#define R335_SPDIF_RX_UD_LEFT_3_SPDIF_RX_UD_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R335_SPDIF_RX_UD_LEFT_3_SPDIF_RX_UD_LEFT_ADAU1452_MASK 0xFFFF
#define R335_SPDIF_RX_UD_LEFT_3_SPDIF_RX_UD_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_UD_LEFT_4 (ADAU1452) */
#define R336_SPDIF_RX_UD_LEFT_4_SPDIF_RX_UD_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R336_SPDIF_RX_UD_LEFT_4_SPDIF_RX_UD_LEFT_ADAU1452_MASK 0xFFFF
#define R336_SPDIF_RX_UD_LEFT_4_SPDIF_RX_UD_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_UD_LEFT_5 (ADAU1452) */
#define R337_SPDIF_RX_UD_LEFT_5_SPDIF_RX_UD_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R337_SPDIF_RX_UD_LEFT_5_SPDIF_RX_UD_LEFT_ADAU1452_MASK 0xFFFF
#define R337_SPDIF_RX_UD_LEFT_5_SPDIF_RX_UD_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_UD_LEFT_6 (ADAU1452) */
#define R338_SPDIF_RX_UD_LEFT_6_SPDIF_RX_UD_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R338_SPDIF_RX_UD_LEFT_6_SPDIF_RX_UD_LEFT_ADAU1452_MASK 0xFFFF
#define R338_SPDIF_RX_UD_LEFT_6_SPDIF_RX_UD_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_UD_LEFT_7 (ADAU1452) */
#define R339_SPDIF_RX_UD_LEFT_7_SPDIF_RX_UD_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R339_SPDIF_RX_UD_LEFT_7_SPDIF_RX_UD_LEFT_ADAU1452_MASK 0xFFFF
#define R339_SPDIF_RX_UD_LEFT_7_SPDIF_RX_UD_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_UD_LEFT_8 (ADAU1452) */
#define R340_SPDIF_RX_UD_LEFT_8_SPDIF_RX_UD_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R340_SPDIF_RX_UD_LEFT_8_SPDIF_RX_UD_LEFT_ADAU1452_MASK 0xFFFF
#define R340_SPDIF_RX_UD_LEFT_8_SPDIF_RX_UD_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_UD_LEFT_9 (ADAU1452) */
#define R341_SPDIF_RX_UD_LEFT_9_SPDIF_RX_UD_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R341_SPDIF_RX_UD_LEFT_9_SPDIF_RX_UD_LEFT_ADAU1452_MASK 0xFFFF
#define R341_SPDIF_RX_UD_LEFT_9_SPDIF_RX_UD_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_UD_LEFT_10 (ADAU1452) */
#define R342_SPDIF_RX_UD_LEFT_10_SPDIF_RX_UD_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R342_SPDIF_RX_UD_LEFT_10_SPDIF_RX_UD_LEFT_ADAU1452_MASK 0xFFFF
#define R342_SPDIF_RX_UD_LEFT_10_SPDIF_RX_UD_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_UD_LEFT_11 (ADAU1452) */
#define R343_SPDIF_RX_UD_LEFT_11_SPDIF_RX_UD_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R343_SPDIF_RX_UD_LEFT_11_SPDIF_RX_UD_LEFT_ADAU1452_MASK 0xFFFF
#define R343_SPDIF_RX_UD_LEFT_11_SPDIF_RX_UD_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_UD_RIGHT_0 (ADAU1452) */
#define R344_SPDIF_RX_UD_RIGHT_0_SPDIF_RX_UD_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R344_SPDIF_RX_UD_RIGHT_0_SPDIF_RX_UD_RIGHT_ADAU1452_MASK 0xFFFF
#define R344_SPDIF_RX_UD_RIGHT_0_SPDIF_RX_UD_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_UD_RIGHT_1 (ADAU1452) */
#define R345_SPDIF_RX_UD_RIGHT_1_SPDIF_RX_UD_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R345_SPDIF_RX_UD_RIGHT_1_SPDIF_RX_UD_RIGHT_ADAU1452_MASK 0xFFFF
#define R345_SPDIF_RX_UD_RIGHT_1_SPDIF_RX_UD_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_UD_RIGHT_2 (ADAU1452) */
#define R346_SPDIF_RX_UD_RIGHT_2_SPDIF_RX_UD_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R346_SPDIF_RX_UD_RIGHT_2_SPDIF_RX_UD_RIGHT_ADAU1452_MASK 0xFFFF
#define R346_SPDIF_RX_UD_RIGHT_2_SPDIF_RX_UD_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_UD_RIGHT_3 (ADAU1452) */
#define R347_SPDIF_RX_UD_RIGHT_3_SPDIF_RX_UD_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R347_SPDIF_RX_UD_RIGHT_3_SPDIF_RX_UD_RIGHT_ADAU1452_MASK 0xFFFF
#define R347_SPDIF_RX_UD_RIGHT_3_SPDIF_RX_UD_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_UD_RIGHT_4 (ADAU1452) */
#define R348_SPDIF_RX_UD_RIGHT_4_SPDIF_RX_UD_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R348_SPDIF_RX_UD_RIGHT_4_SPDIF_RX_UD_RIGHT_ADAU1452_MASK 0xFFFF
#define R348_SPDIF_RX_UD_RIGHT_4_SPDIF_RX_UD_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_UD_RIGHT_5 (ADAU1452) */
#define R349_SPDIF_RX_UD_RIGHT_5_SPDIF_RX_UD_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R349_SPDIF_RX_UD_RIGHT_5_SPDIF_RX_UD_RIGHT_ADAU1452_MASK 0xFFFF
#define R349_SPDIF_RX_UD_RIGHT_5_SPDIF_RX_UD_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_UD_RIGHT_6 (ADAU1452) */
#define R350_SPDIF_RX_UD_RIGHT_6_SPDIF_RX_UD_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R350_SPDIF_RX_UD_RIGHT_6_SPDIF_RX_UD_RIGHT_ADAU1452_MASK 0xFFFF
#define R350_SPDIF_RX_UD_RIGHT_6_SPDIF_RX_UD_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_UD_RIGHT_7 (ADAU1452) */
#define R351_SPDIF_RX_UD_RIGHT_7_SPDIF_RX_UD_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R351_SPDIF_RX_UD_RIGHT_7_SPDIF_RX_UD_RIGHT_ADAU1452_MASK 0xFFFF
#define R351_SPDIF_RX_UD_RIGHT_7_SPDIF_RX_UD_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_UD_RIGHT_8 (ADAU1452) */
#define R352_SPDIF_RX_UD_RIGHT_8_SPDIF_RX_UD_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R352_SPDIF_RX_UD_RIGHT_8_SPDIF_RX_UD_RIGHT_ADAU1452_MASK 0xFFFF
#define R352_SPDIF_RX_UD_RIGHT_8_SPDIF_RX_UD_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_UD_RIGHT_9 (ADAU1452) */
#define R353_SPDIF_RX_UD_RIGHT_9_SPDIF_RX_UD_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R353_SPDIF_RX_UD_RIGHT_9_SPDIF_RX_UD_RIGHT_ADAU1452_MASK 0xFFFF
#define R353_SPDIF_RX_UD_RIGHT_9_SPDIF_RX_UD_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_UD_RIGHT_10 (ADAU1452) */
#define R354_SPDIF_RX_UD_RIGHT_10_SPDIF_RX_UD_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R354_SPDIF_RX_UD_RIGHT_10_SPDIF_RX_UD_RIGHT_ADAU1452_MASK 0xFFFF
#define R354_SPDIF_RX_UD_RIGHT_10_SPDIF_RX_UD_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_UD_RIGHT_11 (ADAU1452) */
#define R355_SPDIF_RX_UD_RIGHT_11_SPDIF_RX_UD_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R355_SPDIF_RX_UD_RIGHT_11_SPDIF_RX_UD_RIGHT_ADAU1452_MASK 0xFFFF
#define R355_SPDIF_RX_UD_RIGHT_11_SPDIF_RX_UD_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_VB_LEFT_0 (ADAU1452) */
#define R356_SPDIF_RX_VB_LEFT_0_SPDIF_RX_VB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R356_SPDIF_RX_VB_LEFT_0_SPDIF_RX_VB_LEFT_ADAU1452_MASK 0xFFFF
#define R356_SPDIF_RX_VB_LEFT_0_SPDIF_RX_VB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_VB_LEFT_1 (ADAU1452) */
#define R357_SPDIF_RX_VB_LEFT_1_SPDIF_RX_VB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R357_SPDIF_RX_VB_LEFT_1_SPDIF_RX_VB_LEFT_ADAU1452_MASK 0xFFFF
#define R357_SPDIF_RX_VB_LEFT_1_SPDIF_RX_VB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_VB_LEFT_2 (ADAU1452) */
#define R358_SPDIF_RX_VB_LEFT_2_SPDIF_RX_VB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R358_SPDIF_RX_VB_LEFT_2_SPDIF_RX_VB_LEFT_ADAU1452_MASK 0xFFFF
#define R358_SPDIF_RX_VB_LEFT_2_SPDIF_RX_VB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_VB_LEFT_3 (ADAU1452) */
#define R359_SPDIF_RX_VB_LEFT_3_SPDIF_RX_VB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R359_SPDIF_RX_VB_LEFT_3_SPDIF_RX_VB_LEFT_ADAU1452_MASK 0xFFFF
#define R359_SPDIF_RX_VB_LEFT_3_SPDIF_RX_VB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_VB_LEFT_4 (ADAU1452) */
#define R360_SPDIF_RX_VB_LEFT_4_SPDIF_RX_VB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R360_SPDIF_RX_VB_LEFT_4_SPDIF_RX_VB_LEFT_ADAU1452_MASK 0xFFFF
#define R360_SPDIF_RX_VB_LEFT_4_SPDIF_RX_VB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_VB_LEFT_5 (ADAU1452) */
#define R361_SPDIF_RX_VB_LEFT_5_SPDIF_RX_VB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R361_SPDIF_RX_VB_LEFT_5_SPDIF_RX_VB_LEFT_ADAU1452_MASK 0xFFFF
#define R361_SPDIF_RX_VB_LEFT_5_SPDIF_RX_VB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_VB_LEFT_6 (ADAU1452) */
#define R362_SPDIF_RX_VB_LEFT_6_SPDIF_RX_VB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R362_SPDIF_RX_VB_LEFT_6_SPDIF_RX_VB_LEFT_ADAU1452_MASK 0xFFFF
#define R362_SPDIF_RX_VB_LEFT_6_SPDIF_RX_VB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_VB_LEFT_7 (ADAU1452) */
#define R363_SPDIF_RX_VB_LEFT_7_SPDIF_RX_VB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R363_SPDIF_RX_VB_LEFT_7_SPDIF_RX_VB_LEFT_ADAU1452_MASK 0xFFFF
#define R363_SPDIF_RX_VB_LEFT_7_SPDIF_RX_VB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_VB_LEFT_8 (ADAU1452) */
#define R364_SPDIF_RX_VB_LEFT_8_SPDIF_RX_VB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R364_SPDIF_RX_VB_LEFT_8_SPDIF_RX_VB_LEFT_ADAU1452_MASK 0xFFFF
#define R364_SPDIF_RX_VB_LEFT_8_SPDIF_RX_VB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_VB_LEFT_9 (ADAU1452) */
#define R365_SPDIF_RX_VB_LEFT_9_SPDIF_RX_VB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R365_SPDIF_RX_VB_LEFT_9_SPDIF_RX_VB_LEFT_ADAU1452_MASK 0xFFFF
#define R365_SPDIF_RX_VB_LEFT_9_SPDIF_RX_VB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_VB_LEFT_10 (ADAU1452) */
#define R366_SPDIF_RX_VB_LEFT_10_SPDIF_RX_VB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R366_SPDIF_RX_VB_LEFT_10_SPDIF_RX_VB_LEFT_ADAU1452_MASK 0xFFFF
#define R366_SPDIF_RX_VB_LEFT_10_SPDIF_RX_VB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_VB_LEFT_11 (ADAU1452) */
#define R367_SPDIF_RX_VB_LEFT_11_SPDIF_RX_VB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R367_SPDIF_RX_VB_LEFT_11_SPDIF_RX_VB_LEFT_ADAU1452_MASK 0xFFFF
#define R367_SPDIF_RX_VB_LEFT_11_SPDIF_RX_VB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_VB_RIGHT_0 (ADAU1452) */
#define R368_SPDIF_RX_VB_RIGHT_0_SPDIF_RX_VB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R368_SPDIF_RX_VB_RIGHT_0_SPDIF_RX_VB_RIGHT_ADAU1452_MASK 0xFFFF
#define R368_SPDIF_RX_VB_RIGHT_0_SPDIF_RX_VB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_VB_RIGHT_1 (ADAU1452) */
#define R369_SPDIF_RX_VB_RIGHT_1_SPDIF_RX_VB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R369_SPDIF_RX_VB_RIGHT_1_SPDIF_RX_VB_RIGHT_ADAU1452_MASK 0xFFFF
#define R369_SPDIF_RX_VB_RIGHT_1_SPDIF_RX_VB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_VB_RIGHT_2 (ADAU1452) */
#define R370_SPDIF_RX_VB_RIGHT_2_SPDIF_RX_VB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R370_SPDIF_RX_VB_RIGHT_2_SPDIF_RX_VB_RIGHT_ADAU1452_MASK 0xFFFF
#define R370_SPDIF_RX_VB_RIGHT_2_SPDIF_RX_VB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_VB_RIGHT_3 (ADAU1452) */
#define R371_SPDIF_RX_VB_RIGHT_3_SPDIF_RX_VB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R371_SPDIF_RX_VB_RIGHT_3_SPDIF_RX_VB_RIGHT_ADAU1452_MASK 0xFFFF
#define R371_SPDIF_RX_VB_RIGHT_3_SPDIF_RX_VB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_VB_RIGHT_4 (ADAU1452) */
#define R372_SPDIF_RX_VB_RIGHT_4_SPDIF_RX_VB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R372_SPDIF_RX_VB_RIGHT_4_SPDIF_RX_VB_RIGHT_ADAU1452_MASK 0xFFFF
#define R372_SPDIF_RX_VB_RIGHT_4_SPDIF_RX_VB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_VB_RIGHT_5 (ADAU1452) */
#define R373_SPDIF_RX_VB_RIGHT_5_SPDIF_RX_VB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R373_SPDIF_RX_VB_RIGHT_5_SPDIF_RX_VB_RIGHT_ADAU1452_MASK 0xFFFF
#define R373_SPDIF_RX_VB_RIGHT_5_SPDIF_RX_VB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_VB_RIGHT_6 (ADAU1452) */
#define R374_SPDIF_RX_VB_RIGHT_6_SPDIF_RX_VB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R374_SPDIF_RX_VB_RIGHT_6_SPDIF_RX_VB_RIGHT_ADAU1452_MASK 0xFFFF
#define R374_SPDIF_RX_VB_RIGHT_6_SPDIF_RX_VB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_VB_RIGHT_7 (ADAU1452) */
#define R375_SPDIF_RX_VB_RIGHT_7_SPDIF_RX_VB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R375_SPDIF_RX_VB_RIGHT_7_SPDIF_RX_VB_RIGHT_ADAU1452_MASK 0xFFFF
#define R375_SPDIF_RX_VB_RIGHT_7_SPDIF_RX_VB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_VB_RIGHT_8 (ADAU1452) */
#define R376_SPDIF_RX_VB_RIGHT_8_SPDIF_RX_VB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R376_SPDIF_RX_VB_RIGHT_8_SPDIF_RX_VB_RIGHT_ADAU1452_MASK 0xFFFF
#define R376_SPDIF_RX_VB_RIGHT_8_SPDIF_RX_VB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_VB_RIGHT_9 (ADAU1452) */
#define R377_SPDIF_RX_VB_RIGHT_9_SPDIF_RX_VB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R377_SPDIF_RX_VB_RIGHT_9_SPDIF_RX_VB_RIGHT_ADAU1452_MASK 0xFFFF
#define R377_SPDIF_RX_VB_RIGHT_9_SPDIF_RX_VB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_VB_RIGHT_10 (ADAU1452) */
#define R378_SPDIF_RX_VB_RIGHT_10_SPDIF_RX_VB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R378_SPDIF_RX_VB_RIGHT_10_SPDIF_RX_VB_RIGHT_ADAU1452_MASK 0xFFFF
#define R378_SPDIF_RX_VB_RIGHT_10_SPDIF_RX_VB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_VB_RIGHT_11 (ADAU1452) */
#define R379_SPDIF_RX_VB_RIGHT_11_SPDIF_RX_VB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R379_SPDIF_RX_VB_RIGHT_11_SPDIF_RX_VB_RIGHT_ADAU1452_MASK 0xFFFF
#define R379_SPDIF_RX_VB_RIGHT_11_SPDIF_RX_VB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_PB_LEFT_0 (ADAU1452) */
#define R380_SPDIF_RX_PB_LEFT_0_SPDIF_RX_PB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R380_SPDIF_RX_PB_LEFT_0_SPDIF_RX_PB_LEFT_ADAU1452_MASK 0xFFFF
#define R380_SPDIF_RX_PB_LEFT_0_SPDIF_RX_PB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_PB_LEFT_1 (ADAU1452) */
#define R381_SPDIF_RX_PB_LEFT_1_SPDIF_RX_PB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R381_SPDIF_RX_PB_LEFT_1_SPDIF_RX_PB_LEFT_ADAU1452_MASK 0xFFFF
#define R381_SPDIF_RX_PB_LEFT_1_SPDIF_RX_PB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_PB_LEFT_2 (ADAU1452) */
#define R382_SPDIF_RX_PB_LEFT_2_SPDIF_RX_PB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R382_SPDIF_RX_PB_LEFT_2_SPDIF_RX_PB_LEFT_ADAU1452_MASK 0xFFFF
#define R382_SPDIF_RX_PB_LEFT_2_SPDIF_RX_PB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_PB_LEFT_3 (ADAU1452) */
#define R383_SPDIF_RX_PB_LEFT_3_SPDIF_RX_PB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R383_SPDIF_RX_PB_LEFT_3_SPDIF_RX_PB_LEFT_ADAU1452_MASK 0xFFFF
#define R383_SPDIF_RX_PB_LEFT_3_SPDIF_RX_PB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_PB_LEFT_4 (ADAU1452) */
#define R384_SPDIF_RX_PB_LEFT_4_SPDIF_RX_PB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R384_SPDIF_RX_PB_LEFT_4_SPDIF_RX_PB_LEFT_ADAU1452_MASK 0xFFFF
#define R384_SPDIF_RX_PB_LEFT_4_SPDIF_RX_PB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_PB_LEFT_5 (ADAU1452) */
#define R385_SPDIF_RX_PB_LEFT_5_SPDIF_RX_PB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R385_SPDIF_RX_PB_LEFT_5_SPDIF_RX_PB_LEFT_ADAU1452_MASK 0xFFFF
#define R385_SPDIF_RX_PB_LEFT_5_SPDIF_RX_PB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_PB_LEFT_6 (ADAU1452) */
#define R386_SPDIF_RX_PB_LEFT_6_SPDIF_RX_PB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R386_SPDIF_RX_PB_LEFT_6_SPDIF_RX_PB_LEFT_ADAU1452_MASK 0xFFFF
#define R386_SPDIF_RX_PB_LEFT_6_SPDIF_RX_PB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_PB_LEFT_7 (ADAU1452) */
#define R387_SPDIF_RX_PB_LEFT_7_SPDIF_RX_PB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R387_SPDIF_RX_PB_LEFT_7_SPDIF_RX_PB_LEFT_ADAU1452_MASK 0xFFFF
#define R387_SPDIF_RX_PB_LEFT_7_SPDIF_RX_PB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_PB_LEFT_8 (ADAU1452) */
#define R388_SPDIF_RX_PB_LEFT_8_SPDIF_RX_PB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R388_SPDIF_RX_PB_LEFT_8_SPDIF_RX_PB_LEFT_ADAU1452_MASK 0xFFFF
#define R388_SPDIF_RX_PB_LEFT_8_SPDIF_RX_PB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_PB_LEFT_9 (ADAU1452) */
#define R389_SPDIF_RX_PB_LEFT_9_SPDIF_RX_PB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R389_SPDIF_RX_PB_LEFT_9_SPDIF_RX_PB_LEFT_ADAU1452_MASK 0xFFFF
#define R389_SPDIF_RX_PB_LEFT_9_SPDIF_RX_PB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_PB_LEFT_10 (ADAU1452) */
#define R390_SPDIF_RX_PB_LEFT_10_SPDIF_RX_PB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R390_SPDIF_RX_PB_LEFT_10_SPDIF_RX_PB_LEFT_ADAU1452_MASK 0xFFFF
#define R390_SPDIF_RX_PB_LEFT_10_SPDIF_RX_PB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_PB_LEFT_11 (ADAU1452) */
#define R391_SPDIF_RX_PB_LEFT_11_SPDIF_RX_PB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R391_SPDIF_RX_PB_LEFT_11_SPDIF_RX_PB_LEFT_ADAU1452_MASK 0xFFFF
#define R391_SPDIF_RX_PB_LEFT_11_SPDIF_RX_PB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_RX_PB_RIGHT_0 (ADAU1452) */
#define R392_SPDIF_RX_PB_RIGHT_0_SPDIF_RX_PB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R392_SPDIF_RX_PB_RIGHT_0_SPDIF_RX_PB_RIGHT_ADAU1452_MASK 0xFFFF
#define R392_SPDIF_RX_PB_RIGHT_0_SPDIF_RX_PB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_PB_RIGHT_1 (ADAU1452) */
#define R393_SPDIF_RX_PB_RIGHT_1_SPDIF_RX_PB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R393_SPDIF_RX_PB_RIGHT_1_SPDIF_RX_PB_RIGHT_ADAU1452_MASK 0xFFFF
#define R393_SPDIF_RX_PB_RIGHT_1_SPDIF_RX_PB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_PB_RIGHT_2 (ADAU1452) */
#define R394_SPDIF_RX_PB_RIGHT_2_SPDIF_RX_PB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R394_SPDIF_RX_PB_RIGHT_2_SPDIF_RX_PB_RIGHT_ADAU1452_MASK 0xFFFF
#define R394_SPDIF_RX_PB_RIGHT_2_SPDIF_RX_PB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_PB_RIGHT_3 (ADAU1452) */
#define R395_SPDIF_RX_PB_RIGHT_3_SPDIF_RX_PB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R395_SPDIF_RX_PB_RIGHT_3_SPDIF_RX_PB_RIGHT_ADAU1452_MASK 0xFFFF
#define R395_SPDIF_RX_PB_RIGHT_3_SPDIF_RX_PB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_PB_RIGHT_4 (ADAU1452) */
#define R396_SPDIF_RX_PB_RIGHT_4_SPDIF_RX_PB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R396_SPDIF_RX_PB_RIGHT_4_SPDIF_RX_PB_RIGHT_ADAU1452_MASK 0xFFFF
#define R396_SPDIF_RX_PB_RIGHT_4_SPDIF_RX_PB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_PB_RIGHT_5 (ADAU1452) */
#define R397_SPDIF_RX_PB_RIGHT_5_SPDIF_RX_PB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R397_SPDIF_RX_PB_RIGHT_5_SPDIF_RX_PB_RIGHT_ADAU1452_MASK 0xFFFF
#define R397_SPDIF_RX_PB_RIGHT_5_SPDIF_RX_PB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_PB_RIGHT_6 (ADAU1452) */
#define R398_SPDIF_RX_PB_RIGHT_6_SPDIF_RX_PB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R398_SPDIF_RX_PB_RIGHT_6_SPDIF_RX_PB_RIGHT_ADAU1452_MASK 0xFFFF
#define R398_SPDIF_RX_PB_RIGHT_6_SPDIF_RX_PB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_PB_RIGHT_7 (ADAU1452) */
#define R399_SPDIF_RX_PB_RIGHT_7_SPDIF_RX_PB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R399_SPDIF_RX_PB_RIGHT_7_SPDIF_RX_PB_RIGHT_ADAU1452_MASK 0xFFFF
#define R399_SPDIF_RX_PB_RIGHT_7_SPDIF_RX_PB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_PB_RIGHT_8 (ADAU1452) */
#define R400_SPDIF_RX_PB_RIGHT_8_SPDIF_RX_PB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R400_SPDIF_RX_PB_RIGHT_8_SPDIF_RX_PB_RIGHT_ADAU1452_MASK 0xFFFF
#define R400_SPDIF_RX_PB_RIGHT_8_SPDIF_RX_PB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_PB_RIGHT_9 (ADAU1452) */
#define R401_SPDIF_RX_PB_RIGHT_9_SPDIF_RX_PB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R401_SPDIF_RX_PB_RIGHT_9_SPDIF_RX_PB_RIGHT_ADAU1452_MASK 0xFFFF
#define R401_SPDIF_RX_PB_RIGHT_9_SPDIF_RX_PB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_PB_RIGHT_10 (ADAU1452) */
#define R402_SPDIF_RX_PB_RIGHT_10_SPDIF_RX_PB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R402_SPDIF_RX_PB_RIGHT_10_SPDIF_RX_PB_RIGHT_ADAU1452_MASK 0xFFFF
#define R402_SPDIF_RX_PB_RIGHT_10_SPDIF_RX_PB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_RX_PB_RIGHT_11 (ADAU1452) */
#define R403_SPDIF_RX_PB_RIGHT_11_SPDIF_RX_PB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R403_SPDIF_RX_PB_RIGHT_11_SPDIF_RX_PB_RIGHT_ADAU1452_MASK 0xFFFF
#define R403_SPDIF_RX_PB_RIGHT_11_SPDIF_RX_PB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_EN (ADAU1452) */
#define R404_SPDIF_TX_EN_TXEN_ADAU1452            0x0    /* 0b	[0] */
#define R404_SPDIF_TX_EN_TXEN_ADAU1452_MASK       0x1
#define R404_SPDIF_TX_EN_TXEN_ADAU1452_SHIFT      0

/* SPDIF_TX_CTRL (ADAU1452) */
#define R405_SPDIF_TX_CTRL_TX_LENGTHCTRL_ADAU1452 0x0    /* 00b	[1:0] */
#define R405_SPDIF_TX_CTRL_TX_LENGTHCTRL_ADAU1452_MASK 0x3
#define R405_SPDIF_TX_CTRL_TX_LENGTHCTRL_ADAU1452_SHIFT 0

/* SPDIF_TX_AUXBIT_SOURCE (ADAU1452) */
#define R406_SPDIF_TX_AUXBIT_SOURCE_TX_AUXBITS_SOURCE_ADAU1452 0x0 /* 0b	[0] */
#define R406_SPDIF_TX_AUXBIT_SOURCE_TX_AUXBITS_SOURCE_ADAU1452_MASK 0x1
#define R406_SPDIF_TX_AUXBIT_SOURCE_TX_AUXBITS_SOURCE_ADAU1452_SHIFT 0

/* SPDIF_TX_CS_LEFT_0 (ADAU1452) */
#define R407_SPDIF_TX_CS_LEFT_0_SPDIF_TX_CS_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R407_SPDIF_TX_CS_LEFT_0_SPDIF_TX_CS_LEFT_ADAU1452_MASK 0xFFFF
#define R407_SPDIF_TX_CS_LEFT_0_SPDIF_TX_CS_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_CS_LEFT_1 (ADAU1452) */
#define R408_SPDIF_TX_CS_LEFT_1_SPDIF_TX_CS_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R408_SPDIF_TX_CS_LEFT_1_SPDIF_TX_CS_LEFT_ADAU1452_MASK 0xFFFF
#define R408_SPDIF_TX_CS_LEFT_1_SPDIF_TX_CS_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_CS_LEFT_2 (ADAU1452) */
#define R409_SPDIF_TX_CS_LEFT_2_SPDIF_TX_CS_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R409_SPDIF_TX_CS_LEFT_2_SPDIF_TX_CS_LEFT_ADAU1452_MASK 0xFFFF
#define R409_SPDIF_TX_CS_LEFT_2_SPDIF_TX_CS_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_CS_LEFT_3 (ADAU1452) */
#define R410_SPDIF_TX_CS_LEFT_3_SPDIF_TX_CS_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R410_SPDIF_TX_CS_LEFT_3_SPDIF_TX_CS_LEFT_ADAU1452_MASK 0xFFFF
#define R410_SPDIF_TX_CS_LEFT_3_SPDIF_TX_CS_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_CS_LEFT_4 (ADAU1452) */
#define R411_SPDIF_TX_CS_LEFT_4_SPDIF_TX_CS_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R411_SPDIF_TX_CS_LEFT_4_SPDIF_TX_CS_LEFT_ADAU1452_MASK 0xFFFF
#define R411_SPDIF_TX_CS_LEFT_4_SPDIF_TX_CS_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_CS_LEFT_5 (ADAU1452) */
#define R412_SPDIF_TX_CS_LEFT_5_SPDIF_TX_CS_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R412_SPDIF_TX_CS_LEFT_5_SPDIF_TX_CS_LEFT_ADAU1452_MASK 0xFFFF
#define R412_SPDIF_TX_CS_LEFT_5_SPDIF_TX_CS_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_CS_LEFT_6 (ADAU1452) */
#define R413_SPDIF_TX_CS_LEFT_6_SPDIF_TX_CS_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R413_SPDIF_TX_CS_LEFT_6_SPDIF_TX_CS_LEFT_ADAU1452_MASK 0xFFFF
#define R413_SPDIF_TX_CS_LEFT_6_SPDIF_TX_CS_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_CS_LEFT_7 (ADAU1452) */
#define R414_SPDIF_TX_CS_LEFT_7_SPDIF_TX_CS_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R414_SPDIF_TX_CS_LEFT_7_SPDIF_TX_CS_LEFT_ADAU1452_MASK 0xFFFF
#define R414_SPDIF_TX_CS_LEFT_7_SPDIF_TX_CS_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_CS_LEFT_8 (ADAU1452) */
#define R415_SPDIF_TX_CS_LEFT_8_SPDIF_TX_CS_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R415_SPDIF_TX_CS_LEFT_8_SPDIF_TX_CS_LEFT_ADAU1452_MASK 0xFFFF
#define R415_SPDIF_TX_CS_LEFT_8_SPDIF_TX_CS_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_CS_LEFT_9 (ADAU1452) */
#define R416_SPDIF_TX_CS_LEFT_9_SPDIF_TX_CS_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R416_SPDIF_TX_CS_LEFT_9_SPDIF_TX_CS_LEFT_ADAU1452_MASK 0xFFFF
#define R416_SPDIF_TX_CS_LEFT_9_SPDIF_TX_CS_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_CS_LEFT_10 (ADAU1452) */
#define R417_SPDIF_TX_CS_LEFT_10_SPDIF_TX_CS_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R417_SPDIF_TX_CS_LEFT_10_SPDIF_TX_CS_LEFT_ADAU1452_MASK 0xFFFF
#define R417_SPDIF_TX_CS_LEFT_10_SPDIF_TX_CS_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_CS_LEFT_11 (ADAU1452) */
#define R418_SPDIF_TX_CS_LEFT_11_SPDIF_TX_CS_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R418_SPDIF_TX_CS_LEFT_11_SPDIF_TX_CS_LEFT_ADAU1452_MASK 0xFFFF
#define R418_SPDIF_TX_CS_LEFT_11_SPDIF_TX_CS_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_CS_RIGHT_0 (ADAU1452) */
#define R419_SPDIF_TX_CS_RIGHT_0_SPDIF_TX_CS_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R419_SPDIF_TX_CS_RIGHT_0_SPDIF_TX_CS_RIGHT_ADAU1452_MASK 0xFFFF
#define R419_SPDIF_TX_CS_RIGHT_0_SPDIF_TX_CS_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_CS_RIGHT_1 (ADAU1452) */
#define R420_SPDIF_TX_CS_RIGHT_1_SPDIF_TX_CS_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R420_SPDIF_TX_CS_RIGHT_1_SPDIF_TX_CS_RIGHT_ADAU1452_MASK 0xFFFF
#define R420_SPDIF_TX_CS_RIGHT_1_SPDIF_TX_CS_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_CS_RIGHT_2 (ADAU1452) */
#define R421_SPDIF_TX_CS_RIGHT_2_SPDIF_TX_CS_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R421_SPDIF_TX_CS_RIGHT_2_SPDIF_TX_CS_RIGHT_ADAU1452_MASK 0xFFFF
#define R421_SPDIF_TX_CS_RIGHT_2_SPDIF_TX_CS_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_CS_RIGHT_3 (ADAU1452) */
#define R422_SPDIF_TX_CS_RIGHT_3_SPDIF_TX_CS_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R422_SPDIF_TX_CS_RIGHT_3_SPDIF_TX_CS_RIGHT_ADAU1452_MASK 0xFFFF
#define R422_SPDIF_TX_CS_RIGHT_3_SPDIF_TX_CS_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_CS_RIGHT_4 (ADAU1452) */
#define R423_SPDIF_TX_CS_RIGHT_4_SPDIF_TX_CS_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R423_SPDIF_TX_CS_RIGHT_4_SPDIF_TX_CS_RIGHT_ADAU1452_MASK 0xFFFF
#define R423_SPDIF_TX_CS_RIGHT_4_SPDIF_TX_CS_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_CS_RIGHT_5 (ADAU1452) */
#define R424_SPDIF_TX_CS_RIGHT_5_SPDIF_TX_CS_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R424_SPDIF_TX_CS_RIGHT_5_SPDIF_TX_CS_RIGHT_ADAU1452_MASK 0xFFFF
#define R424_SPDIF_TX_CS_RIGHT_5_SPDIF_TX_CS_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_CS_RIGHT_6 (ADAU1452) */
#define R425_SPDIF_TX_CS_RIGHT_6_SPDIF_TX_CS_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R425_SPDIF_TX_CS_RIGHT_6_SPDIF_TX_CS_RIGHT_ADAU1452_MASK 0xFFFF
#define R425_SPDIF_TX_CS_RIGHT_6_SPDIF_TX_CS_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_CS_RIGHT_7 (ADAU1452) */
#define R426_SPDIF_TX_CS_RIGHT_7_SPDIF_TX_CS_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R426_SPDIF_TX_CS_RIGHT_7_SPDIF_TX_CS_RIGHT_ADAU1452_MASK 0xFFFF
#define R426_SPDIF_TX_CS_RIGHT_7_SPDIF_TX_CS_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_CS_RIGHT_8 (ADAU1452) */
#define R427_SPDIF_TX_CS_RIGHT_8_SPDIF_TX_CS_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R427_SPDIF_TX_CS_RIGHT_8_SPDIF_TX_CS_RIGHT_ADAU1452_MASK 0xFFFF
#define R427_SPDIF_TX_CS_RIGHT_8_SPDIF_TX_CS_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_CS_RIGHT_9 (ADAU1452) */
#define R428_SPDIF_TX_CS_RIGHT_9_SPDIF_TX_CS_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R428_SPDIF_TX_CS_RIGHT_9_SPDIF_TX_CS_RIGHT_ADAU1452_MASK 0xFFFF
#define R428_SPDIF_TX_CS_RIGHT_9_SPDIF_TX_CS_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_CS_RIGHT_10 (ADAU1452) */
#define R429_SPDIF_TX_CS_RIGHT_10_SPDIF_TX_CS_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R429_SPDIF_TX_CS_RIGHT_10_SPDIF_TX_CS_RIGHT_ADAU1452_MASK 0xFFFF
#define R429_SPDIF_TX_CS_RIGHT_10_SPDIF_TX_CS_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_CS_RIGHT_11 (ADAU1452) */
#define R430_SPDIF_TX_CS_RIGHT_11_SPDIF_TX_CS_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R430_SPDIF_TX_CS_RIGHT_11_SPDIF_TX_CS_RIGHT_ADAU1452_MASK 0xFFFF
#define R430_SPDIF_TX_CS_RIGHT_11_SPDIF_TX_CS_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_UD_LEFT_0 (ADAU1452) */
#define R431_SPDIF_TX_UD_LEFT_0_SPDIF_TX_UD_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R431_SPDIF_TX_UD_LEFT_0_SPDIF_TX_UD_LEFT_ADAU1452_MASK 0xFFFF
#define R431_SPDIF_TX_UD_LEFT_0_SPDIF_TX_UD_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_UD_LEFT_1 (ADAU1452) */
#define R432_SPDIF_TX_UD_LEFT_1_SPDIF_TX_UD_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R432_SPDIF_TX_UD_LEFT_1_SPDIF_TX_UD_LEFT_ADAU1452_MASK 0xFFFF
#define R432_SPDIF_TX_UD_LEFT_1_SPDIF_TX_UD_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_UD_LEFT_2 (ADAU1452) */
#define R433_SPDIF_TX_UD_LEFT_2_SPDIF_TX_UD_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R433_SPDIF_TX_UD_LEFT_2_SPDIF_TX_UD_LEFT_ADAU1452_MASK 0xFFFF
#define R433_SPDIF_TX_UD_LEFT_2_SPDIF_TX_UD_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_UD_LEFT_3 (ADAU1452) */
#define R434_SPDIF_TX_UD_LEFT_3_SPDIF_TX_UD_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R434_SPDIF_TX_UD_LEFT_3_SPDIF_TX_UD_LEFT_ADAU1452_MASK 0xFFFF
#define R434_SPDIF_TX_UD_LEFT_3_SPDIF_TX_UD_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_UD_LEFT_4 (ADAU1452) */
#define R435_SPDIF_TX_UD_LEFT_4_SPDIF_TX_UD_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R435_SPDIF_TX_UD_LEFT_4_SPDIF_TX_UD_LEFT_ADAU1452_MASK 0xFFFF
#define R435_SPDIF_TX_UD_LEFT_4_SPDIF_TX_UD_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_UD_LEFT_5 (ADAU1452) */
#define R436_SPDIF_TX_UD_LEFT_5_SPDIF_TX_UD_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R436_SPDIF_TX_UD_LEFT_5_SPDIF_TX_UD_LEFT_ADAU1452_MASK 0xFFFF
#define R436_SPDIF_TX_UD_LEFT_5_SPDIF_TX_UD_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_UD_LEFT_6 (ADAU1452) */
#define R437_SPDIF_TX_UD_LEFT_6_SPDIF_TX_UD_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R437_SPDIF_TX_UD_LEFT_6_SPDIF_TX_UD_LEFT_ADAU1452_MASK 0xFFFF
#define R437_SPDIF_TX_UD_LEFT_6_SPDIF_TX_UD_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_UD_LEFT_7 (ADAU1452) */
#define R438_SPDIF_TX_UD_LEFT_7_SPDIF_TX_UD_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R438_SPDIF_TX_UD_LEFT_7_SPDIF_TX_UD_LEFT_ADAU1452_MASK 0xFFFF
#define R438_SPDIF_TX_UD_LEFT_7_SPDIF_TX_UD_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_UD_LEFT_8 (ADAU1452) */
#define R439_SPDIF_TX_UD_LEFT_8_SPDIF_TX_UD_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R439_SPDIF_TX_UD_LEFT_8_SPDIF_TX_UD_LEFT_ADAU1452_MASK 0xFFFF
#define R439_SPDIF_TX_UD_LEFT_8_SPDIF_TX_UD_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_UD_LEFT_9 (ADAU1452) */
#define R440_SPDIF_TX_UD_LEFT_9_SPDIF_TX_UD_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R440_SPDIF_TX_UD_LEFT_9_SPDIF_TX_UD_LEFT_ADAU1452_MASK 0xFFFF
#define R440_SPDIF_TX_UD_LEFT_9_SPDIF_TX_UD_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_UD_LEFT_10 (ADAU1452) */
#define R441_SPDIF_TX_UD_LEFT_10_SPDIF_TX_UD_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R441_SPDIF_TX_UD_LEFT_10_SPDIF_TX_UD_LEFT_ADAU1452_MASK 0xFFFF
#define R441_SPDIF_TX_UD_LEFT_10_SPDIF_TX_UD_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_UD_LEFT_11 (ADAU1452) */
#define R442_SPDIF_TX_UD_LEFT_11_SPDIF_TX_UD_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R442_SPDIF_TX_UD_LEFT_11_SPDIF_TX_UD_LEFT_ADAU1452_MASK 0xFFFF
#define R442_SPDIF_TX_UD_LEFT_11_SPDIF_TX_UD_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_UD_RIGHT_0 (ADAU1452) */
#define R443_SPDIF_TX_UD_RIGHT_0_SPDIF_TX_UD_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R443_SPDIF_TX_UD_RIGHT_0_SPDIF_TX_UD_RIGHT_ADAU1452_MASK 0xFFFF
#define R443_SPDIF_TX_UD_RIGHT_0_SPDIF_TX_UD_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_UD_RIGHT_1 (ADAU1452) */
#define R444_SPDIF_TX_UD_RIGHT_1_SPDIF_TX_UD_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R444_SPDIF_TX_UD_RIGHT_1_SPDIF_TX_UD_RIGHT_ADAU1452_MASK 0xFFFF
#define R444_SPDIF_TX_UD_RIGHT_1_SPDIF_TX_UD_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_UD_RIGHT_2 (ADAU1452) */
#define R445_SPDIF_TX_UD_RIGHT_2_SPDIF_TX_UD_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R445_SPDIF_TX_UD_RIGHT_2_SPDIF_TX_UD_RIGHT_ADAU1452_MASK 0xFFFF
#define R445_SPDIF_TX_UD_RIGHT_2_SPDIF_TX_UD_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_UD_RIGHT_3 (ADAU1452) */
#define R446_SPDIF_TX_UD_RIGHT_3_SPDIF_TX_UD_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R446_SPDIF_TX_UD_RIGHT_3_SPDIF_TX_UD_RIGHT_ADAU1452_MASK 0xFFFF
#define R446_SPDIF_TX_UD_RIGHT_3_SPDIF_TX_UD_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_UD_RIGHT_4 (ADAU1452) */
#define R447_SPDIF_TX_UD_RIGHT_4_SPDIF_TX_UD_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R447_SPDIF_TX_UD_RIGHT_4_SPDIF_TX_UD_RIGHT_ADAU1452_MASK 0xFFFF
#define R447_SPDIF_TX_UD_RIGHT_4_SPDIF_TX_UD_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_UD_RIGHT_5 (ADAU1452) */
#define R448_SPDIF_TX_UD_RIGHT_5_SPDIF_TX_UD_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R448_SPDIF_TX_UD_RIGHT_5_SPDIF_TX_UD_RIGHT_ADAU1452_MASK 0xFFFF
#define R448_SPDIF_TX_UD_RIGHT_5_SPDIF_TX_UD_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_UD_RIGHT_6 (ADAU1452) */
#define R449_SPDIF_TX_UD_RIGHT_6_SPDIF_TX_UD_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R449_SPDIF_TX_UD_RIGHT_6_SPDIF_TX_UD_RIGHT_ADAU1452_MASK 0xFFFF
#define R449_SPDIF_TX_UD_RIGHT_6_SPDIF_TX_UD_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_UD_RIGHT_7 (ADAU1452) */
#define R450_SPDIF_TX_UD_RIGHT_7_SPDIF_TX_UD_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R450_SPDIF_TX_UD_RIGHT_7_SPDIF_TX_UD_RIGHT_ADAU1452_MASK 0xFFFF
#define R450_SPDIF_TX_UD_RIGHT_7_SPDIF_TX_UD_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_UD_RIGHT_8 (ADAU1452) */
#define R451_SPDIF_TX_UD_RIGHT_8_SPDIF_TX_UD_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R451_SPDIF_TX_UD_RIGHT_8_SPDIF_TX_UD_RIGHT_ADAU1452_MASK 0xFFFF
#define R451_SPDIF_TX_UD_RIGHT_8_SPDIF_TX_UD_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_UD_RIGHT_9 (ADAU1452) */
#define R452_SPDIF_TX_UD_RIGHT_9_SPDIF_TX_UD_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R452_SPDIF_TX_UD_RIGHT_9_SPDIF_TX_UD_RIGHT_ADAU1452_MASK 0xFFFF
#define R452_SPDIF_TX_UD_RIGHT_9_SPDIF_TX_UD_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_UD_RIGHT_10 (ADAU1452) */
#define R453_SPDIF_TX_UD_RIGHT_10_SPDIF_TX_UD_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R453_SPDIF_TX_UD_RIGHT_10_SPDIF_TX_UD_RIGHT_ADAU1452_MASK 0xFFFF
#define R453_SPDIF_TX_UD_RIGHT_10_SPDIF_TX_UD_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_UD_RIGHT_11 (ADAU1452) */
#define R454_SPDIF_TX_UD_RIGHT_11_SPDIF_TX_UD_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R454_SPDIF_TX_UD_RIGHT_11_SPDIF_TX_UD_RIGHT_ADAU1452_MASK 0xFFFF
#define R454_SPDIF_TX_UD_RIGHT_11_SPDIF_TX_UD_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_VB_LEFT_0 (ADAU1452) */
#define R455_SPDIF_TX_VB_LEFT_0_SPDIF_TX_VB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R455_SPDIF_TX_VB_LEFT_0_SPDIF_TX_VB_LEFT_ADAU1452_MASK 0xFFFF
#define R455_SPDIF_TX_VB_LEFT_0_SPDIF_TX_VB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_VB_LEFT_1 (ADAU1452) */
#define R456_SPDIF_TX_VB_LEFT_1_SPDIF_TX_VB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R456_SPDIF_TX_VB_LEFT_1_SPDIF_TX_VB_LEFT_ADAU1452_MASK 0xFFFF
#define R456_SPDIF_TX_VB_LEFT_1_SPDIF_TX_VB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_VB_LEFT_2 (ADAU1452) */
#define R457_SPDIF_TX_VB_LEFT_2_SPDIF_TX_VB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R457_SPDIF_TX_VB_LEFT_2_SPDIF_TX_VB_LEFT_ADAU1452_MASK 0xFFFF
#define R457_SPDIF_TX_VB_LEFT_2_SPDIF_TX_VB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_VB_LEFT_3 (ADAU1452) */
#define R458_SPDIF_TX_VB_LEFT_3_SPDIF_TX_VB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R458_SPDIF_TX_VB_LEFT_3_SPDIF_TX_VB_LEFT_ADAU1452_MASK 0xFFFF
#define R458_SPDIF_TX_VB_LEFT_3_SPDIF_TX_VB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_VB_LEFT_4 (ADAU1452) */
#define R459_SPDIF_TX_VB_LEFT_4_SPDIF_TX_VB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R459_SPDIF_TX_VB_LEFT_4_SPDIF_TX_VB_LEFT_ADAU1452_MASK 0xFFFF
#define R459_SPDIF_TX_VB_LEFT_4_SPDIF_TX_VB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_VB_LEFT_5 (ADAU1452) */
#define R460_SPDIF_TX_VB_LEFT_5_SPDIF_TX_VB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R460_SPDIF_TX_VB_LEFT_5_SPDIF_TX_VB_LEFT_ADAU1452_MASK 0xFFFF
#define R460_SPDIF_TX_VB_LEFT_5_SPDIF_TX_VB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_VB_LEFT_6 (ADAU1452) */
#define R461_SPDIF_TX_VB_LEFT_6_SPDIF_TX_VB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R461_SPDIF_TX_VB_LEFT_6_SPDIF_TX_VB_LEFT_ADAU1452_MASK 0xFFFF
#define R461_SPDIF_TX_VB_LEFT_6_SPDIF_TX_VB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_VB_LEFT_7 (ADAU1452) */
#define R462_SPDIF_TX_VB_LEFT_7_SPDIF_TX_VB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R462_SPDIF_TX_VB_LEFT_7_SPDIF_TX_VB_LEFT_ADAU1452_MASK 0xFFFF
#define R462_SPDIF_TX_VB_LEFT_7_SPDIF_TX_VB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_VB_LEFT_8 (ADAU1452) */
#define R463_SPDIF_TX_VB_LEFT_8_SPDIF_TX_VB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R463_SPDIF_TX_VB_LEFT_8_SPDIF_TX_VB_LEFT_ADAU1452_MASK 0xFFFF
#define R463_SPDIF_TX_VB_LEFT_8_SPDIF_TX_VB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_VB_LEFT_9 (ADAU1452) */
#define R464_SPDIF_TX_VB_LEFT_9_SPDIF_TX_VB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R464_SPDIF_TX_VB_LEFT_9_SPDIF_TX_VB_LEFT_ADAU1452_MASK 0xFFFF
#define R464_SPDIF_TX_VB_LEFT_9_SPDIF_TX_VB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_VB_LEFT_10 (ADAU1452) */
#define R465_SPDIF_TX_VB_LEFT_10_SPDIF_TX_VB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R465_SPDIF_TX_VB_LEFT_10_SPDIF_TX_VB_LEFT_ADAU1452_MASK 0xFFFF
#define R465_SPDIF_TX_VB_LEFT_10_SPDIF_TX_VB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_VB_LEFT_11 (ADAU1452) */
#define R466_SPDIF_TX_VB_LEFT_11_SPDIF_TX_VB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R466_SPDIF_TX_VB_LEFT_11_SPDIF_TX_VB_LEFT_ADAU1452_MASK 0xFFFF
#define R466_SPDIF_TX_VB_LEFT_11_SPDIF_TX_VB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_VB_RIGHT_0 (ADAU1452) */
#define R467_SPDIF_TX_VB_RIGHT_0_SPDIF_TX_VB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R467_SPDIF_TX_VB_RIGHT_0_SPDIF_TX_VB_RIGHT_ADAU1452_MASK 0xFFFF
#define R467_SPDIF_TX_VB_RIGHT_0_SPDIF_TX_VB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_VB_RIGHT_1 (ADAU1452) */
#define R468_SPDIF_TX_VB_RIGHT_1_SPDIF_TX_VB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R468_SPDIF_TX_VB_RIGHT_1_SPDIF_TX_VB_RIGHT_ADAU1452_MASK 0xFFFF
#define R468_SPDIF_TX_VB_RIGHT_1_SPDIF_TX_VB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_VB_RIGHT_2 (ADAU1452) */
#define R469_SPDIF_TX_VB_RIGHT_2_SPDIF_TX_VB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R469_SPDIF_TX_VB_RIGHT_2_SPDIF_TX_VB_RIGHT_ADAU1452_MASK 0xFFFF
#define R469_SPDIF_TX_VB_RIGHT_2_SPDIF_TX_VB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_VB_RIGHT_3 (ADAU1452) */
#define R470_SPDIF_TX_VB_RIGHT_3_SPDIF_TX_VB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R470_SPDIF_TX_VB_RIGHT_3_SPDIF_TX_VB_RIGHT_ADAU1452_MASK 0xFFFF
#define R470_SPDIF_TX_VB_RIGHT_3_SPDIF_TX_VB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_VB_RIGHT_4 (ADAU1452) */
#define R471_SPDIF_TX_VB_RIGHT_4_SPDIF_TX_VB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R471_SPDIF_TX_VB_RIGHT_4_SPDIF_TX_VB_RIGHT_ADAU1452_MASK 0xFFFF
#define R471_SPDIF_TX_VB_RIGHT_4_SPDIF_TX_VB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_VB_RIGHT_5 (ADAU1452) */
#define R472_SPDIF_TX_VB_RIGHT_5_SPDIF_TX_VB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R472_SPDIF_TX_VB_RIGHT_5_SPDIF_TX_VB_RIGHT_ADAU1452_MASK 0xFFFF
#define R472_SPDIF_TX_VB_RIGHT_5_SPDIF_TX_VB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_VB_RIGHT_6 (ADAU1452) */
#define R473_SPDIF_TX_VB_RIGHT_6_SPDIF_TX_VB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R473_SPDIF_TX_VB_RIGHT_6_SPDIF_TX_VB_RIGHT_ADAU1452_MASK 0xFFFF
#define R473_SPDIF_TX_VB_RIGHT_6_SPDIF_TX_VB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_VB_RIGHT_7 (ADAU1452) */
#define R474_SPDIF_TX_VB_RIGHT_7_SPDIF_TX_VB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R474_SPDIF_TX_VB_RIGHT_7_SPDIF_TX_VB_RIGHT_ADAU1452_MASK 0xFFFF
#define R474_SPDIF_TX_VB_RIGHT_7_SPDIF_TX_VB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_VB_RIGHT_8 (ADAU1452) */
#define R475_SPDIF_TX_VB_RIGHT_8_SPDIF_TX_VB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R475_SPDIF_TX_VB_RIGHT_8_SPDIF_TX_VB_RIGHT_ADAU1452_MASK 0xFFFF
#define R475_SPDIF_TX_VB_RIGHT_8_SPDIF_TX_VB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_VB_RIGHT_9 (ADAU1452) */
#define R476_SPDIF_TX_VB_RIGHT_9_SPDIF_TX_VB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R476_SPDIF_TX_VB_RIGHT_9_SPDIF_TX_VB_RIGHT_ADAU1452_MASK 0xFFFF
#define R476_SPDIF_TX_VB_RIGHT_9_SPDIF_TX_VB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_VB_RIGHT_10 (ADAU1452) */
#define R477_SPDIF_TX_VB_RIGHT_10_SPDIF_TX_VB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R477_SPDIF_TX_VB_RIGHT_10_SPDIF_TX_VB_RIGHT_ADAU1452_MASK 0xFFFF
#define R477_SPDIF_TX_VB_RIGHT_10_SPDIF_TX_VB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_VB_RIGHT_11 (ADAU1452) */
#define R478_SPDIF_TX_VB_RIGHT_11_SPDIF_TX_VB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R478_SPDIF_TX_VB_RIGHT_11_SPDIF_TX_VB_RIGHT_ADAU1452_MASK 0xFFFF
#define R478_SPDIF_TX_VB_RIGHT_11_SPDIF_TX_VB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_PB_LEFT_0 (ADAU1452) */
#define R479_SPDIF_TX_PB_LEFT_0_SPDIF_TX_PB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R479_SPDIF_TX_PB_LEFT_0_SPDIF_TX_PB_LEFT_ADAU1452_MASK 0xFFFF
#define R479_SPDIF_TX_PB_LEFT_0_SPDIF_TX_PB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_PB_LEFT_1 (ADAU1452) */
#define R480_SPDIF_TX_PB_LEFT_1_SPDIF_TX_PB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R480_SPDIF_TX_PB_LEFT_1_SPDIF_TX_PB_LEFT_ADAU1452_MASK 0xFFFF
#define R480_SPDIF_TX_PB_LEFT_1_SPDIF_TX_PB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_PB_LEFT_2 (ADAU1452) */
#define R481_SPDIF_TX_PB_LEFT_2_SPDIF_TX_PB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R481_SPDIF_TX_PB_LEFT_2_SPDIF_TX_PB_LEFT_ADAU1452_MASK 0xFFFF
#define R481_SPDIF_TX_PB_LEFT_2_SPDIF_TX_PB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_PB_LEFT_3 (ADAU1452) */
#define R482_SPDIF_TX_PB_LEFT_3_SPDIF_TX_PB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R482_SPDIF_TX_PB_LEFT_3_SPDIF_TX_PB_LEFT_ADAU1452_MASK 0xFFFF
#define R482_SPDIF_TX_PB_LEFT_3_SPDIF_TX_PB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_PB_LEFT_4 (ADAU1452) */
#define R483_SPDIF_TX_PB_LEFT_4_SPDIF_TX_PB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R483_SPDIF_TX_PB_LEFT_4_SPDIF_TX_PB_LEFT_ADAU1452_MASK 0xFFFF
#define R483_SPDIF_TX_PB_LEFT_4_SPDIF_TX_PB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_PB_LEFT_5 (ADAU1452) */
#define R484_SPDIF_TX_PB_LEFT_5_SPDIF_TX_PB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R484_SPDIF_TX_PB_LEFT_5_SPDIF_TX_PB_LEFT_ADAU1452_MASK 0xFFFF
#define R484_SPDIF_TX_PB_LEFT_5_SPDIF_TX_PB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_PB_LEFT_6 (ADAU1452) */
#define R485_SPDIF_TX_PB_LEFT_6_SPDIF_TX_PB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R485_SPDIF_TX_PB_LEFT_6_SPDIF_TX_PB_LEFT_ADAU1452_MASK 0xFFFF
#define R485_SPDIF_TX_PB_LEFT_6_SPDIF_TX_PB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_PB_LEFT_7 (ADAU1452) */
#define R486_SPDIF_TX_PB_LEFT_7_SPDIF_TX_PB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R486_SPDIF_TX_PB_LEFT_7_SPDIF_TX_PB_LEFT_ADAU1452_MASK 0xFFFF
#define R486_SPDIF_TX_PB_LEFT_7_SPDIF_TX_PB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_PB_LEFT_8 (ADAU1452) */
#define R487_SPDIF_TX_PB_LEFT_8_SPDIF_TX_PB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R487_SPDIF_TX_PB_LEFT_8_SPDIF_TX_PB_LEFT_ADAU1452_MASK 0xFFFF
#define R487_SPDIF_TX_PB_LEFT_8_SPDIF_TX_PB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_PB_LEFT_9 (ADAU1452) */
#define R488_SPDIF_TX_PB_LEFT_9_SPDIF_TX_PB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R488_SPDIF_TX_PB_LEFT_9_SPDIF_TX_PB_LEFT_ADAU1452_MASK 0xFFFF
#define R488_SPDIF_TX_PB_LEFT_9_SPDIF_TX_PB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_PB_LEFT_10 (ADAU1452) */
#define R489_SPDIF_TX_PB_LEFT_10_SPDIF_TX_PB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R489_SPDIF_TX_PB_LEFT_10_SPDIF_TX_PB_LEFT_ADAU1452_MASK 0xFFFF
#define R489_SPDIF_TX_PB_LEFT_10_SPDIF_TX_PB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_PB_LEFT_11 (ADAU1452) */
#define R490_SPDIF_TX_PB_LEFT_11_SPDIF_TX_PB_LEFT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R490_SPDIF_TX_PB_LEFT_11_SPDIF_TX_PB_LEFT_ADAU1452_MASK 0xFFFF
#define R490_SPDIF_TX_PB_LEFT_11_SPDIF_TX_PB_LEFT_ADAU1452_SHIFT 0

/* SPDIF_TX_PB_RIGHT_0 (ADAU1452) */
#define R491_SPDIF_TX_PB_RIGHT_0_SPDIF_TX_PB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R491_SPDIF_TX_PB_RIGHT_0_SPDIF_TX_PB_RIGHT_ADAU1452_MASK 0xFFFF
#define R491_SPDIF_TX_PB_RIGHT_0_SPDIF_TX_PB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_PB_RIGHT_1 (ADAU1452) */
#define R492_SPDIF_TX_PB_RIGHT_1_SPDIF_TX_PB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R492_SPDIF_TX_PB_RIGHT_1_SPDIF_TX_PB_RIGHT_ADAU1452_MASK 0xFFFF
#define R492_SPDIF_TX_PB_RIGHT_1_SPDIF_TX_PB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_PB_RIGHT_2 (ADAU1452) */
#define R493_SPDIF_TX_PB_RIGHT_2_SPDIF_TX_PB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R493_SPDIF_TX_PB_RIGHT_2_SPDIF_TX_PB_RIGHT_ADAU1452_MASK 0xFFFF
#define R493_SPDIF_TX_PB_RIGHT_2_SPDIF_TX_PB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_PB_RIGHT_3 (ADAU1452) */
#define R494_SPDIF_TX_PB_RIGHT_3_SPDIF_TX_PB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R494_SPDIF_TX_PB_RIGHT_3_SPDIF_TX_PB_RIGHT_ADAU1452_MASK 0xFFFF
#define R494_SPDIF_TX_PB_RIGHT_3_SPDIF_TX_PB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_PB_RIGHT_4 (ADAU1452) */
#define R495_SPDIF_TX_PB_RIGHT_4_SPDIF_TX_PB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R495_SPDIF_TX_PB_RIGHT_4_SPDIF_TX_PB_RIGHT_ADAU1452_MASK 0xFFFF
#define R495_SPDIF_TX_PB_RIGHT_4_SPDIF_TX_PB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_PB_RIGHT_5 (ADAU1452) */
#define R496_SPDIF_TX_PB_RIGHT_5_SPDIF_TX_PB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R496_SPDIF_TX_PB_RIGHT_5_SPDIF_TX_PB_RIGHT_ADAU1452_MASK 0xFFFF
#define R496_SPDIF_TX_PB_RIGHT_5_SPDIF_TX_PB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_PB_RIGHT_6 (ADAU1452) */
#define R497_SPDIF_TX_PB_RIGHT_6_SPDIF_TX_PB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R497_SPDIF_TX_PB_RIGHT_6_SPDIF_TX_PB_RIGHT_ADAU1452_MASK 0xFFFF
#define R497_SPDIF_TX_PB_RIGHT_6_SPDIF_TX_PB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_PB_RIGHT_7 (ADAU1452) */
#define R498_SPDIF_TX_PB_RIGHT_7_SPDIF_TX_PB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R498_SPDIF_TX_PB_RIGHT_7_SPDIF_TX_PB_RIGHT_ADAU1452_MASK 0xFFFF
#define R498_SPDIF_TX_PB_RIGHT_7_SPDIF_TX_PB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_PB_RIGHT_8 (ADAU1452) */
#define R499_SPDIF_TX_PB_RIGHT_8_SPDIF_TX_PB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R499_SPDIF_TX_PB_RIGHT_8_SPDIF_TX_PB_RIGHT_ADAU1452_MASK 0xFFFF
#define R499_SPDIF_TX_PB_RIGHT_8_SPDIF_TX_PB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_PB_RIGHT_9 (ADAU1452) */
#define R500_SPDIF_TX_PB_RIGHT_9_SPDIF_TX_PB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R500_SPDIF_TX_PB_RIGHT_9_SPDIF_TX_PB_RIGHT_ADAU1452_MASK 0xFFFF
#define R500_SPDIF_TX_PB_RIGHT_9_SPDIF_TX_PB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_PB_RIGHT_10 (ADAU1452) */
#define R501_SPDIF_TX_PB_RIGHT_10_SPDIF_TX_PB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R501_SPDIF_TX_PB_RIGHT_10_SPDIF_TX_PB_RIGHT_ADAU1452_MASK 0xFFFF
#define R501_SPDIF_TX_PB_RIGHT_10_SPDIF_TX_PB_RIGHT_ADAU1452_SHIFT 0

/* SPDIF_TX_PB_RIGHT_11 (ADAU1452) */
#define R502_SPDIF_TX_PB_RIGHT_11_SPDIF_TX_PB_RIGHT_ADAU1452 0x0000 /* 0000000000000000b	[15:0] */
#define R502_SPDIF_TX_PB_RIGHT_11_SPDIF_TX_PB_RIGHT_ADAU1452_MASK 0xFFFF
#define R502_SPDIF_TX_PB_RIGHT_11_SPDIF_TX_PB_RIGHT_ADAU1452_SHIFT 0

/* BCLK_IN0_PIN (ADAU1452) */
#define R503_BCLK_IN0_PIN_BCLK_IN_DRIVE_ADAU1452  0x0    /* 00b	[1:0] */
#define R503_BCLK_IN0_PIN_BCLK_IN_SLEW_ADAU1452   0x0    /* 00b	[3:2] */
#define R503_BCLK_IN0_PIN_BCLK_IN_PULL_ADAU1452   0x0    /* 0b	[4] */
#define R503_BCLK_IN0_PIN_BCLK_IN_DRIVE_ADAU1452_MASK 0x3
#define R503_BCLK_IN0_PIN_BCLK_IN_DRIVE_ADAU1452_SHIFT 0
#define R503_BCLK_IN0_PIN_BCLK_IN_SLEW_ADAU1452_MASK 0xC
#define R503_BCLK_IN0_PIN_BCLK_IN_SLEW_ADAU1452_SHIFT 2
#define R503_BCLK_IN0_PIN_BCLK_IN_PULL_ADAU1452_MASK 0x10
#define R503_BCLK_IN0_PIN_BCLK_IN_PULL_ADAU1452_SHIFT 4

/* BCLK_IN1_PIN (ADAU1452) */
#define R504_BCLK_IN1_PIN_BCLK_IN_DRIVE_ADAU1452  0x0    /* 00b	[1:0] */
#define R504_BCLK_IN1_PIN_BCLK_IN_SLEW_ADAU1452   0x0    /* 00b	[3:2] */
#define R504_BCLK_IN1_PIN_BCLK_IN_PULL_ADAU1452   0x0    /* 0b	[4] */
#define R504_BCLK_IN1_PIN_BCLK_IN_DRIVE_ADAU1452_MASK 0x3
#define R504_BCLK_IN1_PIN_BCLK_IN_DRIVE_ADAU1452_SHIFT 0
#define R504_BCLK_IN1_PIN_BCLK_IN_SLEW_ADAU1452_MASK 0xC
#define R504_BCLK_IN1_PIN_BCLK_IN_SLEW_ADAU1452_SHIFT 2
#define R504_BCLK_IN1_PIN_BCLK_IN_PULL_ADAU1452_MASK 0x10
#define R504_BCLK_IN1_PIN_BCLK_IN_PULL_ADAU1452_SHIFT 4

/* BCLK_IN2_PIN (ADAU1452) */
#define R505_BCLK_IN2_PIN_BCLK_IN_DRIVE_ADAU1452  0x0    /* 00b	[1:0] */
#define R505_BCLK_IN2_PIN_BCLK_IN_SLEW_ADAU1452   0x0    /* 00b	[3:2] */
#define R505_BCLK_IN2_PIN_BCLK_IN_PULL_ADAU1452   0x0    /* 0b	[4] */
#define R505_BCLK_IN2_PIN_BCLK_IN_DRIVE_ADAU1452_MASK 0x3
#define R505_BCLK_IN2_PIN_BCLK_IN_DRIVE_ADAU1452_SHIFT 0
#define R505_BCLK_IN2_PIN_BCLK_IN_SLEW_ADAU1452_MASK 0xC
#define R505_BCLK_IN2_PIN_BCLK_IN_SLEW_ADAU1452_SHIFT 2
#define R505_BCLK_IN2_PIN_BCLK_IN_PULL_ADAU1452_MASK 0x10
#define R505_BCLK_IN2_PIN_BCLK_IN_PULL_ADAU1452_SHIFT 4

/* BCLK_IN3_PIN (ADAU1452) */
#define R506_BCLK_IN3_PIN_BCLK_IN_DRIVE_ADAU1452  0x0    /* 00b	[1:0] */
#define R506_BCLK_IN3_PIN_BCLK_IN_SLEW_ADAU1452   0x0    /* 00b	[3:2] */
#define R506_BCLK_IN3_PIN_BCLK_IN_PULL_ADAU1452   0x0    /* 0b	[4] */
#define R506_BCLK_IN3_PIN_BCLK_IN_DRIVE_ADAU1452_MASK 0x3
#define R506_BCLK_IN3_PIN_BCLK_IN_DRIVE_ADAU1452_SHIFT 0
#define R506_BCLK_IN3_PIN_BCLK_IN_SLEW_ADAU1452_MASK 0xC
#define R506_BCLK_IN3_PIN_BCLK_IN_SLEW_ADAU1452_SHIFT 2
#define R506_BCLK_IN3_PIN_BCLK_IN_PULL_ADAU1452_MASK 0x10
#define R506_BCLK_IN3_PIN_BCLK_IN_PULL_ADAU1452_SHIFT 4

/* BCLK_OUT0_PIN (ADAU1452) */
#define R507_BCLK_OUT0_PIN_BCLK_OUT_DRIVE_ADAU1452 0x0   /* 00b	[1:0] */
#define R507_BCLK_OUT0_PIN_BCLK_OUT_SLEW_ADAU1452 0x0    /* 00b	[3:2] */
#define R507_BCLK_OUT0_PIN_BCLK_OUT_PULL_ADAU1452 0x0    /* 0b	[4] */
#define R507_BCLK_OUT0_PIN_BCLK_OUT_DRIVE_ADAU1452_MASK 0x3
#define R507_BCLK_OUT0_PIN_BCLK_OUT_DRIVE_ADAU1452_SHIFT 0
#define R507_BCLK_OUT0_PIN_BCLK_OUT_SLEW_ADAU1452_MASK 0xC
#define R507_BCLK_OUT0_PIN_BCLK_OUT_SLEW_ADAU1452_SHIFT 2
#define R507_BCLK_OUT0_PIN_BCLK_OUT_PULL_ADAU1452_MASK 0x10
#define R507_BCLK_OUT0_PIN_BCLK_OUT_PULL_ADAU1452_SHIFT 4

/* BCLK_OUT1_PIN (ADAU1452) */
#define R508_BCLK_OUT1_PIN_BCLK_OUT_DRIVE_ADAU1452 0x0   /* 00b	[1:0] */
#define R508_BCLK_OUT1_PIN_BCLK_OUT_SLEW_ADAU1452 0x0    /* 00b	[3:2] */
#define R508_BCLK_OUT1_PIN_BCLK_OUT_PULL_ADAU1452 0x0    /* 0b	[4] */
#define R508_BCLK_OUT1_PIN_BCLK_OUT_DRIVE_ADAU1452_MASK 0x3
#define R508_BCLK_OUT1_PIN_BCLK_OUT_DRIVE_ADAU1452_SHIFT 0
#define R508_BCLK_OUT1_PIN_BCLK_OUT_SLEW_ADAU1452_MASK 0xC
#define R508_BCLK_OUT1_PIN_BCLK_OUT_SLEW_ADAU1452_SHIFT 2
#define R508_BCLK_OUT1_PIN_BCLK_OUT_PULL_ADAU1452_MASK 0x10
#define R508_BCLK_OUT1_PIN_BCLK_OUT_PULL_ADAU1452_SHIFT 4

/* BCLK_OUT2_PIN (ADAU1452) */
#define R509_BCLK_OUT2_PIN_BCLK_OUT_DRIVE_ADAU1452 0x0   /* 00b	[1:0] */
#define R509_BCLK_OUT2_PIN_BCLK_OUT_SLEW_ADAU1452 0x0    /* 00b	[3:2] */
#define R509_BCLK_OUT2_PIN_BCLK_OUT_PULL_ADAU1452 0x0    /* 0b	[4] */
#define R509_BCLK_OUT2_PIN_BCLK_OUT_DRIVE_ADAU1452_MASK 0x3
#define R509_BCLK_OUT2_PIN_BCLK_OUT_DRIVE_ADAU1452_SHIFT 0
#define R509_BCLK_OUT2_PIN_BCLK_OUT_SLEW_ADAU1452_MASK 0xC
#define R509_BCLK_OUT2_PIN_BCLK_OUT_SLEW_ADAU1452_SHIFT 2
#define R509_BCLK_OUT2_PIN_BCLK_OUT_PULL_ADAU1452_MASK 0x10
#define R509_BCLK_OUT2_PIN_BCLK_OUT_PULL_ADAU1452_SHIFT 4

/* BCLK_OUT3_PIN (ADAU1452) */
#define R510_BCLK_OUT3_PIN_BCLK_OUT_DRIVE_ADAU1452 0x0   /* 00b	[1:0] */
#define R510_BCLK_OUT3_PIN_BCLK_OUT_SLEW_ADAU1452 0x0    /* 00b	[3:2] */
#define R510_BCLK_OUT3_PIN_BCLK_OUT_PULL_ADAU1452 0x0    /* 0b	[4] */
#define R510_BCLK_OUT3_PIN_BCLK_OUT_DRIVE_ADAU1452_MASK 0x3
#define R510_BCLK_OUT3_PIN_BCLK_OUT_DRIVE_ADAU1452_SHIFT 0
#define R510_BCLK_OUT3_PIN_BCLK_OUT_SLEW_ADAU1452_MASK 0xC
#define R510_BCLK_OUT3_PIN_BCLK_OUT_SLEW_ADAU1452_SHIFT 2
#define R510_BCLK_OUT3_PIN_BCLK_OUT_PULL_ADAU1452_MASK 0x10
#define R510_BCLK_OUT3_PIN_BCLK_OUT_PULL_ADAU1452_SHIFT 4

/* LRCLK_IN0_PIN (ADAU1452) */
#define R511_LRCLK_IN0_PIN_LRCLK_IN_DRIVE_ADAU1452 0x0   /* 00b	[1:0] */
#define R511_LRCLK_IN0_PIN_LRCLK_IN_SLEW_ADAU1452 0x0    /* 00b	[3:2] */
#define R511_LRCLK_IN0_PIN_LRCLK_IN_PULL_ADAU1452 0x0    /* 0b	[4] */
#define R511_LRCLK_IN0_PIN_LRCLK_IN_DRIVE_ADAU1452_MASK 0x3
#define R511_LRCLK_IN0_PIN_LRCLK_IN_DRIVE_ADAU1452_SHIFT 0
#define R511_LRCLK_IN0_PIN_LRCLK_IN_SLEW_ADAU1452_MASK 0xC
#define R511_LRCLK_IN0_PIN_LRCLK_IN_SLEW_ADAU1452_SHIFT 2
#define R511_LRCLK_IN0_PIN_LRCLK_IN_PULL_ADAU1452_MASK 0x10
#define R511_LRCLK_IN0_PIN_LRCLK_IN_PULL_ADAU1452_SHIFT 4

/* LRCLK_IN1_PIN (ADAU1452) */
#define R512_LRCLK_IN1_PIN_LRCLK_IN_DRIVE_ADAU1452 0x0   /* 00b	[1:0] */
#define R512_LRCLK_IN1_PIN_LRCLK_IN_SLEW_ADAU1452 0x0    /* 00b	[3:2] */
#define R512_LRCLK_IN1_PIN_LRCLK_IN_PULL_ADAU1452 0x0    /* 0b	[4] */
#define R512_LRCLK_IN1_PIN_LRCLK_IN_DRIVE_ADAU1452_MASK 0x3
#define R512_LRCLK_IN1_PIN_LRCLK_IN_DRIVE_ADAU1452_SHIFT 0
#define R512_LRCLK_IN1_PIN_LRCLK_IN_SLEW_ADAU1452_MASK 0xC
#define R512_LRCLK_IN1_PIN_LRCLK_IN_SLEW_ADAU1452_SHIFT 2
#define R512_LRCLK_IN1_PIN_LRCLK_IN_PULL_ADAU1452_MASK 0x10
#define R512_LRCLK_IN1_PIN_LRCLK_IN_PULL_ADAU1452_SHIFT 4

/* LRCLK_IN2_PIN (ADAU1452) */
#define R513_LRCLK_IN2_PIN_LRCLK_IN_DRIVE_ADAU1452 0x0   /* 00b	[1:0] */
#define R513_LRCLK_IN2_PIN_LRCLK_IN_SLEW_ADAU1452 0x0    /* 00b	[3:2] */
#define R513_LRCLK_IN2_PIN_LRCLK_IN_PULL_ADAU1452 0x0    /* 0b	[4] */
#define R513_LRCLK_IN2_PIN_LRCLK_IN_DRIVE_ADAU1452_MASK 0x3
#define R513_LRCLK_IN2_PIN_LRCLK_IN_DRIVE_ADAU1452_SHIFT 0
#define R513_LRCLK_IN2_PIN_LRCLK_IN_SLEW_ADAU1452_MASK 0xC
#define R513_LRCLK_IN2_PIN_LRCLK_IN_SLEW_ADAU1452_SHIFT 2
#define R513_LRCLK_IN2_PIN_LRCLK_IN_PULL_ADAU1452_MASK 0x10
#define R513_LRCLK_IN2_PIN_LRCLK_IN_PULL_ADAU1452_SHIFT 4

/* LRCLK_IN3_PIN (ADAU1452) */
#define R514_LRCLK_IN3_PIN_LRCLK_IN_DRIVE_ADAU1452 0x0   /* 00b	[1:0] */
#define R514_LRCLK_IN3_PIN_LRCLK_IN_SLEW_ADAU1452 0x0    /* 00b	[3:2] */
#define R514_LRCLK_IN3_PIN_LRCLK_IN_PULL_ADAU1452 0x0    /* 0b	[4] */
#define R514_LRCLK_IN3_PIN_LRCLK_IN_DRIVE_ADAU1452_MASK 0x3
#define R514_LRCLK_IN3_PIN_LRCLK_IN_DRIVE_ADAU1452_SHIFT 0
#define R514_LRCLK_IN3_PIN_LRCLK_IN_SLEW_ADAU1452_MASK 0xC
#define R514_LRCLK_IN3_PIN_LRCLK_IN_SLEW_ADAU1452_SHIFT 2
#define R514_LRCLK_IN3_PIN_LRCLK_IN_PULL_ADAU1452_MASK 0x10
#define R514_LRCLK_IN3_PIN_LRCLK_IN_PULL_ADAU1452_SHIFT 4

/* LRCLK_OUT0_PIN (ADAU1452) */
#define R515_LRCLK_OUT0_PIN_LRCLK_OUT_DRIVE_ADAU1452 0x0 /* 00b	[1:0] */
#define R515_LRCLK_OUT0_PIN_LRCLK_OUT_SLEW_ADAU1452 0x0  /* 00b	[3:2] */
#define R515_LRCLK_OUT0_PIN_LRCLK_OUT_PULL_ADAU1452 0x0  /* 0b	[4] */
#define R515_LRCLK_OUT0_PIN_LRCLK_OUT_DRIVE_ADAU1452_MASK 0x3
#define R515_LRCLK_OUT0_PIN_LRCLK_OUT_DRIVE_ADAU1452_SHIFT 0
#define R515_LRCLK_OUT0_PIN_LRCLK_OUT_SLEW_ADAU1452_MASK 0xC
#define R515_LRCLK_OUT0_PIN_LRCLK_OUT_SLEW_ADAU1452_SHIFT 2
#define R515_LRCLK_OUT0_PIN_LRCLK_OUT_PULL_ADAU1452_MASK 0x10
#define R515_LRCLK_OUT0_PIN_LRCLK_OUT_PULL_ADAU1452_SHIFT 4

/* LRCLK_OUT1_PIN (ADAU1452) */
#define R516_LRCLK_OUT1_PIN_LRCLK_OUT_DRIVE_ADAU1452 0x0 /* 00b	[1:0] */
#define R516_LRCLK_OUT1_PIN_LRCLK_OUT_SLEW_ADAU1452 0x0  /* 00b	[3:2] */
#define R516_LRCLK_OUT1_PIN_LRCLK_OUT_PULL_ADAU1452 0x0  /* 0b	[4] */
#define R516_LRCLK_OUT1_PIN_LRCLK_OUT_DRIVE_ADAU1452_MASK 0x3
#define R516_LRCLK_OUT1_PIN_LRCLK_OUT_DRIVE_ADAU1452_SHIFT 0
#define R516_LRCLK_OUT1_PIN_LRCLK_OUT_SLEW_ADAU1452_MASK 0xC
#define R516_LRCLK_OUT1_PIN_LRCLK_OUT_SLEW_ADAU1452_SHIFT 2
#define R516_LRCLK_OUT1_PIN_LRCLK_OUT_PULL_ADAU1452_MASK 0x10
#define R516_LRCLK_OUT1_PIN_LRCLK_OUT_PULL_ADAU1452_SHIFT 4

/* LRCLK_OUT2_PIN (ADAU1452) */
#define R517_LRCLK_OUT2_PIN_LRCLK_OUT_DRIVE_ADAU1452 0x0 /* 00b	[1:0] */
#define R517_LRCLK_OUT2_PIN_LRCLK_OUT_SLEW_ADAU1452 0x0  /* 00b	[3:2] */
#define R517_LRCLK_OUT2_PIN_LRCLK_OUT_PULL_ADAU1452 0x0  /* 0b	[4] */
#define R517_LRCLK_OUT2_PIN_LRCLK_OUT_DRIVE_ADAU1452_MASK 0x3
#define R517_LRCLK_OUT2_PIN_LRCLK_OUT_DRIVE_ADAU1452_SHIFT 0
#define R517_LRCLK_OUT2_PIN_LRCLK_OUT_SLEW_ADAU1452_MASK 0xC
#define R517_LRCLK_OUT2_PIN_LRCLK_OUT_SLEW_ADAU1452_SHIFT 2
#define R517_LRCLK_OUT2_PIN_LRCLK_OUT_PULL_ADAU1452_MASK 0x10
#define R517_LRCLK_OUT2_PIN_LRCLK_OUT_PULL_ADAU1452_SHIFT 4

/* LRCLK_OUT3_PIN (ADAU1452) */
#define R518_LRCLK_OUT3_PIN_LRCLK_OUT_DRIVE_ADAU1452 0x0 /* 00b	[1:0] */
#define R518_LRCLK_OUT3_PIN_LRCLK_OUT_SLEW_ADAU1452 0x0  /* 00b	[3:2] */
#define R518_LRCLK_OUT3_PIN_LRCLK_OUT_PULL_ADAU1452 0x0  /* 0b	[4] */
#define R518_LRCLK_OUT3_PIN_LRCLK_OUT_DRIVE_ADAU1452_MASK 0x3
#define R518_LRCLK_OUT3_PIN_LRCLK_OUT_DRIVE_ADAU1452_SHIFT 0
#define R518_LRCLK_OUT3_PIN_LRCLK_OUT_SLEW_ADAU1452_MASK 0xC
#define R518_LRCLK_OUT3_PIN_LRCLK_OUT_SLEW_ADAU1452_SHIFT 2
#define R518_LRCLK_OUT3_PIN_LRCLK_OUT_PULL_ADAU1452_MASK 0x10
#define R518_LRCLK_OUT3_PIN_LRCLK_OUT_PULL_ADAU1452_SHIFT 4

/* SDATA_IN0_PIN (ADAU1452) */
#define R519_SDATA_IN0_PIN_SDATA_IN_DRIVE_ADAU1452 0x0   /* 00b	[1:0] */
#define R519_SDATA_IN0_PIN_SDATA_IN_SLEW_ADAU1452 0x0    /* 00b	[3:2] */
#define R519_SDATA_IN0_PIN_SDATA_IN_PULL_ADAU1452 0x0    /* 0b	[4] */
#define R519_SDATA_IN0_PIN_SDATA_IN_DRIVE_ADAU1452_MASK 0x3
#define R519_SDATA_IN0_PIN_SDATA_IN_DRIVE_ADAU1452_SHIFT 0
#define R519_SDATA_IN0_PIN_SDATA_IN_SLEW_ADAU1452_MASK 0xC
#define R519_SDATA_IN0_PIN_SDATA_IN_SLEW_ADAU1452_SHIFT 2
#define R519_SDATA_IN0_PIN_SDATA_IN_PULL_ADAU1452_MASK 0x10
#define R519_SDATA_IN0_PIN_SDATA_IN_PULL_ADAU1452_SHIFT 4

/* SDATA_IN1_PIN (ADAU1452) */
#define R520_SDATA_IN1_PIN_SDATA_IN_DRIVE_ADAU1452 0x0   /* 00b	[1:0] */
#define R520_SDATA_IN1_PIN_SDATA_IN_SLEW_ADAU1452 0x0    /* 00b	[3:2] */
#define R520_SDATA_IN1_PIN_SDATA_IN_PULL_ADAU1452 0x0    /* 0b	[4] */
#define R520_SDATA_IN1_PIN_SDATA_IN_DRIVE_ADAU1452_MASK 0x3
#define R520_SDATA_IN1_PIN_SDATA_IN_DRIVE_ADAU1452_SHIFT 0
#define R520_SDATA_IN1_PIN_SDATA_IN_SLEW_ADAU1452_MASK 0xC
#define R520_SDATA_IN1_PIN_SDATA_IN_SLEW_ADAU1452_SHIFT 2
#define R520_SDATA_IN1_PIN_SDATA_IN_PULL_ADAU1452_MASK 0x10
#define R520_SDATA_IN1_PIN_SDATA_IN_PULL_ADAU1452_SHIFT 4

/* SDATA_IN2_PIN (ADAU1452) */
#define R521_SDATA_IN2_PIN_SDATA_IN_DRIVE_ADAU1452 0x0   /* 00b	[1:0] */
#define R521_SDATA_IN2_PIN_SDATA_IN_SLEW_ADAU1452 0x0    /* 00b	[3:2] */
#define R521_SDATA_IN2_PIN_SDATA_IN_PULL_ADAU1452 0x0    /* 0b	[4] */
#define R521_SDATA_IN2_PIN_SDATA_IN_DRIVE_ADAU1452_MASK 0x3
#define R521_SDATA_IN2_PIN_SDATA_IN_DRIVE_ADAU1452_SHIFT 0
#define R521_SDATA_IN2_PIN_SDATA_IN_SLEW_ADAU1452_MASK 0xC
#define R521_SDATA_IN2_PIN_SDATA_IN_SLEW_ADAU1452_SHIFT 2
#define R521_SDATA_IN2_PIN_SDATA_IN_PULL_ADAU1452_MASK 0x10
#define R521_SDATA_IN2_PIN_SDATA_IN_PULL_ADAU1452_SHIFT 4

/* SDATA_IN3_PIN (ADAU1452) */
#define R522_SDATA_IN3_PIN_SDATA_IN_DRIVE_ADAU1452 0x0   /* 00b	[1:0] */
#define R522_SDATA_IN3_PIN_SDATA_IN_SLEW_ADAU1452 0x0    /* 00b	[3:2] */
#define R522_SDATA_IN3_PIN_SDATA_IN_PULL_ADAU1452 0x0    /* 0b	[4] */
#define R522_SDATA_IN3_PIN_SDATA_IN_DRIVE_ADAU1452_MASK 0x3
#define R522_SDATA_IN3_PIN_SDATA_IN_DRIVE_ADAU1452_SHIFT 0
#define R522_SDATA_IN3_PIN_SDATA_IN_SLEW_ADAU1452_MASK 0xC
#define R522_SDATA_IN3_PIN_SDATA_IN_SLEW_ADAU1452_SHIFT 2
#define R522_SDATA_IN3_PIN_SDATA_IN_PULL_ADAU1452_MASK 0x10
#define R522_SDATA_IN3_PIN_SDATA_IN_PULL_ADAU1452_SHIFT 4

/* SDATA_OUT0_PIN (ADAU1452) */
#define R523_SDATA_OUT0_PIN_SDATA_OUT_DRIVE_ADAU1452 0x0 /* 00b	[1:0] */
#define R523_SDATA_OUT0_PIN_SDATA_OUT_SLEW_ADAU1452 0x0  /* 00b	[3:2] */
#define R523_SDATA_OUT0_PIN_SDATA_OUT_PULL_ADAU1452 0x0  /* 0b	[4] */
#define R523_SDATA_OUT0_PIN_SDATA_OUT_DRIVE_ADAU1452_MASK 0x3
#define R523_SDATA_OUT0_PIN_SDATA_OUT_DRIVE_ADAU1452_SHIFT 0
#define R523_SDATA_OUT0_PIN_SDATA_OUT_SLEW_ADAU1452_MASK 0xC
#define R523_SDATA_OUT0_PIN_SDATA_OUT_SLEW_ADAU1452_SHIFT 2
#define R523_SDATA_OUT0_PIN_SDATA_OUT_PULL_ADAU1452_MASK 0x10
#define R523_SDATA_OUT0_PIN_SDATA_OUT_PULL_ADAU1452_SHIFT 4

/* SDATA_OUT1_PIN (ADAU1452) */
#define R524_SDATA_OUT1_PIN_SDATA_OUT_DRIVE_ADAU1452 0x0 /* 00b	[1:0] */
#define R524_SDATA_OUT1_PIN_SDATA_OUT_SLEW_ADAU1452 0x0  /* 00b	[3:2] */
#define R524_SDATA_OUT1_PIN_SDATA_OUT_PULL_ADAU1452 0x0  /* 0b	[4] */
#define R524_SDATA_OUT1_PIN_SDATA_OUT_DRIVE_ADAU1452_MASK 0x3
#define R524_SDATA_OUT1_PIN_SDATA_OUT_DRIVE_ADAU1452_SHIFT 0
#define R524_SDATA_OUT1_PIN_SDATA_OUT_SLEW_ADAU1452_MASK 0xC
#define R524_SDATA_OUT1_PIN_SDATA_OUT_SLEW_ADAU1452_SHIFT 2
#define R524_SDATA_OUT1_PIN_SDATA_OUT_PULL_ADAU1452_MASK 0x10
#define R524_SDATA_OUT1_PIN_SDATA_OUT_PULL_ADAU1452_SHIFT 4

/* SDATA_OUT2_PIN (ADAU1452) */
#define R525_SDATA_OUT2_PIN_SDATA_OUT_DRIVE_ADAU1452 0x0 /* 00b	[1:0] */
#define R525_SDATA_OUT2_PIN_SDATA_OUT_SLEW_ADAU1452 0x0  /* 00b	[3:2] */
#define R525_SDATA_OUT2_PIN_SDATA_OUT_PULL_ADAU1452 0x0  /* 0b	[4] */
#define R525_SDATA_OUT2_PIN_SDATA_OUT_DRIVE_ADAU1452_MASK 0x3
#define R525_SDATA_OUT2_PIN_SDATA_OUT_DRIVE_ADAU1452_SHIFT 0
#define R525_SDATA_OUT2_PIN_SDATA_OUT_SLEW_ADAU1452_MASK 0xC
#define R525_SDATA_OUT2_PIN_SDATA_OUT_SLEW_ADAU1452_SHIFT 2
#define R525_SDATA_OUT2_PIN_SDATA_OUT_PULL_ADAU1452_MASK 0x10
#define R525_SDATA_OUT2_PIN_SDATA_OUT_PULL_ADAU1452_SHIFT 4

/* SDATA_OUT3_PIN (ADAU1452) */
#define R526_SDATA_OUT3_PIN_SDATA_OUT_DRIVE_ADAU1452 0x0 /* 00b	[1:0] */
#define R526_SDATA_OUT3_PIN_SDATA_OUT_SLEW_ADAU1452 0x0  /* 00b	[3:2] */
#define R526_SDATA_OUT3_PIN_SDATA_OUT_PULL_ADAU1452 0x0  /* 0b	[4] */
#define R526_SDATA_OUT3_PIN_SDATA_OUT_DRIVE_ADAU1452_MASK 0x3
#define R526_SDATA_OUT3_PIN_SDATA_OUT_DRIVE_ADAU1452_SHIFT 0
#define R526_SDATA_OUT3_PIN_SDATA_OUT_SLEW_ADAU1452_MASK 0xC
#define R526_SDATA_OUT3_PIN_SDATA_OUT_SLEW_ADAU1452_SHIFT 2
#define R526_SDATA_OUT3_PIN_SDATA_OUT_PULL_ADAU1452_MASK 0x10
#define R526_SDATA_OUT3_PIN_SDATA_OUT_PULL_ADAU1452_SHIFT 4

/* SPDIF_TX_PIN (ADAU1452) */
#define R527_SPDIF_TX_PIN_SPDIF_TX_DRIVE_ADAU1452 0x0    /* 00b	[1:0] */
#define R527_SPDIF_TX_PIN_SPDIF_TX_SLEW_ADAU1452  0x0    /* 00b	[3:2] */
#define R527_SPDIF_TX_PIN_SPDIF_TX_PULL_ADAU1452  0x0    /* 0b	[4] */
#define R527_SPDIF_TX_PIN_SPDIF_TX_DRIVE_ADAU1452_MASK 0x3
#define R527_SPDIF_TX_PIN_SPDIF_TX_DRIVE_ADAU1452_SHIFT 0
#define R527_SPDIF_TX_PIN_SPDIF_TX_SLEW_ADAU1452_MASK 0xC
#define R527_SPDIF_TX_PIN_SPDIF_TX_SLEW_ADAU1452_SHIFT 2
#define R527_SPDIF_TX_PIN_SPDIF_TX_PULL_ADAU1452_MASK 0x10
#define R527_SPDIF_TX_PIN_SPDIF_TX_PULL_ADAU1452_SHIFT 4

/* SCLK_SCL_PIN (ADAU1452) */
#define R528_SCLK_SCL_PIN_SCLK_SCL_DRIVE_ADAU1452 0x0    /* 00b	[1:0] */
#define R528_SCLK_SCL_PIN_SCLK_SCL_SLEW_ADAU1452  0x2    /* 10b	[3:2] */
#define R528_SCLK_SCL_PIN_SCLK_SCL_PULL_ADAU1452  0x1    /* 1b	[4] */
#define R528_SCLK_SCL_PIN_SCLK_SCL_DRIVE_ADAU1452_MASK 0x3
#define R528_SCLK_SCL_PIN_SCLK_SCL_DRIVE_ADAU1452_SHIFT 0
#define R528_SCLK_SCL_PIN_SCLK_SCL_SLEW_ADAU1452_MASK 0xC
#define R528_SCLK_SCL_PIN_SCLK_SCL_SLEW_ADAU1452_SHIFT 2
#define R528_SCLK_SCL_PIN_SCLK_SCL_PULL_ADAU1452_MASK 0x10
#define R528_SCLK_SCL_PIN_SCLK_SCL_PULL_ADAU1452_SHIFT 4

/* MISO_SDA_PIN (ADAU1452) */
#define R529_MISO_SDA_PIN_MISO_SDA_DRIVE_ADAU1452 0x0    /* 00b	[1:0] */
#define R529_MISO_SDA_PIN_MISO_SDA_SLEW_ADAU1452  0x0    /* 00b	[3:2] */
#define R529_MISO_SDA_PIN_MISO_SDA_PULL_ADAU1452  0x0    /* 0b	[4] */
#define R529_MISO_SDA_PIN_MISO_SDA_DRIVE_ADAU1452_MASK 0x3
#define R529_MISO_SDA_PIN_MISO_SDA_DRIVE_ADAU1452_SHIFT 0
#define R529_MISO_SDA_PIN_MISO_SDA_SLEW_ADAU1452_MASK 0xC
#define R529_MISO_SDA_PIN_MISO_SDA_SLEW_ADAU1452_SHIFT 2
#define R529_MISO_SDA_PIN_MISO_SDA_PULL_ADAU1452_MASK 0x10
#define R529_MISO_SDA_PIN_MISO_SDA_PULL_ADAU1452_SHIFT 4

/* SS_PIN (ADAU1452) */
#define R530_SS_PIN_SS_DRIVE_ADAU1452             0x0    /* 00b	[1:0] */
#define R530_SS_PIN_SS_SLEW_ADAU1452              0x2    /* 10b	[3:2] */
#define R530_SS_PIN_SS_PULL_ADAU1452              0x1    /* 1b	[4] */
#define R530_SS_PIN_SS_DRIVE_ADAU1452_MASK        0x3
#define R530_SS_PIN_SS_DRIVE_ADAU1452_SHIFT       0
#define R530_SS_PIN_SS_SLEW_ADAU1452_MASK         0xC
#define R530_SS_PIN_SS_SLEW_ADAU1452_SHIFT        2
#define R530_SS_PIN_SS_PULL_ADAU1452_MASK         0x10
#define R530_SS_PIN_SS_PULL_ADAU1452_SHIFT        4

/* MOSI_ADDR1_PIN (ADAU1452) */
#define R531_MOSI_ADDR1_PIN_MOSI_ADDR1_DRIVE_ADAU1452 0x0 /* 00b	[1:0] */
#define R531_MOSI_ADDR1_PIN_MOSI_ADDR1_SLEW_ADAU1452 0x0 /* 00b	[3:2] */
#define R531_MOSI_ADDR1_PIN_MOSI_ADDR1_PULL_ADAU1452 0x0 /* 0b	[4] */
#define R531_MOSI_ADDR1_PIN_MOSI_ADDR1_DRIVE_ADAU1452_MASK 0x3
#define R531_MOSI_ADDR1_PIN_MOSI_ADDR1_DRIVE_ADAU1452_SHIFT 0
#define R531_MOSI_ADDR1_PIN_MOSI_ADDR1_SLEW_ADAU1452_MASK 0xC
#define R531_MOSI_ADDR1_PIN_MOSI_ADDR1_SLEW_ADAU1452_SHIFT 2
#define R531_MOSI_ADDR1_PIN_MOSI_ADDR1_PULL_ADAU1452_MASK 0x10
#define R531_MOSI_ADDR1_PIN_MOSI_ADDR1_PULL_ADAU1452_SHIFT 4

/* SCLK_SCL_M_PIN (ADAU1452) */
#define R532_SCLK_SCL_M_PIN_SCLK_SCL_M_DRIVE_ADAU1452 0x0 /* 00b	[1:0] */
#define R532_SCLK_SCL_M_PIN_SCLK_SCL_M_SLEW_ADAU1452 0x0 /* 00b	[3:2] */
#define R532_SCLK_SCL_M_PIN_SCLK_SCL_M_PULL_ADAU1452 0x0 /* 0b	[4] */
#define R532_SCLK_SCL_M_PIN_SCLK_SCL_M_DRIVE_ADAU1452_MASK 0x3
#define R532_SCLK_SCL_M_PIN_SCLK_SCL_M_DRIVE_ADAU1452_SHIFT 0
#define R532_SCLK_SCL_M_PIN_SCLK_SCL_M_SLEW_ADAU1452_MASK 0xC
#define R532_SCLK_SCL_M_PIN_SCLK_SCL_M_SLEW_ADAU1452_SHIFT 2
#define R532_SCLK_SCL_M_PIN_SCLK_SCL_M_PULL_ADAU1452_MASK 0x10
#define R532_SCLK_SCL_M_PIN_SCLK_SCL_M_PULL_ADAU1452_SHIFT 4

/* MISO_SDA_M_PIN (ADAU1452) */
#define R533_MISO_SDA_M_PIN_MISO_SDA_M_DRIVE_ADAU1452 0x0 /* 00b	[1:0] */
#define R533_MISO_SDA_M_PIN_MISO_SDA_M_SLEW_ADAU1452 0x0 /* 00b	[3:2] */
#define R533_MISO_SDA_M_PIN_MISO_SDA_M_PULL_ADAU1452 0x0 /* 0b	[4] */
#define R533_MISO_SDA_M_PIN_MISO_SDA_M_DRIVE_ADAU1452_MASK 0x3
#define R533_MISO_SDA_M_PIN_MISO_SDA_M_DRIVE_ADAU1452_SHIFT 0
#define R533_MISO_SDA_M_PIN_MISO_SDA_M_SLEW_ADAU1452_MASK 0xC
#define R533_MISO_SDA_M_PIN_MISO_SDA_M_SLEW_ADAU1452_SHIFT 2
#define R533_MISO_SDA_M_PIN_MISO_SDA_M_PULL_ADAU1452_MASK 0x10
#define R533_MISO_SDA_M_PIN_MISO_SDA_M_PULL_ADAU1452_SHIFT 4

/* SS_M_PIN (ADAU1452) */
#define R534_SS_M_PIN_SS_M_DRIVE_ADAU1452         0x0    /* 00b	[1:0] */
#define R534_SS_M_PIN_SS_M_SLEW_ADAU1452          0x2    /* 10b	[3:2] */
#define R534_SS_M_PIN_SS_M_PULL_ADAU1452          0x1    /* 1b	[4] */
#define R534_SS_M_PIN_SS_M_DRIVE_ADAU1452_MASK    0x3
#define R534_SS_M_PIN_SS_M_DRIVE_ADAU1452_SHIFT   0
#define R534_SS_M_PIN_SS_M_SLEW_ADAU1452_MASK     0xC
#define R534_SS_M_PIN_SS_M_SLEW_ADAU1452_SHIFT    2
#define R534_SS_M_PIN_SS_M_PULL_ADAU1452_MASK     0x10
#define R534_SS_M_PIN_SS_M_PULL_ADAU1452_SHIFT    4

/* MOSI_M_PIN (ADAU1452) */
#define R535_MOSI_M_PIN_MOSI_M_DRIVE_ADAU1452     0x0    /* 00b	[1:0] */
#define R535_MOSI_M_PIN_MOSI_M_SLEW_ADAU1452      0x2    /* 10b	[3:2] */
#define R535_MOSI_M_PIN_MOSI_M_PULL_ADAU1452      0x1    /* 1b	[4] */
#define R535_MOSI_M_PIN_MOSI_M_DRIVE_ADAU1452_MASK 0x3
#define R535_MOSI_M_PIN_MOSI_M_DRIVE_ADAU1452_SHIFT 0
#define R535_MOSI_M_PIN_MOSI_M_SLEW_ADAU1452_MASK 0xC
#define R535_MOSI_M_PIN_MOSI_M_SLEW_ADAU1452_SHIFT 2
#define R535_MOSI_M_PIN_MOSI_M_PULL_ADAU1452_MASK 0x10
#define R535_MOSI_M_PIN_MOSI_M_PULL_ADAU1452_SHIFT 4

/* MP6_PIN (ADAU1452) */
#define R536_MP6_PIN_MP6_DRIVE_ADAU1452           0x0    /* 00b	[1:0] */
#define R536_MP6_PIN_MP6_SLEW_ADAU1452            0x0    /* 00b	[3:2] */
#define R536_MP6_PIN_MP6_PULL_ADAU1452            0x0    /* 0b	[4] */
#define R536_MP6_PIN_MP6_DRIVE_ADAU1452_MASK      0x3
#define R536_MP6_PIN_MP6_DRIVE_ADAU1452_SHIFT     0
#define R536_MP6_PIN_MP6_SLEW_ADAU1452_MASK       0xC
#define R536_MP6_PIN_MP6_SLEW_ADAU1452_SHIFT      2
#define R536_MP6_PIN_MP6_PULL_ADAU1452_MASK       0x10
#define R536_MP6_PIN_MP6_PULL_ADAU1452_SHIFT      4

/* MP7_PIN (ADAU1452) */
#define R537_MP7_PIN_MP7_DRIVE_ADAU1452           0x0    /* 00b	[1:0] */
#define R537_MP7_PIN_MP7_SLEW_ADAU1452            0x0    /* 00b	[3:2] */
#define R537_MP7_PIN_MP7_PULL_ADAU1452            0x0    /* 0b	[4] */
#define R537_MP7_PIN_MP7_DRIVE_ADAU1452_MASK      0x3
#define R537_MP7_PIN_MP7_DRIVE_ADAU1452_SHIFT     0
#define R537_MP7_PIN_MP7_SLEW_ADAU1452_MASK       0xC
#define R537_MP7_PIN_MP7_SLEW_ADAU1452_SHIFT      2
#define R537_MP7_PIN_MP7_PULL_ADAU1452_MASK       0x10
#define R537_MP7_PIN_MP7_PULL_ADAU1452_SHIFT      4

/* CLKOUT_PIN (ADAU1452) */
#define R538_CLKOUT_PIN_CLKOUT_DRIVE_ADAU1452     0x0    /* 00b	[1:0] */
#define R538_CLKOUT_PIN_CLKOUT_SLEW_ADAU1452      0x0    /* 00b	[3:2] */
#define R538_CLKOUT_PIN_CLKOUT_PULL_ADAU1452      0x0    /* 0b	[4] */
#define R538_CLKOUT_PIN_CLKOUT_DRIVE_ADAU1452_MASK 0x3
#define R538_CLKOUT_PIN_CLKOUT_DRIVE_ADAU1452_SHIFT 0
#define R538_CLKOUT_PIN_CLKOUT_SLEW_ADAU1452_MASK 0xC
#define R538_CLKOUT_PIN_CLKOUT_SLEW_ADAU1452_SHIFT 2
#define R538_CLKOUT_PIN_CLKOUT_PULL_ADAU1452_MASK 0x10
#define R538_CLKOUT_PIN_CLKOUT_PULL_ADAU1452_SHIFT 4

/* SOFT_RESET (ADAU1452) */
#define R539_SOFTWARE_RESET_ADAU1452              0x1    /* 1b	[0] */
#define R539_SOFTWARE_RESET_ADAU1452_MASK         0x1
#define R539_SOFTWARE_RESET_ADAU1452_SHIFT        0

#endif
