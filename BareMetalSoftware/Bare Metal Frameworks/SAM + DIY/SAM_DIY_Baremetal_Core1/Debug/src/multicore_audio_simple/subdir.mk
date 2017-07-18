################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/Dan/Dropbox/Projects/ADI002\ -\ SS\ Frameworks/Software/New\ Frameworks/Bare\ Metal\ Frameworks/SAM\ +\ DIY/multicore_audio_simple/multicore_audio_simple.c 

SRC_OBJS += \
./src/multicore_audio_simple/multicore_audio_simple.doj 

C_DEPS += \
./src/multicore_audio_simple/multicore_audio_simple.d 


# Each subdirectory must supply rules for building sources it contributes
src/multicore_audio_simple/multicore_audio_simple.doj: C:/Users/Dan/Dropbox/Projects/ADI002\ -\ SS\ Frameworks/Software/New\ Frameworks/Bare\ Metal\ Frameworks/SAM\ +\ DIY/multicore_audio_simple/multicore_audio_simple.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k.exe -c -file-attr ProjectName="SAM_DIY_Baremetal_Core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -g -DCORE1 -DAUDIO_BLOCK_SIZE=32 -D_DEBUG -I"C:\Users\Dan\Dropbox\Projects\ADI002 - SS Frameworks\Software\New Frameworks\Bare Metal Frameworks\SAM + DIY\SAM_DIY_Baremetal_Core1\system" -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/multicore_audio_simple/multicore_audio_simple.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


