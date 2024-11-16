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
 * SAI1 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'SAI1'
- type: 'sai'
- mode: 'edma'
- custom_name_enabled: 'false'
- type_id: 'sai_2.3.6'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'SAI1'
- config_sets:
  - fsl_sai:
    - usage: 'playback'
    - signal_config:
      - 0:
        - sourceTx: 'Tx'
      - 1:
        - sourceTx: 'Tx'
    - syncSwapI: []
    - bclkTxSetting: []
    - syncTxSetting: []
    - whole:
      - tx_group:
        - sai_transceiver:
          - bitClock:
            - modeM: 'master'
            - bitClockSource: 'kSAI_BclkSourceBusclk'
            - bitClockSourceFreq: 'ClocksTool_DefaultInit'
            - bclkPolarityM: 'kSAI_PolarityActiveLow'
            - bclkInputDelayM: 'false'
          - frameSync:
            - modeM: 'master'
            - frameSyncWidthM: '16'
            - frameSyncPolarityM: 'kSAI_PolarityActiveLow'
            - frameSyncEarlyM: 'true'
            - frameSyncGenerateOnDemandM: 'false'
          - sampleRate_Hz: 'kSAI_SampleRate48KHz'
          - channelMask: 'kSAI_Channel0Mask'
          - serialData:
            - dataMode: 'kSAI_DataPinStateTriState'
            - differentFirstWord: 'false'
            - sameDataWordLengthM: 'kSAI_WordWidth16bits'
            - dataOrder: 'kSAI_DataMSB'
            - dataFirstBitShiftedM: '16'
            - dataWordNumM: '2'
            - dataMasked_config:
              - dataMasked_L:
                - 0: 'false'
                - 1: 'false'
                - 2: 'false'
                - 3: 'false'
                - 4: 'false'
                - 5: 'false'
                - 6: 'false'
                - 7: 'false'
                - 8: 'false'
                - 9: 'false'
                - 10: 'false'
                - 11: 'false'
                - 12: 'false'
                - 13: 'false'
                - 14: 'false'
                - 15: 'false'
              - dataMasked_H:
                - 0: 'false'
                - 1: 'false'
                - 2: 'false'
                - 3: 'false'
                - 4: 'false'
                - 5: 'false'
                - 6: 'false'
                - 7: 'false'
                - 8: 'false'
                - 9: 'false'
                - 10: 'false'
                - 11: 'false'
                - 12: 'false'
                - 13: 'false'
                - 14: 'false'
                - 15: 'false'
          - fifo:
            - fifoWatermarkM: '16'
            - fifoCombine: 'kSAI_FifoCombineDisabled'
            - fifoPacking: 'kSAI_FifoPackingDisabled'
            - fifoContinueOneError: 'false'
        - edma_group:
          - enable_edma_channel: 'false'
          - edma_channel:
            - uid: '1731790168109'
            - eDMAn: '0'
            - eDMA_source: 'kDmaRequestMuxSai1Tx'
            - enableTriggerPIT: 'false'
            - init_channel_priority: 'false'
            - edma_channel_Preemption:
              - enableChannelPreemption: 'false'
              - enablePreemptAbility: 'false'
              - channelPriority: '0'
            - enable_custom_name: 'false'
          - sai_edma_handle:
            - enable_custom_name: 'false'
            - placement:
              - section: 'cacheable'
              - zeroInitialize: 'false'
              - align: '32'
            - init_callback: 'false'
            - callback_fcn: ''
            - user_data: ''
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
/* SAI1 Tx configuration */
sai_transceiver_t SAI1_Tx_config = {
  .masterSlave = kSAI_Master,
  .bitClock = {
    .bclkSrcSwap = false,
    .bclkSource = kSAI_BclkSourceBusclk,
    .bclkPolarity = kSAI_PolarityActiveLow,
    .bclkInputDelay = false
  },
  .frameSync = {
    .frameSyncWidth = 16U,
    .frameSyncPolarity = kSAI_PolarityActiveLow,
    .frameSyncEarly = true,
    .frameSyncGenerateOnDemand = false
  },
  .syncMode = kSAI_ModeAsync,
  .channelMask = kSAI_Channel0Mask,
  .startChannel = 0U,
  .endChannel = 0U,
  .channelNums = 1U,
  .serialData = {
    .dataMode = kSAI_DataPinStateTriState,
    .dataWord0Length = (uint8_t)kSAI_WordWidth16bits,
    .dataWordNLength = (uint8_t)kSAI_WordWidth16bits,
    .dataWordLength = (uint8_t)kSAI_WordWidth16bits,
    .dataOrder = kSAI_DataMSB,
    .dataFirstBitShifted = 16U,
    .dataWordNum = 2U,
    .dataMaskedWord = 0x0U
  },
  .fifo = {
    .fifoWatermark = 16U,
    .fifoCombine = kSAI_FifoCombineDisabled,
    .fifoPacking = kSAI_FifoPackingDisabled,
    .fifoContinueOneError = false
  }
};
sai_edma_handle_t SAI1_SAI_Tx_eDMA_Handle;

