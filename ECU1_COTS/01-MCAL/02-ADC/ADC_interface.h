/*********************************************************/
/* Author    : Abd_Elrahman Osama                        */
/* Date      : 24 SEP 20022                              */
/* File_Name : ADC_INTERFACE_H                           */
/*********************************************************/

/***********************************************************************************************/
/******** This file  defines Function prototypes and Macro Definitions for ADC Driver **********/
/***********************************************************************************************/

/*Header Guard*/
#ifndef ADC_INTERFACE_H
#define ADC_INTERFACE_H

/* TYPE functions prototype HERE */

u32 ADC_ReadChunnel (ADC_CHUNNEL_TYPE ADC_Chunnel);
void ADC_Init (const ADC_CONFIG_TYPE * ADC_config);

#endif
