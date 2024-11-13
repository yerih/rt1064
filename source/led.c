



#include "led.h"


/* GPIO_AD_B0_09 (coord F14), LED_BOARD */
/* Routed pin properties */
//#define BOARD_INITPINS_LED_BOARD_PERIPHERAL                                GPIO1   /*!< Peripheral name */
//#define BOARD_INITPINS_LED_BOARD_SIGNAL                                  gpio_io   /*!< Signal name */
//#define BOARD_INITPINS_LED_BOARD_CHANNEL                                      9U   /*!< Signal channel */
//
///* Symbols to be used with GPIO driver */
//#define BOARD_INITPINS_LED_BOARD_GPIO                                      GPIO1   /*!< GPIO peripheral base pointer */
//#define BOARD_INITPINS_LED_BOARD_GPIO_PIN                                     9U   /*!< GPIO pin number */
//#define BOARD_INITPINS_LED_BOARD_GPIO_PIN_MASK                        (1U << 9U)   /*!< GPIO pin mask */
//#define BOARD_INITPINS_LED_BOARD_PORT                                      GPIO1   /*!< PORT peripheral base pointer */
//#define BOARD_INITPINS_LED_BOARD_PIN                                          9U   /*!< PORT pin number */
//#define BOARD_INITPINS_LED_BOARD_PIN_MASK                             (1U << 9U)   /*!< PORT pin mask */



void led_on()
{
	GPIO_PinWrite(BOARD_INITPINS_LED_BOARD_GPIO, BOARD_INITPINS_LED_BOARD_GPIO_PIN, 0); //LED is pull down in board
}


void led_off()
{
	GPIO_PinWrite(BOARD_INITPINS_LED_BOARD_GPIO, BOARD_INITPINS_LED_BOARD_GPIO_PIN, 1);
}

void led_toggle()
{
	GPIO_PinRead(BOARD_INITPINS_LED_BOARD_GPIO, BOARD_INITPINS_LED_BOARD_GPIO_PIN) == LED_OFF ? led_on():led_off();
}


void test_led()
{
	while(1)
	{
		led_toggle();
		OSA_TimeDelay(200);
	}
}









