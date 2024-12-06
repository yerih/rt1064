




#include "test_ram.h"


#ifndef SNARE_RAM
__NOINIT(RAM4) int16_t snareRam[TEST_RAM_SIZE];
#endif
//__NOINIT(RAM5) int16_t snareRam[TEST_RAM_SIZE];


void test_ram(int16_t* ram)
{
	uint32_t i;
	bool result = false;
	printf("test_ram(): testing RAM...\r\n");
	snareRam[0] = 55;
//	printf("ram = %lu\r\n", snareRam[0]);
	for(i = 0; i < TEST_RAM_SIZE;i++)
		snareRam[i] = 55;

	for(i = 0; i < TEST_RAM_SIZE;i++)
	{
		if(snareRam[i] != 55)
		{
			printf("test_ram(): failed in index = %lu\r\n", i);
			result = true;
			break;
		}
	}
	printf("The testing RAM result is: %s\r\n", result ? "failed":"Successful");
}




