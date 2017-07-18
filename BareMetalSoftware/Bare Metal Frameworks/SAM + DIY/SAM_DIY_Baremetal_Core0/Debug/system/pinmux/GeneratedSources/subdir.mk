################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/pinmux/GeneratedSources/pinmux_config.c 

SRC_OBJS += \
./system/pinmux/GeneratedSources/pinmux_config.o 

C_DEPS += \
./system/pinmux/GeneratedSources/pinmux_config.d 


# Each subdirectory must supply rules for building sources it contributes
system/pinmux/GeneratedSources/pinmux_config.o: ../system/pinmux/GeneratedSources/pinmux_config.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore ARM Bare Metal C Compiler'
	arm-none-eabi-gcc -g -gdwarf-2 -ffunction-sections -fdata-sections -DAUDIO_BLOCK_SIZE=32 -DCORE0 -D_DEBUG -I"C:\Users\Dan\Dropbox\Projects\ADI002 - SS Frameworks\Software\New Frameworks\Bare Metal Frameworks\SAM + DIY\SAM_DIY_Baremetal_Core0\system" -Wall -c -mproc=ADSP-SC589 -msi-revision=1.0 -MMD -MP -MF"system/pinmux/GeneratedSources/pinmux_config.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


