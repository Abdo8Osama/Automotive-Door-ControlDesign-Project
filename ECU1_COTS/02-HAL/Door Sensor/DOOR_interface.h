/*********************************************************/
/* Author    : Abd_Elrahman Osama                        */
/* Date      : 24 sep 2022                               */
/* File_Name : DOOR_INTERFACE_H                           */
/*********************************************************/

/***********************************************************************************************/
/******** This file defines Function prototypes and Macro Definitions for DOOR Driver *********/
/***********************************************************************************************/

/*Header Guard*/
#ifndef DOOR_INTERFACE_H
#define DOOR_INTERFACE_H

/* functions prototype*/

void Door_GetStatus (GPIO_PORT_TYPE port, GPIO_PIN_TYPE pin);
void Door_Init (void);

#endif