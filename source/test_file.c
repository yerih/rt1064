



#include "test_file.h"



void test_file()
{
	printf("test_file(): running...\r\n");

	sprintf(fileOs.name, "0:/test.txt");
	uint8_t r = 0;
	if((r = file_open(&fileOs)))
		printf("error opening file: r = %d\r\n", r);
	else
		printf("success opening file: r = %d\r\n", r);
}





