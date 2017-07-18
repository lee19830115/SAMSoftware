################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Main_ARM0.c \
../src/Startup_Code_Core0.c 

SRC_OBJS += \
./src/Main_ARM0.o \
./src/Startup_Code_Core0.o 

C_DEPS += \
./src/Main_ARM0.d \
./src/Startup_Code_Core0.d 


# Each subdirectory must supply rules for building sources it contributes
src/Main_ARM0.o: ../src/Main_ARM0.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore ARM Bare Metal C Compiler'
	arm-none-eabi-gcc -O2 -g -gdwarf-2 -ffunction-sections -fdata-sections -DCORE0 -DAUDIO_BLOCK_SIZE=32 -DNDEBUG -I"C:\Users\Dan\Dropbox\Projects\ADI002 - SS Frameworks\Software\New Frameworks\Bare Metal Frameworks\SAM + DIY\SAM_DIY_Baremetal_Core0\system" -Wall -c -mproc=ADSP-SC589 -msi-revision=1.0 -MMD -MP -MF"src/Main_ARM0.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Startup_Code_Core0.o: ../src/Startup_Code_Core0.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore ARM Bare Metal C Compiler'
	arm-none-eabi-gcc -O2 -g -gdwarf-2 -ffunction-sections -fdata-sections -DCORE0 -DAUDIO_BLOCK_SIZE=32 -DNDEBUG -I"C:\Users\Dan\Dropbox\Projects\ADI002 - SS Frameworks\Software\New Frameworks\Bare Metal Frameworks\SAM + DIY\SAM_DIY_Baremetal_Core0\system" -Wall -c -mproc=ADSP-SC589 -msi-revision=1.0 -MMD -MP -MF"src/Startup_Code_Core0.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


