/*
 * PORT_Config.h
 *
 * Created: 12/2/2023 9:17:00 PM
 *  Author: Eman
 */ 


#ifndef PORT_CONFIG_H_
#define PORT_CONFIG_H_

/*************************** Available mode ***********************/
#define PRECOMPILER     0
#define POSTCOMPILER    1

/*enter the chosen one
"0 for PRE-COMPILER"
"1 for POSTCOMPILER"  */
#define choosen_Mode    1
/* choose number of ports and number of pins*/
#define NUM_OF_PORTS    4
#define NUM_OF_PINS     8
/*************************** Available ports **********************/
#define TWO_PORTS       2
#define THREE_PORTS     3
#define FOUR_PORTS      4
/****************** The available families of AVR *****************/
#define my_avr          0    /* put your number here */

#define atmega32        0    /* a, b, c, d */
#define atmega2560      1    /* a, b, c, d, e */
#define atmega32u4      2    /* a, b, c, d, e, f */

//#if (MY_AVR == ATmega32)
//#define NUM_OF_PORTS    4
//#define NUM_OF_PINS     8
//#endif
//
//#if (MY_AVR == ATmega2560)
//#define NUM_OF_PORTS    5
//#define NUM_OF_PINS     8
//#endif
//
//#if (MY_AVR == ATmega32U4)
//#define NUM_OF_PORTS    6
//#define NUM_OF_PINS     8
//#endif				    
					  




/***************************************************************** precompiler mode ***************************************************************************/
#if (choosen_Mode == PRECOMPILER)
#define DIO_INPUT_PU    1
#define DIO_INPUT_HI    2
#define DIO_OUTPUT_HIGH 3
#define DIO_OUTPUT_LOW  4

#define PORT_LOW        0
#define PORT_HIGH       1

#define DIO_PIN0   DIO_OUTPUT_HIGH
#define DIO_PIN1   DIO_OUTPUT_LOW
#define DIO_PIN2   DIO_OUTPUT_LOW
#define DIO_PIN3   DIO_OUTPUT_LOW
#define DIO_PIN4   DIO_OUTPUT_LOW
#define DIO_PIN5   DIO_OUTPUT_LOW
#define DIO_PIN6   DIO_OUTPUT_LOW
#define DIO_PIN7   DIO_OUTPUT_LOW

#if (NUM_OF_PORTS == TWO_PORTS||NUM_OF_PORTS == THREE_PORTS||NUM_OF_PORTS == FOUR_PORTS)
#define DIO_PIN8   DIO_OUTPUT_LOW
#define DIO_PIN9   DIO_OUTPUT_LOW
#define DIO_PIN10  DIO_OUTPUT_LOW
#define DIO_PIN11  DIO_OUTPUT_LOW
#define DIO_PIN12  DIO_OUTPUT_LOW
#define DIO_PIN13  DIO_OUTPUT_LOW
#define DIO_PIN14  DIO_OUTPUT_LOW
#define DIO_PIN15  DIO_OUTPUT_LOW 
#endif

#if (NUM_OF_PORTS == THREE_PORTS||NUM_OF_PORTS == FOUR_PORTS)
#define DIO_PIN16  DIO_OUTPUT_LOW
#define DIO_PIN17  DIO_OUTPUT_LOW
#define DIO_PIN18  DIO_OUTPUT_LOW
#define DIO_PIN19  DIO_OUTPUT_LOW
#define DIO_PIN20  DIO_OUTPUT_LOW
#define DIO_PIN21  DIO_OUTPUT_LOW
#define DIO_PIN22  DIO_OUTPUT_LOW
#define DIO_PIN23  DIO_OUTPUT_LOW
#endif

#if (NUM_OF_PORTS == FOUR_PORTS)
#define DIO_PIN24  DIO_OUTPUT_LOW
#define DIO_PIN25  DIO_OUTPUT_LOW
#define DIO_PIN26  DIO_OUTPUT_LOW
#define DIO_PIN27  DIO_OUTPUT_LOW
#define DIO_PIN28  DIO_OUTPUT_LOW
#define DIO_PIN29  DIO_OUTPUT_LOW
#define DIO_PIN30  DIO_OUTPUT_LOW
#define DIO_PIN31  DIO_OUTPUT_LOW
#endif
#endif

/***************************************************************** postompiler mode ***************************************************************************/
#if (choosen_Mode == POSTCOMPILER)

typedef enum
{
	DIO_enumOutputHigh,
	DIO_enumOutputLow,
	DIO_enumInputInternalPU,
	DIO_enumInputExternalPD
}DIO_enumConfig_t;

typedef enum{
	PORT_enumPORTA,
	PORT_enumPORTB,
	PORT_enumPORTC,
	PORT_enumPORTD
}PORT_enumPorts_t;



#endif /* post-compile*/

#endif /* PORT_CONFIG_H_ */