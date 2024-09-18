/*
 * Exercise10.h
 *
 *  Created on: 14 Sep 2024
 *      Author: HOANG ANH
 */

#ifndef INC_EXERCISE10_H_
#define INC_EXERCISE10_H_

#include "main.h"
#define LED_1 GPIO_PIN_0
#define LED_2 GPIO_PIN_1
#define LED_3 GPIO_PIN_2
#define LED_4 GPIO_PIN_3
#define LED_5 GPIO_PIN_4
#define LED_6 GPIO_PIN_5
#define LED_7 GPIO_PIN_6
#define LED_8 GPIO_PIN_7
#define LED_9 GPIO_PIN_8
#define LED_10 GPIO_PIN_9
#define LED_11 GPIO_PIN_10
#define LED_12 GPIO_PIN_11
void EX10_Init10(void);
void clearAllClock(void);
void setNumberOnClock(int num);
void clearNumberOnClock(int num);


#endif /* INC_EXERCISE10_H_ */
