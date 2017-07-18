################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/Dan/Dropbox/Projects/ADI002\ -\ SS\ Frameworks/Software/New\ Frameworks/Simple_Drivers/sysctrl_simple/simple_sysctrl.c 

SRC_OBJS += \
./src/simple_sysctrl/simple_sysctrl.doj 

C_DEPS += \
./src/simple_sysctrl/simple_sysctrl.d 


# Each subdirectory must supply rules for building sources it contributes
src/simple_sysctrl/simple_sysctrl.doj: C:/Users/Dan/Dropbox/Projects/ADI002\ -\ SS\ Frameworks/Software/New\ Frameworks/Simple_Drivers/sysctrl_simple/simple_sysctrl.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k.exe -c -file-attr ProjectName="SAM_DIY_Baremetal_Core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -g -DCORE1 -D__DIY_DAUGHTER_BOARD__ -DAUDIO_BLOCK_SIZE=32 -D_DEBUG -I"C:\Users\Dan\Dropbox\Projects\ADI002 - SS Frameworks\Software\New Frameworks\Bare Metal Frameworks\SAM + DIY\SAM_DIY_Baremetal_Core1\system" -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/simple_sysctrl/simple_sysctrl.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


