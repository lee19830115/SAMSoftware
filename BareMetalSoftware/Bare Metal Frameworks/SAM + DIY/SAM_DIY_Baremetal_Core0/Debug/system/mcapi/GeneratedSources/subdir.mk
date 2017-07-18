################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/mcapi/GeneratedSources/mcapi_config.c 

SRC_OBJS += \
./system/mcapi/GeneratedSources/mcapi_config.o 

C_DEPS += \
./system/mcapi/GeneratedSources/mcapi_config.d 


# Each subdirectory must supply rules for building sources it contributes
system/mcapi/GeneratedSources/mcapi_config.o: ../system/mcapi/GeneratedSources/mcapi_config.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore ARM Bare Metal C Compiler'
	arm-none-eabi-gcc -g -gdwarf-2 -ffunction-sections -fdata-sections -DCORE0 -D_DEBUG -DADI_MCAPI -I"C:\Users\Dan\Dropbox\Projects\ADI002 - SS Frameworks\Software\Testing\SAM Board Driver Testing\SAM_Driver_Test_Framework_Core0\system" -Wall -c -mproc=ADSP-SC589 -msi-revision=1.0 -MMD -MP -MF"system/mcapi/GeneratedSources/mcapi_config.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


