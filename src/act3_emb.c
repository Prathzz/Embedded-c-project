/**
 * @file  act3_emb.c
 * @author Prathamesh Devadiga
 * @brief 
 * @version 0.1
 * @date 2021-04-26
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include"act_3_emb.h"
#include<util/delay.h>
#include<avr/io.h>

//initializing timer and counter register
void Set_PWM(void)
{
    /*Configuring the registers and ports*/
    TCCR1A|= (1<<COM1A1)|(1<<WGM10)|(1<<WGM11);
    TCCR1B|= (1<<WGM12)|(1<<CS11)|(1<<CS10);
    DDRB = DDRB | (1<<PB1);
}

char Output_PWM (uint16_t ADC_val)
{
    char temp;
    if((ADC_val>=0) && (ADC_val<=209)){
        OCR1A = 205; 
        temp = 20;
        _delay_ms(20);
    }
    else if((ADC_val>=210) && (ADC_val<=509)){

        OCR1A = 410; 
        temp = 25;
       _delay_ms(20);
    }
    else if((ADC_val>=510) && (ADC_val<=709)){

        OCR1A = 717;
        temp = 29;
        _delay_ms(20);
    }
    else if((ADC_val>=710) && (ADC_val<=1024)){

        OCR1A = 973; 
        temp = 33;
        _delay_ms(20);
    }
    else{
        OCR1A = 0; 
        temp = 0;
    }
    return temp;
}
