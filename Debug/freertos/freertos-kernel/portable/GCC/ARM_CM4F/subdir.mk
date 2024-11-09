################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../freertos/freertos-kernel/portable/GCC/ARM_CM4F/port.c 

C_DEPS += \
./freertos/freertos-kernel/portable/GCC/ARM_CM4F/port.d 

OBJS += \
./freertos/freertos-kernel/portable/GCC/ARM_CM4F/port.o 


# Each subdirectory must supply rules for building sources it contributes
freertos/freertos-kernel/portable/GCC/ARM_CM4F/%.o: ../freertos/freertos-kernel/portable/GCC/ARM_CM4F/%.c freertos/freertos-kernel/portable/GCC/ARM_CM4F/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -DCPU_MIMXRT1064DVL6A -DCPU_MIMXRT1064DVL6A_cm7 -DSDK_OS_BAREMETAL -DXIP_EXTERNAL_FLASH=1 -DXIP_BOOT_HEADER_ENABLE=1 -DSERIAL_PORT_TYPE_UART=1 -DSDK_DEBUGCONSOLE=0 -DSDK_DEBUGCONSOLE_UART -DSDK_OS_FREE_RTOS -DSD_ENABLED -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -D__NEWLIB__ -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\device" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\utilities" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\component\serial_manager" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\component\uart" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\drivers" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\CMSIS" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\xip" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\component\lists" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\freertos\freertos-kernel\include" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\freertos\freertos-kernel\portable\GCC\ARM_CM4F" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\sdmmc\host" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\fatfs\source\fsl_sd_disk" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\component\osa" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\sdmmc\inc" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\fatfs\source" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\sdmmc\osa" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\board" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\source" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\sdmmc\template\usdhc" -O0 -fno-common -g3 -gdwarf-4 -Wall -c -ffunction-sections -fdata-sections -fno-builtin -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m7 -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -D__NEWLIB__ -fstack-usage -specs=nano.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-freertos-2f-freertos-2d-kernel-2f-portable-2f-GCC-2f-ARM_CM4F

clean-freertos-2f-freertos-2d-kernel-2f-portable-2f-GCC-2f-ARM_CM4F:
	-$(RM) ./freertos/freertos-kernel/portable/GCC/ARM_CM4F/port.d ./freertos/freertos-kernel/portable/GCC/ARM_CM4F/port.o

.PHONY: clean-freertos-2f-freertos-2d-kernel-2f-portable-2f-GCC-2f-ARM_CM4F

