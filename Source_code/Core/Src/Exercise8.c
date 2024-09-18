/*
 * Exercise8.c
 *
 *  Created on: 18 Sep 2024
 *      Author: HOANG ANH
 */

#include "Exercise8.h"
#include "Exercise10.h"

void setNumberOnClock(int num)
{
    switch (num)
    {
        case 0:
            HAL_GPIO_WritePin(GPIOB, LED_2, GPIO_PIN_SET);
            break;
        case 1:
            HAL_GPIO_WritePin(GPIOB, LED_3, GPIO_PIN_SET);
            break;
        case 2:
            HAL_GPIO_WritePin(GPIOB, LED_4, GPIO_PIN_SET);
            break;
        case 3:
            HAL_GPIO_WritePin(GPIOB, LED_5, GPIO_PIN_SET);
            break;
        case 4:
            HAL_GPIO_WritePin(GPIOB, LED_6, GPIO_PIN_SET);
            break;
        case 5:
            HAL_GPIO_WritePin(GPIOB, LED_7, GPIO_PIN_SET);
            break;
        case 6:
            HAL_GPIO_WritePin(GPIOB, LED_8, GPIO_PIN_SET);
            break;
        case 7:
            HAL_GPIO_WritePin(GPIOB, LED_9, GPIO_PIN_SET);
            break;
        case 8:
            HAL_GPIO_WritePin(GPIOB, LED_10, GPIO_PIN_SET);
            break;
        case 9:
            HAL_GPIO_WritePin(GPIOB, LED_11, GPIO_PIN_SET);
            break;
        case 10:
            HAL_GPIO_WritePin(GPIOB, LED_12, GPIO_PIN_SET);
            break;
        case 11:
            HAL_GPIO_WritePin(GPIOB, LED_1, GPIO_PIN_SET);
            break;
    }
}
