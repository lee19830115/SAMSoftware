/*
 * File:           C:\Users\Dan\Dropbox\Projects\ADI002 - SS Frameworks\Software\New Frameworks\SigmaStudio Schematics\Converter configurations\SAM Board Configurations\Default\Exported init files\ADAU1761_ADAU1761_PARAM.h
 *
 * Created:        Wednesday, May 31, 2017 5:50:07 PM
 * Description:    ADAU1761:ADAU1761 parameter RAM definitions.
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
#ifndef __ADAU1761_ADAU1761_PARAM_H__
#define __ADAU1761_ADAU1761_PARAM_H__


/* Module Modulo Size - Modulo Size*/
#define MOD_MODULOSIZE_COUNT                           1
#define MOD_MODULOSIZE_DEVICE                          "ADAU1761"
#define MOD_MODULOSIZE_MODULO_SIZE_ADDR                0
#define MOD_MODULOSIZE_MODULO_SIZE_FIXPT               0x00000FFE
#define MOD_MODULOSIZE_MODULO_SIZE_VALUE               SIGMASTUDIOTYPE_INTEGER_CONVERT(4094)
#define MOD_MODULOSIZE_MODULO_SIZE_TYPE                SIGMASTUDIOTYPE_INTEGER

/* Module Tone1 - Sine Tone*/
#define MOD_TONE1_COUNT                                3
#define MOD_TONE1_DEVICE                               "ADAU1761"
#define MOD_STATIC_TONE1_ALG0_MASK_ADDR                8
#define MOD_STATIC_TONE1_ALG0_MASK_FIXPT               0x000000FF
#define MOD_STATIC_TONE1_ALG0_MASK_VALUE               SIGMASTUDIOTYPE_INTEGER_CONVERT(255)
#define MOD_STATIC_TONE1_ALG0_MASK_TYPE                SIGMASTUDIOTYPE_INTEGER
#define MOD_TONE1_ALG0_INCREMENT_ADDR                  9
#define MOD_TONE1_ALG0_INCREMENT_FIXPT                 0x00011111
#define MOD_TONE1_ALG0_INCREMENT_VALUE                 SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.00833333333333333)
#define MOD_TONE1_ALG0_INCREMENT_TYPE                  SIGMASTUDIOTYPE_FIXPOINT
#define MOD_TONE1_ALG0_ON_ADDR                         10
#define MOD_TONE1_ALG0_ON_FIXPT                        0x00800000
#define MOD_TONE1_ALG0_ON_VALUE                        SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_TONE1_ALG0_ON_TYPE                         SIGMASTUDIOTYPE_FIXPOINT

/* Module DC1 - DC Input Entry*/
#define MOD_DC1_COUNT                                  1
#define MOD_DC1_DEVICE                                 "ADAU1761"
#define MOD_DC1_DCINPALG1_ADDR                         11
#define MOD_DC1_DCINPALG1_FIXPT                        0xFFA80000
#define MOD_DC1_DCINPALG1_VALUE                        SIGMASTUDIOTYPE_FIXPOINT_CONVERT(-0.6875)
#define MOD_DC1_DCINPALG1_TYPE                         SIGMASTUDIOTYPE_FIXPOINT

/* Module DC1_2 - DC Input Entry*/
#define MOD_DC1_2_COUNT                                1
#define MOD_DC1_2_DEVICE                               "ADAU1761"
#define MOD_DC1_2_DCINPALG2_ADDR                       12
#define MOD_DC1_2_DCINPALG2_VALUE                      SIGMASTUDIOTYPE_2_26_CONVERT(0)
#define MOD_DC1_2_DCINPALG2_TYPE                       SIGMASTUDIOTYPE_2_26

