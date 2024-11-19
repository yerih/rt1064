


#include "test_ram.h"


#ifdef AUDIO_MIX_H_
int16_t* ramVar = snareRam;
#elif
__NOINIT(RAM4) int16_t ramVar[PAD_SIZE_16BIT];
#endif
//__NOINIT(RAM4) int16_t snareRam[PAD_SIZE_16BIT];

void test_ram()
{
	printf("test_ram(): running...\r\n");
	printf("Ram memset in value = -1\r\n");
	memset(ramVar, -1, sizeof(PAD_SIZE_16BIT));
	uint32_t i;
	for(i = 0; i < PAD_SIZE_16BIT; i++)
	{
		printf("ramVar[%lu] = \r\n", i, ramVar[i]);
	}
	printf("test_ram(): finished. i = %lu\r\n", i);
}






