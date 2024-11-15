



#include "test_file.h"



void test_file()
{
	printf("test_file(): running...\r\n");
//	xTaskNotifyWait(ULONG_MAX, ULONG_MAX, NULL, portMAX_DELAY);
	char* fileName = "test.txt";
	fileOs.name = fileName;
	uint8_t r = 0;
	if((r = file_open(&fileOs)))
		printf("error opening file %s: r = %d\r\n", fileOs.name, r);
	else
		printf("success opening file %s: r = %d\r\n", fileOs.name, r);
}





