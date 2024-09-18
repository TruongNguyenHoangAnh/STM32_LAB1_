/*
 * Exercise4.c
 *
 *  Created on: Sep 12, 2024
 *      Author: HOANG ANH
 */
#include "Exercise4.h"

void EX4_Init4(void){
		/* GPIO Ports Clock Enable */
			__HAL_RCC_GPIOA_CLK_ENABLE();

		GPIO_InitTypeDef GPIO_InitStruct = {0};

		/*Configure GPIO pins : LED_RED_Pin LED_YELLOW_Pin LED_GREEN_Pin */
		GPIO_InitStruct.Pin = SEG_0|SEG_1|SEG_2|SEG_3|
								SEG_4|SEG_5|SEG_6;
		GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
		GPIO_InitStruct.Pull = GPIO_NOPULL;
		GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
		HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);
}

void Ex_4(int counter) {
  switch (counter) {
  case 0:
	  	  HAL_GPIO_WritePin(GPIOA, SEG_0, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_1, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_2, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_3, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_4, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOA, SEG_5, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOA, SEG_6, GPIO_PIN_SET);
	  break;
  case 1:
	  	  HAL_GPIO_WritePin(GPIOA, SEG_0, GPIO_PIN_SET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_1, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_2, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_3, GPIO_PIN_SET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_4, GPIO_PIN_SET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_5, GPIO_PIN_SET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_6, GPIO_PIN_SET);
	  break;
  case 2:
	  	  HAL_GPIO_WritePin(GPIOA, SEG_0, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_1, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_2, GPIO_PIN_SET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_3, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_4, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_5, GPIO_PIN_SET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_6, GPIO_PIN_RESET);
	  break;
  case 3:
	  	  HAL_GPIO_WritePin(GPIOA, SEG_0, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_1, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_2, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_3, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_4, GPIO_PIN_SET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_5, GPIO_PIN_SET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_6, GPIO_PIN_RESET);
	  break;
  case 4:
	  	  HAL_GPIO_WritePin(GPIOA, SEG_0, GPIO_PIN_SET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_1, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_2, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_3, GPIO_PIN_SET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_4, GPIO_PIN_SET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_5, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_6, GPIO_PIN_RESET);
	  break;
  case 5:
	  	  HAL_GPIO_WritePin(GPIOA, SEG_0, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_1, GPIO_PIN_SET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_2, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_3, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_4, GPIO_PIN_SET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_5, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_6, GPIO_PIN_RESET);
	  break;
  case 6:
	  	  HAL_GPIO_WritePin(GPIOA, SEG_0, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_1, GPIO_PIN_SET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_2, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_3, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_4, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_5, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOA, SEG_6, GPIO_PIN_RESET);
	  break;
  case 7:
  	  	  HAL_GPIO_WritePin(GPIOA, SEG_0, GPIO_PIN_RESET);
  	  	  HAL_GPIO_WritePin(GPIOA, SEG_1, GPIO_PIN_RESET);
  	  	  HAL_GPIO_WritePin(GPIOA, SEG_2, GPIO_PIN_RESET);
  	  	  HAL_GPIO_WritePin(GPIOA, SEG_3, GPIO_PIN_SET);
  	  	  HAL_GPIO_WritePin(GPIOA, SEG_4, GPIO_PIN_SET);
  	  	  HAL_GPIO_WritePin(GPIOA, SEG_5, GPIO_PIN_SET);
  	  	  HAL_GPIO_WritePin(GPIOA, SEG_6, GPIO_PIN_SET);
  	  break;
  case 8:
  	  	  HAL_GPIO_WritePin(GPIOA, SEG_0, GPIO_PIN_RESET);
  	  	  HAL_GPIO_WritePin(GPIOA, SEG_1, GPIO_PIN_RESET);
  	  	  HAL_GPIO_WritePin(GPIOA, SEG_2, GPIO_PIN_RESET);
  	  	  HAL_GPIO_WritePin(GPIOA, SEG_3, GPIO_PIN_RESET);
  	  	  HAL_GPIO_WritePin(GPIOA, SEG_4, GPIO_PIN_RESET);
  	  	  HAL_GPIO_WritePin(GPIOA, SEG_5, GPIO_PIN_RESET);
  	  	  HAL_GPIO_WritePin(GPIOA, SEG_6, GPIO_PIN_RESET);
  	  break;
  case 9:
  	  	  HAL_GPIO_WritePin(GPIOA, SEG_0, GPIO_PIN_RESET);
  	  	  HAL_GPIO_WritePin(GPIOA, SEG_1, GPIO_PIN_RESET);
  	  	  HAL_GPIO_WritePin(GPIOA, SEG_2, GPIO_PIN_RESET);
  	  	  HAL_GPIO_WritePin(GPIOA, SEG_3, GPIO_PIN_RESET);
  	  	  HAL_GPIO_WritePin(GPIOA, SEG_4, GPIO_PIN_SET);
  	  	  HAL_GPIO_WritePin(GPIOA, SEG_5, GPIO_PIN_RESET);
  	  	  HAL_GPIO_WritePin(GPIOA, SEG_6, GPIO_PIN_RESET);
  	  break;
  }
}

