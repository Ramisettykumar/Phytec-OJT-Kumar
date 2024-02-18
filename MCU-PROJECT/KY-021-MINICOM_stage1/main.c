#include "stm32f4xx.h"
#include "stm32f4xx_hal.h"
#include <stdio.h>

#define REED_SWITCH_PIN GPIO_PIN_0
#define LED_PIN GPIO_PIN_5 // Change to PA5
#define GPIO_PORT GPIOA
#define UART_PORT USART2 // Change to your USART port

UART_HandleTypeDef uart_handle;

void Error_Handler(void);

void UART_Init(void) {
    // Initialize HAL Library
    HAL_Init();

    // Configure the system clock (if needed)
    // SystemClock_Config();

    // Initialize GPIO peripheral for UART
    __HAL_RCC_USART2_CLK_ENABLE();
    __HAL_RCC_GPIOA_CLK_ENABLE();

    GPIO_InitTypeDef GPIO_InitStruct = {0};
    GPIO_InitStruct.Pin = GPIO_PIN_2; // TX
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
    GPIO_InitStruct.Alternate = GPIO_AF7_USART2;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    // Configure UART settings
    uart_handle.Instance = UART_PORT;
    uart_handle.Init.BaudRate = 9600;
    uart_handle.Init.WordLength = UART_WORDLENGTH_8B;
    uart_handle.Init.StopBits = UART_STOPBITS_1;
    uart_handle.Init.Parity = UART_PARITY_NONE;
    uart_handle.Init.Mode = UART_MODE_TX;
    uart_handle.Init.HwFlowCtl = UART_HWCONTROL_NONE;
    uart_handle.Init.OverSampling = UART_OVERSAMPLING_16;
    if (HAL_UART_Init(&uart_handle) != HAL_OK) {
        Error_Handler();
    }
}

void Error_Handler(void) {
    while (1) {
        // An error occurred, stay in this loop
    }
}

int main(void) {
    HAL_Init(); // Initialize the HAL Library

    // Initialize GPIO peripheral
    __HAL_RCC_GPIOA_CLK_ENABLE();

    GPIO_InitTypeDef GPIO_InitStruct = {0};
    GPIO_InitStruct.Pin = REED_SWITCH_PIN;
    GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
    GPIO_InitStruct.Pull = GPIO_PULLUP; // or GPIO_PULLDOWN based on wiring
    HAL_GPIO_Init(GPIO_PORT, &GPIO_InitStruct);

    // Modify the LED GPIO initialization
    GPIO_InitStruct.Pin = LED_PIN;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    HAL_GPIO_Init(GPIO_PORT, &GPIO_InitStruct);

    // Initialize UART communication
     UART_Init();

    char message[50];

    while (1) {
        // Read the state of the reed switch
        if (HAL_GPIO_ReadPin(GPIO_PORT, REED_SWITCH_PIN) == GPIO_PIN_RESET) {
            // Magnet is detected (Reed switch is closed)
            HAL_GPIO_WritePin(GPIO_PORT, LED_PIN, GPIO_PIN_SET); // Turn on LED
            sprintf(message, "Magnet Detected (LED ON)\r\n");
            HAL_UART_Transmit(&uart_handle, (uint8_t*)message, strlen(message), HAL_MAX_DELAY);
        } else {
            // Magnet is not detected (Reed switch is open)
            HAL_GPIO_WritePin(GPIO_PORT, LED_PIN, GPIO_PIN_RESET); // Turn off LED
            sprintf(message, "Magnet Not Detected (LED OFF)\r\n");
            HAL_UART_Transmit(&uart_handle, (uint8_t*)message, strlen(message), HAL_MAX_DELAY);
        }

        // Add a delay to avoid rapid state changes (adjust as needed)
        HAL_Delay(1000); // Delay for 1 second
    }
}
