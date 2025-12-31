/*
 * MQ2.h
 *
 *  Created on: Dec 30, 2025
 *      Author: HP
 */

#ifndef INC_MQ2_H_
#define INC_MQ2_H_
#include<stdio.h>
#include<string.h>
 uint32_t GetMQ();
 bool MQ_Alert();
 char* GetMQ_str(uint32_t val);
 void MQ_lcd(uint32_t val);
 void MQ_u(uint32_t val);

#define alert "Alert ! \r\n"
#define normal  "Normal Update: \r\n"
 extern char MQ_str[100];

#endif /* INC_MQ2_H_ */