static void SAI1_init(void) {
  /* Initialize SAI clock gate */
  SAI_Init(SAI1_PERIPHERAL);
  /* Create the SAI Tx eDMA handle */
  SAI_TransferTxCreateHandleEDMA(SAI1_PERIPHERAL, &SAI1_SAI_Tx_eDMA_Handle, NULL, NULL, NULL);
  /* Configures SAI Tx sub-module functionality */
  SAI_TransferTxSetConfigEDMA(SAI1_PERIPHERAL, &SAI1_SAI_Tx_eDMA_Handle, &SAI1_Tx_config);
  /* Set up SAI Tx bitclock rate by calculation of divider. */
  SAI_TxSetBitClockRate(SAI1_PERIPHERAL, SAI1_TX_BCLK_SOURCE_CLOCK_HZ, SAI1_TX_SAMPLE_RATE, SAI1_TX_WORD_WIDTH, SAI1_TX_WORDS_PER_FRAME);
}

/***********************************************************************************************************************
 * SEMC initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'SEMC'
- type: 'semc'
- mode: 'general'
- custom_name_enabled: 'false'
- type_id: 'semc_2.7.0'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'SEMC'
- config_sets:
  - fsl_semc:
    - enableDCD: 'true'
    - clockConfig:
      - clockSource: 'kSEMC_ClkSrcPeri'
      - clockSourceFreq: 'ClocksTool_DefaultInit'
    - semc_config_t:
      - dqsMode: 'kSEMC_Loopbackdqspad'
      - cmdTimeoutCycles: '0'
      - busTimeoutCycles: '0'
      - queueWeight:
        - queueaEnable: 'false'
        - queueaWeight:
          - structORvalue: 'structure'
          - queueaConfig:
            - qos: '0'
            - aging: '0'
            - slaveHitNoswitch: '0'
            - slaveHitSwitch: '0'
        - queuebEnable: 'false'
        - queuebWeight:
          - structORvalue: 'structure'
          - queuebConfig:
            - qos: '0'
            - aging: '0'
            - weightPagehit: '0'
            - slaveHitNoswitch: '0'
            - bankRotation: '0'
    - semc_sdram_config_t:
      - csxPinMux: 'kSEMC_MUXCSX0'
      - semcSdramCs: 'kSEMC_SDRAM_CS0'
      - address: '0x80000000'
      - memsize_input: '32MB'
      - portSize: 'kSEMC_PortSize16Bit'
      - burstLen: 'kSEMC_Sdram_BurstLen1'
      - columnAddrBitNum: 'kSEMC_SdramColunm_9bit'
      - casLatency: 'kSEMC_LatencyThree'
      - tPrecharge2Act_Ns: '18'
      - tAct2ReadWrite_Ns: '18'
      - tRefreshRecovery_Ns: '127'
      - tWriteRecovery_Ns: '12'
      - tCkeOff_Ns: '42'
      - tAct2Prechage_Ns: '42'
      - tSelfRefRecovery_Ns: '67'
      - tRefresh2Refresh_Ns: '60'
      - tAct2Act_Ns: '60'
      - tPrescalePeriod_Ns: '160'
      - tIdleTimeout_Ns: '0'
      - refreshPeriod_nsPerRow: '64'
      - refreshUrgThreshold: '64'
      - refreshBurstLen: '1'
      - autofreshTimesEnum: '0'
    - sdramArray: []
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/* Empty initialization function (commented out)
static void SEMC_init(void) {
} */

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
  SAI1_init();
}

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void)
{
  BOARD_InitPeripherals();
}
