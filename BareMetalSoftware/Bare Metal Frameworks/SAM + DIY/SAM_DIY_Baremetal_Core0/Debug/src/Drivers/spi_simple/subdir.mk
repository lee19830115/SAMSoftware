################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/Dan/Dropbox/Projects/ADI002\ -\ SS\ Frameworks/Software/New\ Frameworks/Drivers/spi_simple/spi_simple.c 

SRC_OBJS += \
./src/Drivers/spi_simple/spi_simple.o 

C_DEPS += \
./src/Drivers/spi_simple/spi_simple.d 


# Each subdirectory must supply rules for building sources it contributes
src/Drivers/spi_simple/spi_simple.o: C:/Users/Dan/Dropbox/Projects/ADI002\ -\ SS\ Frameworks/Software/New\ Frameworks/Drivers/spi_simple/spi_simple.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore ARM Bare Metal C Compiler'
	arm-none-eabi-gcc -g -gdwarf-2 -ffunction-sections -fdata-sections -DCORE0 -D_DEBUG -I"C:\Users\Dan\Dropbox\Projects\ADI002 - SS Frameworks\Software\Testing\SAM Board Driver Testing\SAM_Driver_Test_Framework_Core0\system" -Wall -c -mproc=ADSP-SC589 -msi-revision=1.0 -MMD -MP -MF"src/Drivers/spi_simple/spi_simple.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


