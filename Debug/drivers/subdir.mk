################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../drivers/fsl_cache.c \
../drivers/fsl_clock.c \
../drivers/fsl_common.c \
../drivers/fsl_common_arm.c \
../drivers/fsl_dmamux.c \
../drivers/fsl_edma.c \
../drivers/fsl_gpio.c \
../drivers/fsl_lpuart.c \
../drivers/fsl_usdhc.c 

C_DEPS += \
./drivers/fsl_cache.d \
./drivers/fsl_clock.d \
./drivers/fsl_common.d \
./drivers/fsl_common_arm.d \
./drivers/fsl_dmamux.d \
./drivers/fsl_edma.d \
./drivers/fsl_gpio.d \
./drivers/fsl_lpuart.d \
./drivers/fsl_usdhc.d 

OBJS += \
./drivers/fsl_cache.o \
./drivers/fsl_clock.o \
./drivers/fsl_common.o \
./drivers/fsl_common_arm.o \
./drivers/fsl_dmamux.o \
./drivers/fsl_edma.o \
./drivers/fsl_gpio.o \
./drivers/fsl_lpuart.o \
./drivers/fsl_usdhc.o 


# Each subdirectory must supply rules for building sources it contributes
drivers/%.o: ../drivers/%.c drivers/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -DCPU_MIMXRT1064DVL6A -DCPU_MIMXRT1064DVL6A_cm7 -DSDK_OS_BAREMETAL -DXIP_EXTERNAL_FLASH=1 -DXIP_BOOT_HEADER_ENABLE=1 -DSERIAL_PORT_TYPE_UART=1 -DSDK_DEBUGCONSOLE=0 -DSDK_DEBUGCONSOLE_UART -DSDK_OS_FREE_RTOS -DSD_ENABLED -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -D__NEWLIB__ -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\device" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\utilities" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\component\serial_manager" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\component\uart" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\drivers" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\CMSIS" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\xip" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\component\lists" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\freertos\freertos-kernel\include" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\freertos\freertos-kernel\portable\GCC\ARM_CM4F" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\sdmmc\host" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\fatfs\source\fsl_sd_disk" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\component\osa" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\sdmmc\inc" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\fatfs\source" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\sdmmc\osa" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\board" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\source" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\sdmmc\template\usdhc" -O0 -fno-common -g3 -gdwarf-4 -Wall -c -ffunction-sections -fdata-sections -fno-builtin -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m7 -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -D__NEWLIB__ -fstack-usage -specs=nano.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-drivers

clean-drivers:
	-$(RM) ./drivers/fsl_cache.d ./drivers/fsl_cache.o ./drivers/fsl_clock.d ./drivers/fsl_clock.o ./drivers/fsl_common.d ./drivers/fsl_common.o ./drivers/fsl_common_arm.d ./drivers/fsl_common_arm.o ./drivers/fsl_dmamux.d ./drivers/fsl_dmamux.o ./drivers/fsl_edma.d ./drivers/fsl_edma.o ./drivers/fsl_gpio.d ./drivers/fsl_gpio.o ./drivers/fsl_lpuart.d ./drivers/fsl_lpuart.o ./drivers/fsl_usdhc.d ./drivers/fsl_usdhc.o

.PHONY: clean-drivers

