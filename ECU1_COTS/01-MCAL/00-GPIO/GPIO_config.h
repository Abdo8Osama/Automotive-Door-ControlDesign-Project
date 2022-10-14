/*********************************************************/
/* Author    : Abd_Elrahman Osama                        */
/* Date      : 12 Aug 20022                              */
/* File_Name : GPIO_CONFIG_H                             */
/*********************************************************/

/*********************************************************************/
/******** This file determine configurations for GPIO Driver *********/
/*********************************************************************/

/*Header Guard*/
#ifndef GPIO_CONFIG_H
#define GPIO_CONFIG_H

#define BUS_TYPE APB

pin_config_type PA0;

PA0.PORT_TYPE = PORTA ;
PA0.PIN_TYPE  = PIN0;
PA0.PIN_MODE  = DIO;
PA0.PIN_LEVEL = LOW;
PA0.PIN_DIRECTION       = OUTPUT;
PA0.PIN_INTERNAL_ATTACH = NONE;
PA0.PIN_OUTPUT_CURRENT  = _2MA;
PA0.PIN_EXT_INT_SENSE_LEVEL = NONE ;
              

#endif
