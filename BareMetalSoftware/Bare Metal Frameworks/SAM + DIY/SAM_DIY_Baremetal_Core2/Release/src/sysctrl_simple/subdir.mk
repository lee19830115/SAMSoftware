################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/Dan/Dropbox/Projects/ADI002\ -\ SS\ Frameworks/Software/New\ Frameworks/Simple_Drivers/sysctrl_simple/simple_sysctrl.c 

SRC_OBJS += \
./src/sysctrl_simple/simple_sysctrl.doj 

C_DEPS += \
./src/sysctrl_simple/simple_sysctrl.d 


# Each subdirectory must supply rules for building sources it contributes
src/sysctrl_simple/simple_sysctrl.doj: C:/Users/Dan/Dropbox/Projects/ADI002\ -\ SS\ Frameworks/Software/New\ Frameworks/Simple_Drivers/sysctrl_simple/simple_sysctrl.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k.exe -c -file-attr ProjectName="SAM_DIY_Baremetal_Core2" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -O -Ov100 -DCORE2 -DNDEBUG -I"C:\Users\Dan\Dropbox\Projects\ADI002 - SS Frameworks\Software\New Frameworks\Bare Metal Frameworks\SAM + DIY\SAM_DIY_Baremetal_Core2\system" -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/sysctrl_simple/simple_sysctrl.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


