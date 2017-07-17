################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/Dan/Dropbox/Projects/ADI002\ -\ SS\ Frameworks/Software/New\ Frameworks/Simple_Drivers/ad2425w/adi_ad2425w.c 

SRC_OBJS += \
./src/Simple_Drivers/ad2425w/adi_ad2425w.o 

C_DEPS += \
./src/Simple_Drivers/ad2425w/adi_ad2425w.d 


# Each subdirectory must supply rules for building sources it contributes
src/Simple_Drivers/ad2425w/adi_ad2425w.o: C:/Users/Dan/Dropbox/Projects/ADI002\ -\ SS\ Frameworks/Software/New\ Frameworks/Simple_Drivers/ad2425w/adi_ad2425w.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore ARM Bare Metal C Compiler'
	arm-none-eabi-gcc -g -gdwarf-2 -ffunction-sections -fdata-sections -DCORE0 -D_DEBUG -I"C:\Users\Dan\Dropbox\Projects\ADI002 - SS Frameworks\Software\New Frameworks\Testing\Automotive Board Driver Testing\Automotive_Driver_Test_Framework_Core0\system" -Wall -c -mproc=ADSP-SC589 -msi-revision=1.0 -MMD -MP -MF"src/Simple_Drivers/ad2425w/adi_ad2425w.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


