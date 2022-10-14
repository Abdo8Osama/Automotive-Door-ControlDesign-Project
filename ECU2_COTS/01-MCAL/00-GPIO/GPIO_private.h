/*********************************************************/
/* Author    : Abd_Elrahman Osama                        */
/* Date      : 12 Aug 20022                              */
/* File_Name : GPIO_PRIVATE_H                            */
/*********************************************************/

/***********************************************************************/
/******** This file  defines Private functions for GPIO Driver *********/
/***********************************************************************/

/*Header Guard*/
#ifndef GPIO_PRIVATE_H
#define GPIO_PRIVATE_H


/*APIs*/

#define PORT_HIGH	255
#define PORT_LOW	0

/*BUS TYPE*/
typedef enum{
	APB,
	AHB
}bus_type ;

/*LEVEL TYPE*/
typedef enum{
	LOW,
	HIGH
}level_type ;

/*PIN TYPE*/
typedef enum{
	PIN0,
	PIN1,
	PIN2,
	PIN3,
	PIN4,
	PIN5,
	PIN6,
	PIN7
}pin_type ;

/*PORT TYPE*/
typedef enum{
	PORTA,
	PORTB,
	PORTC,
	PORTD,
	PORTE,
	PORTF
}port_type ;

typedef enum{
	DIO ,
	EXT_INT ,
	AF ,
	AF_ADC ,
	AF_DMA
}mode_type ;

typedef enum{
	INPUT ,
	OUTPUT
}direction_type ;

typedef enum{
	PULL_UP ,
	PULL_DOWN ,
	OPEN_DRAIN ,
	NONE
}internal_attatch_type ;

typedef enum{
	_2MA ,
	_4MA ,
	_8MA 	
}out_current_type ;

typedef enum{
	FALLING ,
	RISING ,
	LOW_LEVEL ,
	HIGH_LEVEL ,
	BOTH_EDGES ,
	NONE
}sense_level_type ;

typedef struct{
		pin_type				PIN_TYPE ;
		port_type				PORT_TYPE ;
		mode_type 				PIN_MODE;
		direction_type			PIN_DIRECTION;
		level_type				PIN_LEVEL;
		internal_attatch_type	PIN_INTERNAL_ATTACH;
		out_current_type		PIN_OUTPUT_CURRENT;
		sense_level_type		PIN_EXT_INT_SENSE_LEVEL ;
}pin_config_type ;


#endif
