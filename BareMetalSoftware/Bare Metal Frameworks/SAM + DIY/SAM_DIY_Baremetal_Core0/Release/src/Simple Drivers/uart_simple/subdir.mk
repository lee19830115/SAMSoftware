################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/Dan/Dropbox/Projects/ADI002\ -\ SS\ Frameworks/Software/New\ Frameworks/Simple_Drivers/uart_simple/uart_simple.c 

SRC_OBJS += \
./src/Simple\ Drivers/uart_simple/uart_simple.o 

C_DEPS += \
./src/Simple\ Drivers/uart_simple/uart_simple.d 


# Each subdirectory must supply rules for building sources it contributes
src/Simple\ Drivers/uart_simple/uart_simple.o: C:/Users/Dan/Dropbox/Projects/ADI002\ -\ SS\ Frameworks/Software/New\ Frameworks/Simple_Drivers/uart_simple/uart_simple.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore ARM Bare Metal C Compiler'
	arm-none-eabi-gcc -O2 -g -gdwarf-2 -ffunction-sections -fdata-sections -DCORE0 -DAUDIO_BLOCK_SIZE=32 -DNDEBUG -I"C:\Users\Dan\Dropbox\Projects\ADI002 - SS Frameworks\Software\New Frameworks\Bare Metal Frameworks\SAM + DIY\SAM_DIY_Baremetal_Core0\system" -Wall -c -mproc=ADSP-SC589 -msi-revision=1.0 -MMD -MP -MF"src/Simple Drivers/uart_simple/uart_simple.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


