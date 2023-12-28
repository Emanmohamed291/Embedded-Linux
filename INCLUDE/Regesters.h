/*
 * REGESTERS.h
 *
 * Created: 12/2/2023 7:43:27 AM
 *  Author: Eman
 */ 


#ifndef REGESTERS_H_
#define REGESTERS_H_

/*********************************************************  DOI_REG  *********************************************************/
#define DDRA *((volatile unsigned char*)0x3A)
#define DDRB *((volatile unsigned char*)0x37)
#define DDRC *((volatile unsigned char*)0x34)
#define DDRD *((volatile unsigned char*)0x31)
#define DDRE *((volatile unsigned char*)0x31)

#define PORTA *((volatile unsigned char*)0x3B)
#define PORTB *((volatile unsigned char*)0x38)
#define PORTC *((volatile unsigned char*)0x35)
#define PORTD *((volatile unsigned char*)0x32)
#define PORTE *((volatile unsigned char*)0x32)

#define PINA *((volatile unsigned char*)0x39)
#define PINB *((volatile unsigned char*)0x36)
#define PINC *((volatile unsigned char*)0x33)
#define PIND *((volatile unsigned char*)0x30)
#define PINE *((volatile unsigned char*)0x30)

/*********************************************************  INT_REG  *********************************************************/
#define SREG  *((volatile unsigned char*)0x30)
#define MCUCR *((volatile unsigned char*)0x30) 
#define GICR  *((volatile unsigned char*)0x30) GIFR  MCUCSR

#endif /* REGESTERS_H_ */