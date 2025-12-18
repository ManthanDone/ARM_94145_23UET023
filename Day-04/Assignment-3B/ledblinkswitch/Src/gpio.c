/*
 * gpio.c
 *
 *  Created on: Dec 17, 2025
 *      Author: HP
 */

#include"gpio.h"

void led_init(void)
{
	//0. enable clock for GPIOD in AHB1
	RCC->AHB1ENR |= BV(3);
	//1. select mode as output
	GPIOD->MODER &= ~(BV(29) );
	GPIOD->MODER |= BV(28) ;
	//2. select type as push pull
	GPIOD->OTYPER &= ~(BV(14) );
	//3. select speed as low
	GPIOD->OSPEEDR &= ~(BV(29) );
	GPIOD->OSPEEDR &= ~(BV(28) );
	//4. select pull up/down as no
	GPIOD->PUPDR &= ~(BV(29));
	GPIOD->PUPDR &= ~(BV(28) );
}
void switch_init(void)
{
	//0 ENABLE CLOCK
	RCC->AHB1ENR |= BV(0);

	//1 MODE SETTING AS INPUT
	SWITCH_PORT->MODER &= ~(BV(0) | BV(1));

	//2 OTYPE SETTING PUSH PULL MODE
	SWITCH_PORT->OTYPER &= ~(BV(0));

	//3 SPEED AS LOW SPEED
	SWITCH_PORT->OSPEEDR &= ~(BV(0) | BV(1));

	//4 PULL UP DOWN REGISTER
	SWITCH_PORT->PUPDR &= ~(BV(0) | BV(1));
}

int switch_status (void){
	if((SWITCH_PORT-> IDR) & BV(0) ){
		return (1) ;
	}
	else
		return 0 ;
}


