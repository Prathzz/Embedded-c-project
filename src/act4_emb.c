/**
 * @file act4_emb.c
 * @author Prathamesh Devadiga
 * @brief 
 * @version 0.1
 * @date 2021-04-26
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<avr/io.h>
#include"act_4_emb.h"

void SET_UART(uint16_t ubrr_value){

    UBRR0L = ubrr_value;
    UBRR0H = (ubrr_value>>8) & (0x00ff);
    UCSR0C = (1<<UMSEL00) | (1<<UCSZ01) | (1<<UCSZ01);
    UCSR0B = (1<<RXEN0) | (1<<TXEN0) | (1<<RXCIE0) | (1<<TXCIE0);
}

void UART_write(char data)
{
    while(!(UCSR0A & (1<<UDRE0)))
    {

    }
    UDR0 = data;
}
