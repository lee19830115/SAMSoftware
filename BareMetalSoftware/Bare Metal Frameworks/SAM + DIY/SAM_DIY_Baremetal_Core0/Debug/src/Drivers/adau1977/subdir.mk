################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/Dan/Dropbox/Projects/ADI002\ -\ SS\ Frameworks/Software/New\ Frameworks/Drivers/adau1977/adi_adau1977.c 

SRC_OBJS += \
./src/Drivers/adau1977/adi_adau1977.o 

C_DEPS += \
./src/Drivers/adau1977/adi_adau1977.d 


# Each subdirectory must supply rules for building sources it contributes
src/Drivers/adau1977/adi_adau1977.o: C:/Users/Dan/Dropbox/Projects/ADI002\ -\ SS\ Frameworks/Software/New\ Frameworks/Drivers/adau1977/adi_adau1977.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore ARM Bare Metal C Compiler'
	arm-none-eabi-gcc -g -gdwarf-2 -ffunction-sections -fdata-sections -DCORE0 -D_DEBUG -I"C:\Users\Dan\Dropbox\Projects\ADI002 - SS Frameworks\Software\Testing\SAM Board Driver Testing\SAM_Driver_Test_Framework_Core0\system" -Wall -c -mproc=ADSP-SC589 -msi-revision=1.0 -MMD -MP -MF"src/Drivers/adau1977/adi_adau1977.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


