/**
 * @file act2_emb.c
 * @author Prathamesh Devadiga
 * @brief 
 * @version 0.1
 * @date 2021-04-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<avr/io.h>
#include "act_2_emb.h"

uint16_t Read_ADC(uint8_t ch)
{
    ADMUX = ADMUX & 0xf8;
    ch=ch&0b00000111;
    ADMUX = ADMUX | ch;
    ADCSRA = ADCSRA | (1<<ADSC);
    
    while(!(ADCSRA & (1<<ADIF)));

    ADCSRA = ADCSRA | (1<<ADIF);
    return(ADC);
}

void Set_ADC()
{
    ADMUX=(1<<REFS0);
    ADCSRA=(1<<ADEN)|(7<<ADPS0);
}
