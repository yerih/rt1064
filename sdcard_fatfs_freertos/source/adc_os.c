



#include "adc_os.h"

uint32_t adcValue = 0;
bool g_adcConversionIsComplete = false;


void adc_os_init(void)
{
//	uint8_t r;
//	if (pdPASS != (r = xTaskCreate(adc_os_thrdReadAdc, "audio thrd pad play", 1536, NULL,
//					ACCESSFILE_TASK_PRIORITY,
//					NULL)))
//	{
//		printf("error creating adc thrd. r = %d\r\n", r);
//		return;
//	}
}

void adc_os_readADC(void* arg)
{
	printf("adc read. do software trigger\r\n");
//	ADC_ETC_DoSoftwareTrigger(ADC_ETC_PERIPHERAL, ADC_ETC_TC_0);
	ADC_SetChannelConfig(ADC1_PERIPHERAL, ADC1_CH0_CONTROL_GROUP, &ADC1_channels_config[0]);
	EnableIRQ(ADC1_IRQn);
	printf("adc read. waiting conversion complete... \r\n");
	while(!g_adcConversionIsComplete)__NOP();
	g_adcConversionIsComplete = false;
	printf("adc read. value = %d\r\n", adcValue);
}

void ADC1_IRQHandler(void)
{
	printf("adc interrupt\r\n");
//	logApp("adc interrupt\r\n");
	uint32_t value = ADC_GetChannelConversionValue(ADC1_PERIPHERAL, ADC1_CH0_CONTROL_GROUP);
	adcValue = value;
	g_adcConversionIsComplete = true;
//	printf("adc interrupt. value IN5 %d\r\n", value);
	SDK_ISR_EXIT_BARRIER;
	DisableIRQ(ADC1_IRQn);
}

void ADC_ETC_IRQ0_IRQHandler(void)
{
//	ADC_ETC_ClearInterruptStatusFlags(ADC_ETC_PERIPHERAL, kADC_ETC_Trg0TriggerSource, kADC_ETC_Done0StatusFlagMask);
//	adcValue = ADC_ETC_GetADCConversionValue(ADC_ETC_PERIPHERAL, ADC_ETC_TC_0, 0); /* Get trigger0 chain0 result. */
//	g_adcConversionIsComplete = true;
//	printf("adc etc interrupt. value %d\r\n", adcValue);
//	__DSB();
	printf("adc etc interrupt.\r\n");
}

void ADC_ETC_IRQ1_IRQHandler(void)
{
//	ADC_ETC_ClearInterruptStatusFlags(ADC_ETC_PERIPHERAL, kADC_ETC_Trg1TriggerSource, kADC_ETC_Done1StatusFlagMask);
//	adcValue = ADC_ETC_GetADCConversionValue(ADC_ETC_PERIPHERAL, ADC_ETC_TC_0, 1); /* Get trigger0 chain0 result. */
//	g_adcConversionIsComplete = true;
//	printf("adc etc interrupt 1. value %d\r\n", adcValue);
//	__DSB();
	printf("adc etc interrupt 1\r\n");
}









