/**
 * @file main.c
 * @author Prathamesh Devadiga
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "act_1_emb.h"
#include "act_2_emb.h"
#include "act_3_emb.h"
#include "act_4_emb.h"
#include<avr/io.h>
void Initializing_Everything(void)
{
    
    Setting_up_LED(); //setting LED and Push buttons
    
    Set_ADC(); //Setting ADC registers 
   
    Set_PWM(); //Setting PWM registers 
    
    SET_UART(103); //Setting UART serial com pin
}
    
   
uint16_t temp;
char temp_data;
int main(void)
{
    // Initializing everything
    Initializing_Everything();
    for(;;)
    {
        if(SENS_ON) //check switch_1 is ON
        {
            if(HEATER_ON) //check switch_2 is ON
            {
                state1(LED_ON_CON);//LED is turned  ON
                temp=Read_ADC(0);
                temp_data = Output_PWM(temp);
                UART_write(temp_data);
            }
            else
            {  
                state1(LED_OFF_CON);
            }
        }
        else
        {
            state1(LED_OFF_CON);//LED is turned OFF
            OCR1A=0;
        }
    }
    return 0;
}
