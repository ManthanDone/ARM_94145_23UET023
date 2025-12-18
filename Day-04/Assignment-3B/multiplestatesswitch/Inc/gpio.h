/*
 * gpio.h
 *
 *  Created on: Dec 18, 2025
 *      Author: HP
 */

#ifndef GPIO_H_
#define GPIO_H_

#define GPIO_H_
#include <stdint.h>
#include <stdio.h>

#include"stm32f407xx.h"

#define BV(n) (1 << (n))
void led_init(void);

#define GREEN_LED 12
#define BLUE_LED 15

void switch_init();
int switch_status();

#define SWITCH_PORT GPIOA
#define LED_PORT GPIOD

#endif /* GPIO_H_ */
