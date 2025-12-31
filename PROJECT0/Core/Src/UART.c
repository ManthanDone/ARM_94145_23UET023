/*
 * UART.c
 *
 *  Created on: Dec 31, 2025
 *      Author: HP
 */

#include<stdio.h>
#include<stdint.h>
#include<stdbool.h>
#include"MQ2.h"
#include<string.h>
#include"stm32f4xx_hal.h"

 extern UART_HandleTypeDef huart2 ;

 void send_u(char* ch){
	 HAL_UART_Transmit(&huart2,(uint8_t *)ch, strlen(ch), HAL_MAX_DELAY);
 }
