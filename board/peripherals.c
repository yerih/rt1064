/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Peripherals v15.0
processor: MIMXRT1064xxxxA
package_id: MIMXRT1064DVL6A
mcu_data: ksdk2_0
processor_version: 16.3.0
board: MIMXRT1064-EVK
functionalGroups:
- name: BOARD_InitPeripherals
  UUID: f789b825-386a-4bf9-9a4b-06a15f384947
  called_from_default_init: true
  selectedCore: core0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
component:
- type: 'system'
- type_id: 'system'
- global_system_definitions:
  - user_definitions: ''
  - user_includes: ''
  - global_init: ''
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
component:
- type: 'uart_cmsis_common'
- type_id: 'uart_cmsis_common'
- global_USART_CMSIS_common:
  - quick_selection: 'default'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
component:
- type: 'gpio_adapter_common'
- type_id: 'gpio_adapter_common'
- global_gpio_adapter_common:
  - commonSetting:
    - HAL_GPIO_ISR_PRIORITY: '3'
    - HAL_GpioPreInit: 'true'
  - quick_selection: 'default'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/
#include "peripherals.h"

/***********************************************************************************************************************
 * BOARD_InitPeripherals functional group
 **********************************************************************************************************************/
/***********************************************************************************************************************
 * NVIC initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'NVIC'
- type: 'nvic'
- mode: 'general'
- custom_name_enabled: 'false'
- type_id: 'nvic'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'NVIC'
- config_sets:
  - nvic:
    - interrupt_table: []
    - interrupts: []
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/* Empty initialization function (commented out)
static void NVIC_init(void) {
} */

/***********************************************************************************************************************
 * GPIO1 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'GPIO1'
- type: 'igpio_adapter'
- mode: 'GPIO'
- custom_name_enabled: 'false'
- type_id: 'igpio_adapter_1.0.1'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'GPIO1'
- config_sets:
  - fsl_adapter_gpio:
    - signalsFilter: 'default boot'
    - gpioSignalsParameters:
      - 0: []
      - 1: []
      - 2: []
      - 3: []
      - 4: []
      - 5: []
      - 6: []
      - 7: []
      - 8: []
      - 9: []
      - 10: []
      - 11: []
      - 12: []
      - 13: []
      - 14: []
      - 15: []
      - 16: []
      - 17: []
      - 18: []
      - 19: []
      - 20: []
      - 21: []
      - 22: []
      - 23: []
    - gpioPinsOverView:
      - 0: []
      - 1: []
    - gpioPinsConfig:
      - 0:
        - pin_selection: 'gpio_io.09'
        - userPinId: ''
        - funtionalGroupEnum: 'BOARD_InitPins'
        - setCallbackFnc: 'false'
        - callbackFncCfg:
          - functionName: 'defaultFunctionName'
          - userData: ''
    - globalCfg: []
    - differentPeripheralsAdd: []
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
/* Get GPIO pin configuration */
hal_gpio_pin_config_t createAdapterGpioPinConfig(GPIO_Type *port, uint8_t pin, hal_gpio_direction_t direction, uint8_t level){
  hal_gpio_pin_config_t temp;
  /* Array of GPIO peripheral base address. */
  static GPIO_Type *const s_gpioBases[] = GPIO_BASE_PTRS;
  uint8_t portInd;
  /* Find the port index from base address mappings. */
  for (portInd = 0U; portInd < ARRAY_SIZE(s_gpioBases); portInd++)
  {    if (s_gpioBases[portInd] == port)
    {
      break;
    }
  }
  
  assert(portInd < ARRAY_SIZE(s_gpioBases));
  
  temp.direction = direction;
  temp.level = level;
  temp.port = portInd;
  temp.pin = pin;
  
  return temp;
};
GPIO_HANDLE_DEFINE(BOARD_CAN_STBY_handle);
GPIO_HANDLE_DEFINE(BOARD_LED_BOARD_handle);

static void GPIO1_init(void) {
  /* GPIO adapter initialization */
  static hal_gpio_pin_config_t gpioPinConfig;
  hal_gpio_status_t status;
  (void)status; // suppress warning in the run configuration
  /* gpio_io, 05 signal initialization */
  gpioPinConfig = createAdapterGpioPinConfig(BOARD_CAN_STBY_PORT, BOARD_CAN_STBY_PIN, BOARD_CAN_STBY_PIN_DIRECTION, BOARD_CAN_STBY_PIN_LEVEL);
  status = HAL_GpioInit(BOARD_CAN_STBY_handle, &gpioPinConfig);
  assert(status == kStatus_HAL_GpioSuccess);
  /* gpio_io, 09 signal initialization */
  gpioPinConfig = createAdapterGpioPinConfig(BOARD_LED_BOARD_PORT, BOARD_LED_BOARD_PIN, BOARD_LED_BOARD_PIN_DIRECTION, BOARD_LED_BOARD_PIN_LEVEL);
  status = HAL_GpioInit(BOARD_LED_BOARD_handle, &gpioPinConfig);
  assert(status == kStatus_HAL_GpioSuccess);
}

/***********************************************************************************************************************
 * Initialization functions
 **********************************************************************************************************************/
void BOARD_InitPeripherals(void)
{
  /* Global initialization */
  /* GPIO adapter pre-initialization */
  HAL_GpioPreInit();

  /* Initialize components */
  GPIO1_init();
}

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void)
{
  BOARD_InitPeripherals();
}