/* Module Single 1 - Single Volume*/
#define MOD_SINGLE1_COUNT                              3
#define MOD_SINGLE1_DEVICE                             "ADAU1761"
#define MOD_SINGLE1_ALG0_GAINS200ALG1GAINTARGET_ADDR   13
#define MOD_SINGLE1_ALG0_GAINS200ALG1GAINTARGET_FIXPT  0x00800000
#define MOD_SINGLE1_ALG0_GAINS200ALG1GAINTARGET_VALUE  SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_SINGLE1_ALG0_GAINS200ALG1GAINTARGET_TYPE   SIGMASTUDIOTYPE_FIXPOINT
#define MOD_SINGLE1_ALG0_GAINS200ALG1ALPHA0_ADDR       8190
#define MOD_SINGLE1_ALG0_GAINS200ALG1ALPHA0_FIXPT      0x007FF259
#define MOD_SINGLE1_ALG0_GAINS200ALG1ALPHA0_VALUE      SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.999583420126834)
#define MOD_SINGLE1_ALG0_GAINS200ALG1ALPHA0_TYPE       SIGMASTUDIOTYPE_FIXPOINT
#define MOD_SINGLE1_ALG0_GAINS200ALG1ALPHA1_ADDR       8191
#define MOD_SINGLE1_ALG0_GAINS200ALG1ALPHA1_FIXPT      0x00000DA6
#define MOD_SINGLE1_ALG0_GAINS200ALG1ALPHA1_VALUE      SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.000416579873166234)
#define MOD_SINGLE1_ALG0_GAINS200ALG1ALPHA1_TYPE       SIGMASTUDIOTYPE_FIXPOINT

/* Module Level1 - Single Level Detector w Numerical Display*/
#define MOD_LEVEL1_COUNT                               3
#define MOD_LEVEL1_DEVICE                              "ADAU1761"
#define MOD_LEVEL1_ALG0_SINGLEBANDLEVELDETWOUTDISP3RDGEN1TCONST_ADDR 16
#define MOD_LEVEL1_ALG0_SINGLEBANDLEVELDETWOUTDISP3RDGEN1TCONST_FIXPT 0x00004EB0
#define MOD_LEVEL1_ALG0_SINGLEBANDLEVELDETWOUTDISP3RDGEN1TCONST_VALUE SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.00240140490349172)
#define MOD_LEVEL1_ALG0_SINGLEBANDLEVELDETWOUTDISP3RDGEN1TCONST_TYPE SIGMASTUDIOTYPE_FIXPOINT
#define MOD_LEVEL1_ALG0_SINGLEBANDLEVELDETWOUTDISP3RDGEN1HOLD_ADDR 17
#define MOD_LEVEL1_ALG0_SINGLEBANDLEVELDETWOUTDISP3RDGEN1HOLD_FIXPT 0x000001E0
#define MOD_LEVEL1_ALG0_SINGLEBANDLEVELDETWOUTDISP3RDGEN1HOLD_VALUE SIGMASTUDIOTYPE_INTEGER_CONVERT(480)
#define MOD_LEVEL1_ALG0_SINGLEBANDLEVELDETWOUTDISP3RDGEN1HOLD_TYPE SIGMASTUDIOTYPE_INTEGER
#define MOD_LEVEL1_ALG0_SINGLEBANDLEVELDETWOUTDISP3RDGEN1DECAY_ADDR 18
#define MOD_LEVEL1_ALG0_SINGLEBANDLEVELDETWOUTDISP3RDGEN1DECAY_FIXPT 0x0000071C
#define MOD_LEVEL1_ALG0_SINGLEBANDLEVELDETWOUTDISP3RDGEN1DECAY_VALUE SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.000217013888888889)
#define MOD_LEVEL1_ALG0_SINGLEBANDLEVELDETWOUTDISP3RDGEN1DECAY_TYPE SIGMASTUDIOTYPE_FIXPOINT

