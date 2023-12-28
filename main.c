/*
 * dio_linux.c
 *
 * Created: 12/28/2023 9:34:00 PM
 * Author : Eman
 */ 

#include "./INCLUDE/DIO.h"

int main(void)
{	 PORT_voidInit();
     DIO_enumSetPinConfig(DIO_enumPortA, DIO_enumPin0, DIO_enumOutputHigh);
    while (1) 
    {
		DIO_enumSetPin(DIO_enumPortA, DIO_enumPin0, DIO_enumOutputHigh);
		DIO_enumDelay_ms(1000);
		DIO_enumSetPin(DIO_enumPortA, DIO_enumPin0, DIO_enumOutputLow);
		DIO_enumDelay_ms(1000);
    }
}

