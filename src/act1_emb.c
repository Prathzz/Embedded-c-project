/**
 * @file act1_emb.c
 * @author Prathamesh Devadiga
 * @version 0.1
 * @date 2021-04-25
 * @copyright Copyright (c) 2021
 */

#include<avr/io.h>
#include "act_1_emb.h"

void state1(uint8_t state)
{
    LED_PORT = (state << LED_PIN);
}
void Setting_up_LED(void)
{
    DDRB = DDRB | (1<<PB0);
    DDRD = DDRD & (~(1<<PD2));
    PORTD = PORTD | (1<<PD2);
    PORTD = PORTD | (1<<PD3);
}