/* Module SW vol 1_2 - Single SW slew vol (adjustable)*/
#define MOD_SWVOL1_2_COUNT                             2
#define MOD_SWVOL1_2_DEVICE                            "ADAU1761"
#define MOD_SWVOL1_2_ALG0_TARGET_ADDR                  23
#define MOD_SWVOL1_2_ALG0_TARGET_FIXPT                 0x00800000
#define MOD_SWVOL1_2_ALG0_TARGET_VALUE                 SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_SWVOL1_2_ALG0_TARGET_TYPE                  SIGMASTUDIOTYPE_FIXPOINT
#define MOD_SWVOL1_2_ALG0_STEP_ADDR                    24
#define MOD_SWVOL1_2_ALG0_STEP_FIXPT                   0x00000800
#define MOD_SWVOL1_2_ALG0_STEP_VALUE                   SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.000244140625)
#define MOD_SWVOL1_2_ALG0_STEP_TYPE                    SIGMASTUDIOTYPE_FIXPOINT

/* Module Nx2-1_2 - Stereo Switch Nx2*/
#define MOD_NX2_1_2_COUNT                              3
#define MOD_NX2_1_2_DEVICE                             "ADAU1761"
#define MOD_NX2_1_2_ALG0_STAGE0_STEREOSWITCHNOSLEW_ADDR 45
#define MOD_NX2_1_2_ALG0_STAGE0_STEREOSWITCHNOSLEW_FIXPT 0x00000000
#define MOD_NX2_1_2_ALG0_STAGE0_STEREOSWITCHNOSLEW_VALUE SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0)
#define MOD_NX2_1_2_ALG0_STAGE0_STEREOSWITCHNOSLEW_TYPE SIGMASTUDIOTYPE_FIXPOINT
#define MOD_NX2_1_2_ALG0_STAGE1_STEREOSWITCHNOSLEW_ADDR 46
#define MOD_NX2_1_2_ALG0_STAGE1_STEREOSWITCHNOSLEW_FIXPT 0x00800000
#define MOD_NX2_1_2_ALG0_STAGE1_STEREOSWITCHNOSLEW_VALUE SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_NX2_1_2_ALG0_STAGE1_STEREOSWITCHNOSLEW_TYPE SIGMASTUDIOTYPE_FIXPOINT
#define MOD_NX2_1_2_ALG0_STAGE2_STEREOSWITCHNOSLEW_ADDR 47
#define MOD_NX2_1_2_ALG0_STAGE2_STEREOSWITCHNOSLEW_FIXPT 0x00000000
#define MOD_NX2_1_2_ALG0_STAGE2_STEREOSWITCHNOSLEW_VALUE SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0)
#define MOD_NX2_1_2_ALG0_STAGE2_STEREOSWITCHNOSLEW_TYPE SIGMASTUDIOTYPE_FIXPOINT

