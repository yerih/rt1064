################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../sdmmc/osa/fsl_sdmmc_osa.c 

C_DEPS += \
./sdmmc/osa/fsl_sdmmc_osa.d 

OBJS += \
./sdmmc/osa/fsl_sdmmc_osa.o 


# Each subdirectory must supply rules for building sources it contributes
sdmmc/osa/%.o: ../sdmmc/osa/%.c sdmmc/osa/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -DCPU_MIMXRT1064DVL6A -DCPU_MIMXRT1064DVL6A_cm7 -DSDK_OS_BAREMETAL -DXIP_EXTERNAL_FLASH=1 -DXIP_BOOT_HEADER_ENABLE=1 -DSERIAL_PORT_TYPE_UART=1 -DSDK_DEBUGCONSOLE=0 -DPRINTF_FLOAT_ENABLE=1 -DCR_PRINTF_CHAR -DSDK_OS_FREE_RTOS -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -D__REDLIB__ -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\device" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\utilities" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\component\serial_manager" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\component\uart" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\drivers" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\CMSIS" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\xip" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\component\lists" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\freertos\freertos-kernel\include" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\freertos\freertos-kernel\portable\GCC\ARM_CM4F" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\sdmmc\osa" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\sdmmc\host" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\component\osa" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\sdmmc\inc" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\component\mem_manager" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\board" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\source" -I"C:\Personal projects\Edrum\nxp\rt1064\testing_new_ide_version\MIMXRT1064_Project\sdmmc\template\usdhc" -O0 -fno-common -g3 -gdwarf-4 -Wall -c -ffunction-sections -fdata-sections -fno-builtin -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m7 -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-sdmmc-2f-osa

clean-sdmmc-2f-osa:
	-$(RM) ./sdmmc/osa/fsl_sdmmc_osa.d ./sdmmc/osa/fsl_sdmmc_osa.o

.PHONY: clean-sdmmc-2f-osa

