/*********************************************************/
/* Author    : Abd_Elrahman Osama                        */
/* Date      : 24 sep 2022                               */
/* File_Name : LR_INTERFACE_H                           */
/*********************************************************/

/***********************************************************************************************/
/******** This file defines Function prototypes and Macro Definitions for RIGHT LIGHT Driver *********/
/***********************************************************************************************/

/*Header Guard*/
#ifndef LR_INTERFACE_H
#define LR_INTERFACE_H

/* functions prototype*/

void Light_Right_TurnON (GPIO_PORT_TYPE port, GPIO_PIN_TYPE pin);
void Light_Right_TurnOFF (GPIO_PORT_TYPE port, GPIO_PIN_TYPE pin);

#endif