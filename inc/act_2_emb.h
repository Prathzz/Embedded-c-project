/**
 * @file act_2_emb.h
 * @author Prathamesh Devadiga
 * @brief 
 * @version 0.1
 * @date 2021-04-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACT_2ND_EMB_H__
#define __ACT_2ND_EMB_H__
/**
 * @brief Reading the analog input and returning a digital 8 bit value
 * @return uint16_t 
 */
uint16_t Read_ADC(uint8_t ch);
void Initilize_ADC();
#endif