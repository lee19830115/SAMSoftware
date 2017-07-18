################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
C:/Users/Dan/Dropbox/Projects/ADI002\ -\ SS\ Frameworks/Software/New\ Frameworks/Simple_Drivers/Wiring_Sharc/WiringSharc.cpp 

SRC_OBJS += \
./src/Wiring_Sharc/WiringSharc.doj 

CPP_DEPS += \
./src/Wiring_Sharc/WiringSharc.d 


# Each subdirectory must supply rules for building sources it contributes
src/Wiring_Sharc/WiringSharc.doj: C:/Users/Dan/Dropbox/Projects/ADI002\ -\ SS\ Frameworks/Software/New\ Frameworks/Simple_Drivers/Wiring_Sharc/WiringSharc.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k.exe -c -file-attr ProjectName="SAM_DIY_Baremetal_Core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -g -DCORE1 -D_DEBUG -I"C:\Users\Dan\Dropbox\Projects\ADI002 - SS Frameworks\Software\New Frameworks\Bare Metal Frameworks\SAM + DIY\SAM_DIY_Baremetal_Core1\system" -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/Wiring_Sharc/WiringSharc.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


