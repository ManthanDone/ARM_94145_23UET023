/*
 * lcd.c
 *
 *  Created on: Dec 26, 2025
 *      Author: HP
 */

#include<lcd.h>
#include<stdio.h>
#include<stdarg.h>
#include<string.h>
#include<stm32f4xx_hal.h>

I2C_HandleTypeDef* lcd16x2_i2cHandle = NULL;

uint8_t LCD_I2C_SLAVE_ADDRESS = 0;

HAL_StatusTypeDef lcd_i2c_send_nibble(uint8_t nibble_with_flags)
{
    uint8_t i2cData[2];

    /* Step 1: EN = HIGH (prepare LCD to read data) */
    i2cData[0] = nibble_with_flags + LCD_EN;

    /* Step 2: EN = LOW (LCD latches data here) */
    i2cData[1] = nibble_with_flags;

    /* Step 3: Send both bytes through I2C */
    return HAL_I2C_Master_Transmit(lcd16x2_i2cHandle,LCD_I2C_SLAVE_ADDRESS,i2cData, 2,  200);
//                lcd16x2_i2cHandle,     -> I2C handle
//                LCD_I2C_SLAVE_ADDRESS, -> LCD I2C address
//                i2cData,               -> data buffer
//                2,                     -> number of bytes
//                200                    -> timeout (ms)
}
