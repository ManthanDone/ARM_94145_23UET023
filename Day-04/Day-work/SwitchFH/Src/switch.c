/*
 * switch.c
 *
 *  Created on: Dec 17, 2025
 *      Author: HP
 */

#include"header.h"

void switch_init (void){

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

