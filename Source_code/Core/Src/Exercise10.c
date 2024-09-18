/*
 * Exercise10.c
 *
 *  Created on: 14 Sep 2024
 *      Author: HOANG ANH
 */

#include "Exercise10.h"
#include "Exercise7.h"
#include "Exercise8.h"
#include "Exercise9.h"

void EX10_Init10(void){
	GPIO_InitTypeDef GPIO_InitStruct = {0};

	/* GPIO Ports Clock Enable */
	__HAL_RCC_GPIOB_CLK_ENABLE();

	GPIO_InitStruct.Pin = LED_1|LED_2|LED_3|
						LED_4|LED_5|LED_6|
						LED_7 |LED_8|LED_9|
						LED_10|LED_11|LED_12;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);
}

