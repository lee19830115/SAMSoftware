################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/Dan/Dropbox/Projects/ADI002\ -\ SS\ Frameworks/Software/New\ Frameworks/Simple_Drivers/sysctrl_simple/simple_sysctrl.c 

SRC_OBJS += \
./src/Simple_Drivers/sysctrl_simple/simple_sysctrl.o 

C_DEPS += \
./src/Simple_Drivers/sysctrl_simple/simple_sysctrl.d 


# Each subdirectory must supply rules for building sources it contributes
src/Simple_Drivers/sysctrl_simple/simple_sysctrl.o: C:/Users/Dan/Dropbox/Projects/ADI002\ -\ SS\ Frameworks/Software/New\ Frameworks/Simple_Drivers/sysctrl_simple/simple_sysctrl.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore ARM Bare Metal C Compiler'
	arm-none-eabi-gcc -O2 -g -gdwarf-2 -ffunction-sections -fdata-sections -DNDEBUG -DAUDIO_BLOCK_SIZE=32 -DCORE0 -I"C:\Users\Dan\Dropbox\Projects\ADI002 - SS Frameworks\Software\New Frameworks\Bare Metal Frameworks\SAM + Automotive Board\SAM_Automotive_Baremetal_Core0\system" -Wall -c -mproc=ADSP-SC589 -msi-revision=1.0 -MMD -MP -MF"src/Simple_Drivers/sysctrl_simple/simple_sysctrl.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