/* Module Nx2-1 - Stereo Switch Nx2*/
#define MOD_NX2_1_COUNT                                6
#define MOD_NX2_1_DEVICE                               "ADAU1761"
#define MOD_NX2_1_ALG0_STAGE0_STEREOSWITCHNOSLEW_ADDR  48
#define MOD_NX2_1_ALG0_STAGE0_STEREOSWITCHNOSLEW_FIXPT 0x00000000
#define MOD_NX2_1_ALG0_STAGE0_STEREOSWITCHNOSLEW_VALUE SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0)
#define MOD_NX2_1_ALG0_STAGE0_STEREOSWITCHNOSLEW_TYPE  SIGMASTUDIOTYPE_FIXPOINT
#define MOD_NX2_1_ALG0_STAGE1_STEREOSWITCHNOSLEW_ADDR  49
#define MOD_NX2_1_ALG0_STAGE1_STEREOSWITCHNOSLEW_FIXPT 0x00800000
#define MOD_NX2_1_ALG0_STAGE1_STEREOSWITCHNOSLEW_VALUE SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_NX2_1_ALG0_STAGE1_STEREOSWITCHNOSLEW_TYPE  SIGMASTUDIOTYPE_FIXPOINT
#define MOD_NX2_1_ALG0_STAGE2_STEREOSWITCHNOSLEW_ADDR  50
#define MOD_NX2_1_ALG0_STAGE2_STEREOSWITCHNOSLEW_FIXPT 0x00000000
#define MOD_NX2_1_ALG0_STAGE2_STEREOSWITCHNOSLEW_VALUE SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0)
#define MOD_NX2_1_ALG0_STAGE2_STEREOSWITCHNOSLEW_TYPE  SIGMASTUDIOTYPE_FIXPOINT
#define MOD_NX2_1_ALG0_STAGE3_STEREOSWITCHNOSLEW_ADDR  51
#define MOD_NX2_1_ALG0_STAGE3_STEREOSWITCHNOSLEW_FIXPT 0x00000000
#define MOD_NX2_1_ALG0_STAGE3_STEREOSWITCHNOSLEW_VALUE SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0)
#define MOD_NX2_1_ALG0_STAGE3_STEREOSWITCHNOSLEW_TYPE  SIGMASTUDIOTYPE_FIXPOINT
#define MOD_NX2_1_ALG0_STAGE4_STEREOSWITCHNOSLEW_ADDR  52
#define MOD_NX2_1_ALG0_STAGE4_STEREOSWITCHNOSLEW_FIXPT 0x00000000
#define MOD_NX2_1_ALG0_STAGE4_STEREOSWITCHNOSLEW_VALUE SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0)
#define MOD_NX2_1_ALG0_STAGE4_STEREOSWITCHNOSLEW_TYPE  SIGMASTUDIOTYPE_FIXPOINT
#define MOD_NX2_1_ALG0_STAGE5_STEREOSWITCHNOSLEW_ADDR  53
#define MOD_NX2_1_ALG0_STAGE5_STEREOSWITCHNOSLEW_FIXPT 0x00000000
#define MOD_NX2_1_ALG0_STAGE5_STEREOSWITCHNOSLEW_VALUE SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0)
#define MOD_NX2_1_ALG0_STAGE5_STEREOSWITCHNOSLEW_TYPE  SIGMASTUDIOTYPE_FIXPOINT

/* Module Mute1_3 - Mute*/
#define MOD_MUTE1_3_COUNT                              1
#define MOD_MUTE1_3_DEVICE                             "ADAU1761"
#define MOD_MUTE1_3_MUTENOSLEWALG3MUTE_ADDR            54
#define MOD_MUTE1_3_MUTENOSLEWALG3MUTE_FIXPT           0x00000000
#define MOD_MUTE1_3_MUTENOSLEWALG3MUTE_VALUE           SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0)
#define MOD_MUTE1_3_MUTENOSLEWALG3MUTE_TYPE            SIGMASTUDIOTYPE_FIXPOINT

/* Module Mute1_4 - Mute*/
#define MOD_MUTE1_4_COUNT                              1
#define MOD_MUTE1_4_DEVICE                             "ADAU1761"
#define MOD_MUTE1_4_MUTENOSLEWALG4MUTE_ADDR            55
#define MOD_MUTE1_4_MUTENOSLEWALG4MUTE_FIXPT           0x00000000
#define MOD_MUTE1_4_MUTENOSLEWALG4MUTE_VALUE           SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0)
#define MOD_MUTE1_4_MUTENOSLEWALG4MUTE_TYPE            SIGMASTUDIOTYPE_FIXPOINT

/* Module Mute1_5 - Mute*/
#define MOD_MUTE1_5_COUNT                              1
#define MOD_MUTE1_5_DEVICE                             "ADAU1761"
#define MOD_MUTE1_5_MUTENOSLEWALG5MUTE_ADDR            56
#define MOD_MUTE1_5_MUTENOSLEWALG5MUTE_FIXPT           0x00000000
#define MOD_MUTE1_5_MUTENOSLEWALG5MUTE_VALUE           SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0)
#define MOD_MUTE1_5_MUTENOSLEWALG5MUTE_TYPE            SIGMASTUDIOTYPE_FIXPOINT

