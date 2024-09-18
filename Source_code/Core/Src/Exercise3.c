/*
 * Exercise3.c
 *
 *  Created on: Sep 12, 2024
 *      Author: HOANG ANH
 */

#include "Exercise3.h"

void EX3_Init3(void)
{
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

void Ex_3(void)
{			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, GPIO_PIN_RESET); //X1
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, GPIO_PIN_RESET); //V1
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, GPIO_PIN_SET); //D1
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, GPIO_PIN_SET); //X2
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_RESET); //V2
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, GPIO_PIN_RESET); //D2
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, GPIO_PIN_RESET); //X3
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, GPIO_PIN_RESET); //V3
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_SET); //D3
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET); //X4
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, GPIO_PIN_RESET); //V4
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, GPIO_PIN_RESET); //D4
			HAL_Delay(3000);

			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, GPIO_PIN_RESET); //X1
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, GPIO_PIN_RESET); //V1
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, GPIO_PIN_SET); //D1
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, GPIO_PIN_RESET); //X2
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_SET); //V2
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, GPIO_PIN_RESET); //D2
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, GPIO_PIN_RESET); //X3
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, GPIO_PIN_RESET); //V3
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_SET); //D3
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_RESET); //X4
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, GPIO_PIN_SET); //V4
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, GPIO_PIN_RESET); //D4
			HAL_Delay(2000);

			//LED_GREEN
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, GPIO_PIN_SET); //X1
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, GPIO_PIN_RESET); //V1
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, GPIO_PIN_RESET); //D1
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, GPIO_PIN_RESET); //X2
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_RESET); //V2
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, GPIO_PIN_SET); //D2
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, GPIO_PIN_SET); //X3
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, GPIO_PIN_RESET); //V3
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_RESET); //D3
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_RESET); //X4
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, GPIO_PIN_RESET); //V4
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, GPIO_PIN_SET); //D4
			HAL_Delay(3000);


			//LED_YELLOW
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, GPIO_PIN_RESET); //X1
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, GPIO_PIN_SET); //V1
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, GPIO_PIN_RESET); //D1
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, GPIO_PIN_RESET); //X2
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_RESET); //V2
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, GPIO_PIN_SET); //D2
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, GPIO_PIN_RESET); //X3
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, GPIO_PIN_SET); //V3
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_RESET); //D3
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_RESET); //X4
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, GPIO_PIN_RESET); //V4
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, GPIO_PIN_SET); //D4
			HAL_Delay(2000);
}