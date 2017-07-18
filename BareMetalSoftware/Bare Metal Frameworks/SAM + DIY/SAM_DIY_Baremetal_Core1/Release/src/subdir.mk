################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/ADAU1761_DMA_Framework.c \
../src/Main_SHARC1.c \
../src/Startup_Code_Core1.c 

SRC_OBJS += \
./src/ADAU1761_DMA_Framework.doj \
./src/Main_SHARC1.doj \
./src/Startup_Code_Core1.doj 

C_DEPS += \
./src/ADAU1761_DMA_Framework.d \
./src/Main_SHARC1.d \
./src/Startup_Code_Core1.d 


# Each subdirectory must supply rules for building sources it contributes
src/ADAU1761_DMA_Framework.doj: ../src/ADAU1761_DMA_Framework.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k.exe -c -file-attr ProjectName="SAM_DIY_Baremetal_Core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -O -Ov100 -g -DCORE1 -DAUDIO_BLOCK_SIZE=32 -DNDEBUG -I"C:\Users\Dan\Dropbox\Projects\ADI002 - SS Frameworks\Software\New Frameworks\Bare Metal Frameworks\SAM + DIY\SAM_DIY_Baremetal_Core1\system" -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/ADAU1761_DMA_Framework.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Main_SHARC1.doj: ../src/Main_SHARC1.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k.exe -c -file-attr ProjectName="SAM_DIY_Baremetal_Core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -O -Ov100 -g -DCORE1 -DAUDIO_BLOCK_SIZE=32 -DNDEBUG -I"C:\Users\Dan\Dropbox\Projects\ADI002 - SS Frameworks\Software\New Frameworks\Bare Metal Frameworks\SAM + DIY\SAM_DIY_Baremetal_Core1\system" -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/Main_SHARC1.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Startup_Code_Core1.doj: ../src/Startup_Code_Core1.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k.exe -c -file-attr ProjectName="SAM_DIY_Baremetal_Core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -O -Ov100 -g -DCORE1 -DAUDIO_BLOCK_SIZE=32 -DNDEBUG -I"C:\Users\Dan\Dropbox\Projects\ADI002 - SS Frameworks\Software\New Frameworks\Bare Metal Frameworks\SAM + DIY\SAM_DIY_Baremetal_Core1\system" -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/Startup_Code_Core1.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