/* Module Mute1_6 - Mute*/
#define MOD_MUTE1_6_COUNT                              1
#define MOD_MUTE1_6_DEVICE                             "ADAU1761"
#define MOD_MUTE1_6_MUTENOSLEWALG6MUTE_ADDR            57
#define MOD_MUTE1_6_MUTENOSLEWALG6MUTE_FIXPT           0x00000000
#define MOD_MUTE1_6_MUTENOSLEWALG6MUTE_VALUE           SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0)
#define MOD_MUTE1_6_MUTENOSLEWALG6MUTE_TYPE            SIGMASTUDIOTYPE_FIXPOINT

/* Module Mute1_7 - Mute*/
#define MOD_MUTE1_7_COUNT                              1
#define MOD_MUTE1_7_DEVICE                             "ADAU1761"
#define MOD_MUTE1_7_MUTENOSLEWALG7MUTE_ADDR            58
#define MOD_MUTE1_7_MUTENOSLEWALG7MUTE_FIXPT           0x00800000
#define MOD_MUTE1_7_MUTENOSLEWALG7MUTE_VALUE           SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_MUTE1_7_MUTENOSLEWALG7MUTE_TYPE            SIGMASTUDIOTYPE_FIXPOINT

/* Module Mute1_8 - Mute*/
#define MOD_MUTE1_8_COUNT                              1
#define MOD_MUTE1_8_DEVICE                             "ADAU1761"
#define MOD_MUTE1_8_MUTENOSLEWALG8MUTE_ADDR            59
#define MOD_MUTE1_8_MUTENOSLEWALG8MUTE_FIXPT           0x00800000
#define MOD_MUTE1_8_MUTENOSLEWALG8MUTE_VALUE           SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_MUTE1_8_MUTENOSLEWALG8MUTE_TYPE            SIGMASTUDIOTYPE_FIXPOINT

/* Module SW vol 1 - Single SW slew vol (adjustable)*/
#define MOD_SWVOL1_COUNT                               2
#define MOD_SWVOL1_DEVICE                              "ADAU1761"
#define MOD_SWVOL1_ALG0_TARGET_ADDR                    60
#define MOD_SWVOL1_ALG0_TARGET_FIXPT                   0x00800000
#define MOD_SWVOL1_ALG0_TARGET_VALUE                   SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_SWVOL1_ALG0_TARGET_TYPE                    SIGMASTUDIOTYPE_FIXPOINT
#define MOD_SWVOL1_ALG0_STEP_ADDR                      61
#define MOD_SWVOL1_ALG0_STEP_FIXPT                     0x00000800
#define MOD_SWVOL1_ALG0_STEP_VALUE                     SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.000244140625)
#define MOD_SWVOL1_ALG0_STEP_TYPE                      SIGMASTUDIOTYPE_FIXPOINT

/* Module Mute1_9 - Mute*/
#define MOD_MUTE1_9_COUNT                              1
#define MOD_MUTE1_9_DEVICE                             "ADAU1761"
#define MOD_MUTE1_9_MUTENOSLEWALG9MUTE_ADDR            62
#define MOD_MUTE1_9_MUTENOSLEWALG9MUTE_FIXPT           0x00800000
#define MOD_MUTE1_9_MUTENOSLEWALG9MUTE_VALUE           SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_MUTE1_9_MUTENOSLEWALG9MUTE_TYPE            SIGMASTUDIOTYPE_FIXPOINT

/* Module Mute1_10 - Mute*/
#define MOD_MUTE1_10_COUNT                             1
#define MOD_MUTE1_10_DEVICE                            "ADAU1761"
#define MOD_MUTE1_10_MUTENOSLEWALG10MUTE_ADDR          63
#define MOD_MUTE1_10_MUTENOSLEWALG10MUTE_FIXPT         0x00800000
#define MOD_MUTE1_10_MUTENOSLEWALG10MUTE_VALUE         SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_MUTE1_10_MUTENOSLEWALG10MUTE_TYPE          SIGMASTUDIOTYPE_FIXPOINT

#endif
