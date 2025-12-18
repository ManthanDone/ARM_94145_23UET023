/*
 * gpio.c
 *
 *  Created on: Dec 18, 2025
 *      Author: HP
 */
#include"gpio.h"

void led_init(void)
{
	//0. enable clock for LED_PORT in AHB1
	RCC->AHB1ENR |= BV(3);
	//1. select mode as output
	LED_PORT->MODER &= ~(BV(25) | BV(27) | BV(29) | BV(31));
	LED_PORT->MODER |= BV(24) | BV(26) | BV(28) | BV(30);
	//2. select type as push pull
	LED_PORT->OTYPER &= ~(BV(12) | BV(13) | BV(14) | BV(15));
	//3. select speed as low
	LED_PORT->OSPEEDR &= ~(BV(25) | BV(27) | BV(29) | BV(31));
	LED_PORT->OSPEEDR &= ~(BV(24) | BV(26) | BV(28) | BV(30));
	//4. select pull up/down as no
	LED_PORT->PUPDR &= ~(BV(25) | BV(27) | BV(29) | BV(31));
	LED_PORT->PUPDR &= ~(BV(24) | BV(26) | BV(28) | BV(30));
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


