/*
 * MQ2.c
 *
 *  Created on: Dec 30, 2025
 *      Author: HP
 */

#include<stdio.h>
#include<stdint.h>
#include<stdbool.h>
#include"MQ2.h"
#include<string.h>
#include"stm32f4xx_hal.h"
#include"UART.h"
#include"my_lcd.h"
 extern ADC_HandleTypeDef hadc1;
 extern UART_HandleTypeDef huart2 ;
 extern I2C_HandleTypeDef hi2c1;
 uint32_t ADC_val;
 extern char MQ_str[100];

 uint32_t GetMQ(){
	 HAL_ADC_Start(&hadc1);
	 HAL_ADC_PollForConversion(&hadc1, HAL_MAX_DELAY);
	 ADC_val = HAL_ADC_GetValue(&hadc1);
	 HAL_ADC_Stop(&hadc1);
	 return ADC_val;
 }

bool MQ_Alert(uint32_t val){
	return(val >= 2000);
}

char* GetMQ_str(uint32_t val){
	if(MQ_Alert(val)){
		return alert;
	}
	else{
		return normal;
	}
}

void MQ_u(uint32_t val){
	sprintf(MQ_str,"MQ2: %lu\r\n",val);
	send_u(MQ_str);
}

void MQ_lcd(uint32_t val){
	lcd16x2_i2c_clear();
  //Print on 1st line
	sprintf(MQ_str,"MQ2: %lu\r\n",val);
  lcd16x2_i2c_setCursor(0, 0);
  lcd16x2_i2c_printf(GetMQ_str(val));
  lcd16x2_i2c_setCursor(1, 0);
  lcd16x2_i2c_printf(MQ_str);
}
