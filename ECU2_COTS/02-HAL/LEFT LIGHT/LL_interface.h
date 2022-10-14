/*********************************************************/
/* Author    : Abd_Elrahman Osama                        */
/* Date      : 24 sep 2022                               */
/* File_Name : LL_INTERFACE_H                           */
/*********************************************************/

/***********************************************************************************************/
/******** This file defines Function prototypes and Macro Definitions for LEFT LIGHT Driver *********/
/***********************************************************************************************/

/*Header Guard*/
#ifndef LL_INTERFACE_H
#define LL_INTERFACE_H

/* functions prototype*/

void Light_Left_TurnON (GPIO_PORT_TYPE port, GPIO_PIN_TYPE pin);
void Light_Left_TurnOFF (GPIO_PORT_TYPE port, GPIO_PIN_TYPE pin);

#endif