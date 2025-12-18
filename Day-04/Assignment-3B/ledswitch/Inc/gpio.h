/*
 * gpio.h
 *
 *  Created on: Dec 17, 2025
 *      Author: HP
 */

#ifndef GPIO_H_
#define GPIO_H_
#include <stdint.h>
#include <stdio.h>

#include"stm32f407xx.h"

#define BV(n) (1 << (n))
void led_init(void);
void led_on(void);
void led_off(void);

void switch_init();
int switch_status();
#define SWITCH_PORT GPIOA


#endif /* GPIO_H_ */
