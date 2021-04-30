#ifndef __ACT_1ST_EMB_H_
#define __ACT_1ST_EMB_H_
/**
 * @file act_1_emb.h
 * @author Prathamesh Devadiga
 * @brief 
 * @version 0.1
 * @date 2021-04-25
 * @copyright Copyright (c) 2021 
 */

#include <avr/io.h>
#include "act_1_emb.h"

//Macro definition 
#define LED_ON_CON 	(0x01)		//led is  in set condition
#define LED_OFF_CON	(0x00)		//led is in reset condition

#define LED_PORT (PORTB)    
#define LED_PIN  (PORTB0)   
#define SENS_ON !(PIND&(1<<PD2))   // Switch1 is on
#define HEATER_ON !(PIND&(1<<PD3))     // Switch2 is on
void state1(uint8_t state);  //LED status
void Setting_up_LED(void);             //Initializing the LED 

#endif //finish __ACT_1ST_EMB_H_
