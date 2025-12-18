/*
 * header.h
 *
 *  Created on: Dec 17, 2025
 *      Author: HP
 */

#ifndef HEADER_H_
#define HEADER_H_

#include <stdint.h>
#include <stdio.h>
#include"stm32f407xx.h"

void led_init(void);
void led_on(void);
void led_off(void);

void switch_init (void);
int switch_status (void);
#define LED_PORT GPIOD
#define SWITCH_PORT GPIOA
#define BV(n) (1 << (n))


#endif /* HEADER_H_ */
