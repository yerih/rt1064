//
//
//
//#include "sd_os.h"
//
//
//
//static SemaphoreHandle_t s_CardDetectSemaphore = NULL;
//
//volatile bool s_cardInserted     = false;
//volatile bool s_cardInsertStatus = false;
//FATFS g_fileSystem;
//
//FIL g_fileObject1;  /* File object */
//TaskHandle_t fileAccessTaskHandle1;
//TaskHandle_t fileAccessForPad;
//
//
//
//void sd_os_init(void)
//{
//	printf("Creating card detect task...\r\n");
//
//    if (pdPASS !=
//        xTaskCreate(CardDetectTask, "CardDetectTask", 2048, NULL, CARDDETECT_TASK_PRIORITY, NULL))
//    {
//    	printf("error creating card detect task\r\n");
//        return;
//    }
//}
//
//void CardDetectTask(void *pvParameters)
//{
//	printf("CardDetectTask(): running...\r\n");
//    s_CardDetectSemaphore = xSemaphoreCreateBinary();
//
//    BOARD_SD_Config(&g_sd, sd_os_cardDetectTask, BOARD_SDMMC_SD_HOST_IRQ_PRIORITY, NULL);
//
//    printf("CardDetectTask(): board_sd_config() is executed\r\n");
//    /* SD host init function */
//    if (SD_HostInit(&g_sd) == kStatus_Success)
//    {
//        while (true)
//        {
//            /* take card detect semaphore */
//            if (xSemaphoreTake(s_CardDetectSemaphore, portMAX_DELAY) == pdTRUE)
//            {
//            	printf("CardDetectTask(): semaph is taken\r\n");
//                if (s_cardInserted != s_cardInsertStatus)
//                {
//                    s_cardInserted = s_cardInsertStatus;
//
//                    if (s_cardInserted)
//                    {
//                        /* power off card */
//                        SD_SetCardPower(&g_sd, false);
//                        /* power on the card */
//                        SD_SetCardPower(&g_sd, true);
//                        /* make file system */
//                        if (sd_os_mountDrive() != kStatus_Success)
//                        {
//                        	PRINTF("\r\nSDCard is not mounted.\r\n");
//                            continue;
//                        }
//                        xTaskNotifyGive(fileAccessTaskHandle1);
//                    }
//                }
//
//                if (!s_cardInserted)
//                {
//                    PRINTF("\r\nPlease insert a card into board.\r\n");
//                }
//            }
//        }
//    }
//    else
//    {
//        PRINTF("\r\nSD host init fail\r\n");
//    }
//
//    vTaskDelete(NULL);
//}
//
//
//status_t sd_os_mountDrive(void)
//{
//    FRESULT error;
//    const TCHAR driverNumberBuffer[3U] = {SDDISK + '0', ':', '/'};
////    const TCHAR driverNumberBuffer[3U] = { '0', ':', '/'};
//    BYTE work[FF_MAX_SS];
//
//    printf("mounting SD in driver = %s...\r\n", driverNumberBuffer);
//    error = f_mount(&g_fileSystem, driverNumberBuffer, 0U);
//    if (error)
//    {
//        PRINTF("Mount volume failed. error: %d\r\n", error);
//        return kStatus_Fail;
//    }
//
//#if (FF_FS_RPATH >= 2U)
//    error = f_chdrive((char const *)&driverNumberBuffer[0U]);
//    if (error)
//    {
//        PRINTF("Change drive failed.\r\n");
//        return kStatus_Fail;
//    }
//#endif
//
//
//
//    return kStatus_Success;
//}
//
//
//void sd_os_cardDetectTask(bool isInserted, void *userData)
//{
//    s_cardInsertStatus = isInserted;
//    xSemaphoreGiveFromISR(s_CardDetectSemaphore, NULL);
//}
//
//
//
