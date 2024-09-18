/*
 * Exercise5.h
 *
 *  Created on: 13 Sep 2024
 *      Author: HOANG ANH
 */

#ifndef INC_EXERCISE5_H_
#define INC_EXERCISE5_H_
#include "main.h"

#define SEG_0 GPIO_PIN_7
#define SEG_1 GPIO_PIN_8
#define SEG_2 GPIO_PIN_9
#define SEG_3 GPIO_PIN_10
#define SEG_4 GPIO_PIN_11
#define SEG_5 GPIO_PIN_12
#define SEG_6 GPIO_PIN_13

#define SEG_7 GPIO_PIN_1
#define SEG_8 GPIO_PIN_2
#define SEG_9 GPIO_PIN_3
#define SEG_10 GPIO_PIN_12
#define SEG_11 GPIO_PIN_13
#define SEG_12 GPIO_PIN_14
#define SEG_13 GPIO_PIN_15

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

void EX5_Init5(void);
void dis7seg_G1(int num1);
void dis7seg_G2(int num2);
void Ex_5(int state);

#endif /* INC_EXERCISE5_H_ */
