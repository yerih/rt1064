


#include <cr_section_macros.h>
#include "pad.h"



void pad_loadDefaultPads(void)
{
	printf("pad thrd load default pads\r\n");
	uint8_t r;
	wav_header_t wav;
	uint32_t br;
	char aux[50];

	memset(aux, 0, sizeof(aux));
	sprintf(aux, "%s%s", PAD_DIR_SNARE, PAD_SNARE_STR);

	fileOs.name = (char*)pvPortMalloc(strlen(aux)+1);
	fileOs.buffer	= &wav;
	sprintf(fileOs.name, aux, "124");

	printf("fileName = %s\r\n", fileOs.name);

	if((r = file_read(&fileOs, 44, &br)))
	{
		printf("error reading header .wav: error %d\r\n", r);
		return;
	}
	fileOs.buffer = snareRam;
	wav_printHeader(&wav);

	if((r = file_read(&fileOs, wav.fileSize, &br)))
	{
		printf("error reading data of .wav: error %d\r\n", r);
		return;
	}
	printf("file read succesfully\r\n");

	f_close(fileOs.fileObj);
	vPortFree(fileOs.name);

//    if (pdPASS !=
//        xTaskCreate(pad_thrdLoadDefaultPads, "load default pads", 1024, NULL, ACCESSFILE_TASK_PRIORITY, NULL))
//    {
//    	printf("error creating load default pads task\r\n");
//        return;
//    }
}

void pad_playNoThrd(uint8_t padNum)
{
//	switch(padNum)
//	{
//		case : 			break;
//		default: 		break;
//	}
	printf("pad_playNoThrd\r\n");
	uint32_t i = 0;
	uint8_t transferDoneCopy = g_saiTransferDone;
	while(i < PAD_SIZE_16BIT)
	{
		if(transferDoneCopy != g_saiTransferDone)
		{
			transferDoneCopy = g_saiTransferDone;
			audio_mixInSaiBuffer(&snareRam[i], transferDoneCopy ? SAI_BUFFER_HALF_SIZE:0, SAI_BUFFER_HALF_SIZE);
			i += SAI_BUFFER_HALF_SIZE;
			printf("mixing: %d\r\n", i);
		}
	}
}



int16_t* pad_getRamByNumber(uint8_t padNum)
{
	switch(padNum)
	{
		case PAD_SNARE: 	return snareRam;
		case PAD_KICK: 		return kickRam;
		case PAD_HITHAT: 	return hithatRam;
		case PAD_TOM1: 		return tom1Ram;
		case PAD_TOM2: 		return tom2Ram;
		case PAD_TOM3: 		return tom3Ram;
		case PAD_CRASH1: 	return crash1Ram;
		case PAD_CRASH2: 	return crash2Ram;
		case PAD_CHINA: 	return chinaRam;
//		case PAD_SPLASH: 	return splas;
		default: 			return snareRam;
	}
}

