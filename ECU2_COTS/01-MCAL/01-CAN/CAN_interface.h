/*********************************************************/
/* Author    : Abd_Elrahman Osama                        */
/* Date      : 24 SEP 20022                              */
/* File_Name : CAN_INTERFACE_H                           */
/*********************************************************/

/***********************************************************************************************/
/******** This file  defines Function prototypes and Macro Definitions for CAN Driver **********/
/***********************************************************************************************/

/*Header Guard*/
#ifndef CAN_INTERFACE_H
#define CAN_INTERFACE_H

/* TYPE functions prototype HERE */
void CAN_Write (u32 data);
u32 CAN_Read (void);
void CAN_Init (const CAN_CONFIG_TYPE * CAN _config);

#endif
