/*
 * Exercise1.c
 *
 *  Created on: Sep 12, 2024
 *      Author: HOANG ANH
 */
#include "Exercise1.h"

void EX1_Init1(void){
	GPIO_InitTypeDef GPIO_InitStruct = {0};

	/* GPIO Ports Clock Enable */
	__HAL_RCC_GPIOA_CLK_ENABLE();

	/*Configure GPIO pin Output Level */
	//HAL_GPIO_WritePin(GPIOA, LED_RED_Pin|LED_YELLOW_Pin, GPIO_PIN_RESET);

	/*Configure GPIO pins : LED_RED_Pin LED_YELLOW_Pin LED_GREEN_Pin */
	GPIO_InitStruct.Pin = LED_RED|LED_YELLOW;
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Pull = GPIO_NOPULL;
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
	HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);
}

void Ex_1(void){
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);  // on LED_RED
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_RESET); // off LED_YELLOW
		HAL_Delay(2000);

		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET); // off LED_RED
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_SET);  // on LED_YELLOW
		HAL_Delay(2000);
}

