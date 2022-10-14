/*********************************************************/
/* Author    : Abd_Elrahman Osama                        */
/* Date      : 12 Aug 20022                              */
/* File_Name : GPIO_REGISTER_H                           */
/*********************************************************/

/*************************************************************************/
/******** This file defines Register Description for GPIO Driver *********/
/*************************************************************************/

/*Header Guard*/
#ifndef GPIO_REGISTER_H
#define GPIO_REGISTER_H


typedef struct{
	/*Data control Registers*/
	volatile u32 GPIODATA ;//0x000
	volatile u32 RESERVED1[ 255 ];//004-->399	
	volatile u32 GPIODIR  ;//0x400
	/*Interrupt control Registers*/
	volatile u32 GPIOIS   ;//0x404
	volatile u32 GPIOIBE  ;//0x408
	volatile u32 GPIOIEV  ;//0x40C
	volatile u32 GPIOIM   ;//0x410
	volatile u32 GPIORIS  ;//0x414
	volatile u32 GPIOMIS  ;//0x418
	volatile u32 GPIOICR  ;//0x41C
	/*Mode control Registers*/
	volatile u32 GPIOAFSEL;//0x420	
    volatile u32 RESERVED2[ 55 ];//424-->499      
	/*pad control Registers*/
	volatile u32 GPIODR2R      ;//0x500
	volatile u32 GPIODR4R      ;//0x504
	volatile u32 GPIODR8R      ;//0x508
	volatile u32 GPIOODR       ;//0x50C
	volatile u32 GPIOPUR       ;//0x510
	volatile u32 GPIOPDR       ;//0x514
	volatile u32 GPIOSLR       ;//0x518
	volatile u32 GPIODEN       ;//0x51C
	/*Commit control Registers*/
	volatile u32 GPIOLOCK      ;//0x520
	volatile u32 GPIOCR        ;//0x524
	/*pad control Registers*/
	volatile u32 GPIOAMSEL     ;//0x528
	/*port control Registers*/
	volatile u32 GPIOPCTL      ;//0x52C
	/*Mode control Registers*/
	volatile u32 GPIOADCCTL    ;//0x530
	volatile u32 GPIODMACTL    ;//0x534
	/*Identification Registers*/
	volatile u32 RESERVED3[ 678 ];//538-->FCF
	volatile u32 GPIOPeriphID4 ;//0xFD0
	volatile u32 GPIOPeriphID5 ;//0xFD4
	volatile u32 GPIOPeriphID6 ;//0xFD8
	volatile u32 GPIOPeriphID7 ;//0xFDC
	volatile u32 GPIOPeriphID0 ;//0xFE0
	volatile u32 GPIOPeriphID1 ;//0xFE4
	volatile u32 GPIOPeriphID2 ;//0xFE8
	volatile u32 GPIOPeriphID3 ;//0xFEC
	
	volatile u32 GPIOPCellID0  ;//0xFF0
	volatile u32 GPIOPCellID1  ;//0xFF4
	volatile u32 GPIOPCellID2  ;//0xFF8
	volatile u32 GPIOPCellID3  ;//0xFFC

}GPIO;

#define MGPIOHBCTL  *((volatile u8*)0x400FE06C)


#define MGPIOA_APB ((volatile GPIO*)0x40004000)
#define MGPIOA_AHB ((volatile GPIO*)0x40058000)
                                    
#define MGPIOB_APB ((volatile GPIO*)0x40005000)
#define MGPIOB_AHB ((volatile GPIO*)0x40059000)
                                    
#define MGPIOC_APB ((volatile GPIO*)0x40006000)
#define MGPIOC_AHB ((volatile GPIO*)0x4005A000)
                                    
#define MGPIOD_APB ((volatile GPIO*)0x40007000)
#define MGPIOD_AHB ((volatile GPIO*)0x4005B000)
                                    
#define MGPIOE_APB ((volatile GPIO*)0x40024000)
#define MGPIOE_AHB ((volatile GPIO*)0x4005C000)
                                    
#define MGPIOF_APB ((volatile GPIO*)0x40025000)
#define MGPIOF_AHB ((volatile GPIO*)0x4005D000)

#endif
