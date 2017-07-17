################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Main_SHARC2.c \
../src/Startup_Code_Core2.c 

SRC_OBJS += \
./src/Main_SHARC2.doj \
./src/Startup_Code_Core2.doj 

C_DEPS += \
./src/Main_SHARC2.d \
./src/Startup_Code_Core2.d 


# Each subdirectory must supply rules for building sources it contributes
src/Main_SHARC2.doj: ../src/Main_SHARC2.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k.exe -c -file-attr ProjectName="SAM_Automotive_Baremetal_Core2" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -g -DCORE2 -DAUDIO_BLOCK_SIZE=32 -D_DEBUG -I"C:\Users\Dan\Dropbox\Projects\ADI002 - SS Frameworks\Software\New Frameworks\Bare Metal Frameworks\SAM + Automotive Board\SAM_Automotive_Baremetal_Core2\system" -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/Main_SHARC2.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Startup_Code_Core2.doj: ../src/Startup_Code_Core2.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k.exe -c -file-attr ProjectName="SAM_Automotive_Baremetal_Core2" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -g -DCORE2 -DAUDIO_BLOCK_SIZE=32 -D_DEBUG -I"C:\Users\Dan\Dropbox\Projects\ADI002 - SS Frameworks\Software\New Frameworks\Bare Metal Frameworks\SAM + Automotive Board\SAM_Automotive_Baremetal_Core2\system" -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/Startup_Code_Core2.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


