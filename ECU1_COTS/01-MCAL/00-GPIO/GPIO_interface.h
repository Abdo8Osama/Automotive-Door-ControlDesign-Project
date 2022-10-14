/*********************************************************/
/* Author    : Abd_Elrahman Osama                        */
/* Date      : 12 Aug 2022                              */
/* File_Name : GPIO_INTERFACE_H                          */
/*********************************************************/

/***********************************************************************************************/
/******** This file  defines Function prototypes and Macro Definitions for GPIO Driver *********/
/***********************************************************************************************/

/*Header Guard*/
#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H

/* functions prototype*/
level_type DIO_Read_Pin (port_type DIO_port ,pin_type DIO_pin);
void DIO_Write_Pin (port_type DIO_port ,pin_type DIO_pin , level_type DIO_pin_level);
u8 DIO_Read_Port (port_type DIO_port);
void DIO_Write_port (port_type DIO_port , u8 DIO_port_level);
level_type DIO_toggle_Pin (port_type DIO_port ,pin_type DIO_pin);

void DIO_init_port(const pin_config_type * DIO_pin_config);

#endif
