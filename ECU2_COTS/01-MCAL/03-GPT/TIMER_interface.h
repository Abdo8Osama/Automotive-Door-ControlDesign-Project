/*********************************************************/
/* Author    : Abd_Elrahman Osama                        */
/* Date      : 24 sep 2022                               */
/* File_Name : GPT_INTERFACE_H                           */
/*********************************************************/

/***********************************************************************************************/
/******** This file defines Function prototypes and Macro Definitions for Timer Driver *********/
/***********************************************************************************************/

/*Header Guard*/
#ifndef GPT_INTERFACE_H
#define GPT_INTERFACE_H

/* functions prototype*/

void GPT_Start (GPT_LoadValue_TYPE Value);
void GPT_Stop (void);
void GPT_Init (const GPT_CONFIG_TYPE * GPT_config);

#endif