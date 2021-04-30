/**
 * @file act_4_emb.h
 * @author Prathamesh Devadiga
 * @brief 
 * @version 0.1
 * @date 2021-04-26
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __ACT_4TH_EMB_H__
#define __ACT_4TH_EMB_H__
#include<avr/io.h>

void Initialize_UART(uint16_t ubrr); //Read characters from UART port
char UARTread();
void UART_write(char data);

#endif