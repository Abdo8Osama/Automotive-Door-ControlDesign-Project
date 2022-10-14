/*********************************************************/
/* Author    : Abd_Elrahman Osama                        */
/* Date      : 24 sep 2022                               */
/* File_Name : LIGHT_INTERFACE_H                           */
/*********************************************************/

/***********************************************************************************************/
/******** This file defines Function prototypes and Macro Definitions for LIGHT Driver *********/
/***********************************************************************************************/

/*Header Guard*/
#ifndef LIGHT_INTERFACE_H
#define LIGHT_INTERFACE_H

/* functions prototype*/

void Light_GetStatus (GPIO_PORT_TYPE port, GPIO_PIN_TYPE pin);
void Light_Init (void);

#endif