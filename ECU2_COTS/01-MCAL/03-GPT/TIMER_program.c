/*********************************************************/
/* Author    : Abd_Elrahman Osama                        */
/* Date      : 24 sep 20022                              */
/* File_Name : GPT_PROGRAM_C                           */
/*********************************************************/

/**************************************************************************/
/******** This file defines Function Definitions for Timer Driver *********/
/**************************************************************************/

/*Included files*/
#include"STD_TYPES.h"
#include"BIT_MATH.h"
#include"GPT_private.h"
#include"GPT_interface.h"
#include"GPT_config.h"
#include"GPT_register.h"

/*function definitions*/

void GPT_Start (GPT_LoadValue_TYPE Value)
{
	/*TYPE CODE HERE*/
}

void GPT_Stop (void)
{
	/*TYPE CODE HERE*/
}

void GPT_Init (const GPT_CONFIG_TYPE * GPT_config)
{
	/*TYPE CODE HERE*/
}

void (*TIMER0A_CallBack) (void);

void TIMER0A_SetCallBack( void (*ptr) (void) )
{
	TIMER0A_CallBack = ptr;
}
void TIMER0A_Handler(void)
{
	TIMER0A_CallBack();
}

