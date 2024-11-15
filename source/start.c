

#include "start.h"

static void start_mainThread(void* arg);

TaskHandle_t startTaskHandle;


void start_initModules(void)
{
	printf("Initializing modules...\r\n");
//	for(int i = 0; i < AUDIO_THRD_NUM; i++)
//		audioEngine.thrds[i] = NULL;
    logApp_init();
    sd_os_init();
//    sai_os_init();
//    button_init();
}

void start_main(void)
{
	printf("creating main task...\r\n");
    if (pdPASS !=
        xTaskCreate(start_mainThread, "main thread", 2048, NULL, (configMAX_PRIORITIES - 5U), &startTaskHandle))
    {
    	printf("error creating start_mainThread task\r\n");
        return;
    }

}


static void start_mainThread(void* arg)
{
	printf("task waiting...\r\n");
//	xTaskNotifyWait(ULONG_MAX, ULONG_MAX, NULL, portMAX_DELAY);
	printf("main thread working\r\n");
//	test_playBullet();
//	audio_play("bullet.wav");

//	adc_os_init();
//	audio_initRamBuffers();
//	pad_loadDefaultPads();
//	logApp_init();

	OSA_TimeDelay(200);
//	audioEng_init();
	OSA_TimeDelay(200);

	test_file();
	test_led();

//	audio_play("bullet.wav");
//	audio_playNoThrd("bullet.wav");
//	test_playSnareSequence();

//	test_adc();

	while(1) __asm volatile("nop");
	vTaskDelete(NULL);
}
