################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
LDF_SRCS += \
../system/startup_ldf/app.ldf 

S_SRCS += \
../system/startup_ldf/app_IVT.s \
../system/startup_ldf/app_startup.s 

C_SRCS += \
../system/startup_ldf/app_heaptab.c 

SRC_OBJS += \
./system/startup_ldf/app_IVT.doj \
./system/startup_ldf/app_heaptab.doj \
./system/startup_ldf/app_startup.doj 

S_DEPS += \
./system/startup_ldf/app_IVT.d \
./system/startup_ldf/app_startup.d 

C_DEPS += \
./system/startup_ldf/app_heaptab.d 


# Each subdirectory must supply rules for building sources it contributes
system/startup_ldf/app_IVT.doj: ../system/startup_ldf/app_IVT.s
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC Assembler'
	easm21k.exe -file-attr ProjectName="SAM_Automotive_Baremetal_Core1" -proc ADSP-SC589 -si-revision 1.0 -g -DCORE1 -D_DEBUG -i"C:\Users\Dan\Dropbox\Projects\ADI002 - SS Frameworks\Software\New Frameworks\Bare Metal Frameworks\SAM + Automotive Board\SAM_Automotive_Baremetal_Core1\system" -swc -char-size-8 -gnu-style-dependencies -MM -Mo "system/startup_ldf/app_IVT.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

system/startup_ldf/app_heaptab.doj: ../system/startup_ldf/app_heaptab.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k.exe -c -file-attr ProjectName="SAM_Automotive_Baremetal_Core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -g -DCORE1 -DAUDIO_BLOCK_SIZE=32 -D_DEBUG -I"C:\Users\Dan\Dropbox\Projects\ADI002 - SS Frameworks\Software\New Frameworks\Bare Metal Frameworks\SAM + Automotive Board\SAM_Automotive_Baremetal_Core1\system" -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "system/startup_ldf/app_heaptab.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

system/startup_ldf/app_startup.doj: ../system/startup_ldf/app_startup.s
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC Assembler'
	easm21k.exe -file-attr ProjectName="SAM_Automotive_Baremetal_Core1" -proc ADSP-SC589 -si-revision 1.0 -g -DCORE1 -D_DEBUG -i"C:\Users\Dan\Dropbox\Projects\ADI002 - SS Frameworks\Software\New Frameworks\Bare Metal Frameworks\SAM + Automotive Board\SAM_Automotive_Baremetal_Core1\system" -swc -char-size-8 -gnu-style-dependencies -MM -Mo "system/startup_ldf/app_startup.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


