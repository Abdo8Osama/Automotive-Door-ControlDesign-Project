/*********************************************************/
/* Author    : Abd_Elrahman Osama                        */
/* Date      : 24 sep 2022                               */
/* File_Name : BUZZER_INTERFACE_H                           */
/*********************************************************/

/***********************************************************************************************/
/******** This file defines Function prototypes and Macro Definitions for BUZZER Driver *********/
/***********************************************************************************************/

/*Header Guard*/
#ifndef BUZZER_INTERFACE_H
#define BUZZER_INTERFACE_H

/* functions prototype*/

void Buzzer_TurnON (GPIO_PORT_TYPE port, GPIO_PIN_TYPE pin);
void Buzzer_TurnOFF (GPIO_PORT_TYPE port, GPIO_PIN_TYPE pin);

#endif