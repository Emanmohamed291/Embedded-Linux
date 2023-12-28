/*
 * Port.c
 *
 * Created: 12/1/2023 7:38:42 AM
 *  Author: Eman
 */ 
#include "../INCLUDE/PORT.h"

/***************************************************************** precompiler mode ***************************************************************************/
#define SET_BIT(R,B) 			(R=R|(1<<B))
#define CLR_BIT(R,B) 			(R&=~(1<<B)) /* error the code doesn't see it why? i don't know*/
#if (choosen_Mode == PRECOMPILER)
 
#if    (DIO_PIN0  == DIO_INPUT_HI)
#define PIN0_DIR   PORT_LOW
#define PIN0_PPORT PORT_LOW
#elif  (DIO_PIN0  == DIO_INPUT_PU)
#define PIN0_DIR   PORT_LOW
#define PIN0_PPORT PORT_HIGH
#elif  (DIO_PIN0  == DIO_OUTPUT_HIGH)
#define PIN0_DIR   PORT_HIGH
#define PIN0_PPORT PORT_HIGH
#elif  (DIO_PIN0  == DIO_OUTPUT_LOW)
#define PIN0_DIR   PORT_HIGH
#define PIN0_PPORT PORT_LOW
#else
#error "invalid pin0 configration"
#endif
#if    (DIO_PIN1  == DIO_INPUT_HI)
#define PIN1_DIR   PORT_LOW
#define PIN1_PPORT PORT_LOW
#elif (DIO_PIN1  == DIO_INPUT_PU)
#define PIN1_DIR   PORT_LOW
#define PIN1_PPORT PORT_HIGH
#elif (DIO_PIN1  == DIO_OUTPUT_HIGH)
#define PIN1_DIR   PORT_HIGH
#define PIN1_PPORT PORT_HIGH
#elif (DIO_PIN1  == DIO_OUTPUT_LOW)
#define PIN1_DIR   PORT_HIGH
#define PIN1_PPORT PORT_LOW
#else
#error "invalid pin1 configration"
#endif
#if (DIO_PIN2  == DIO_INPUT_HI)
#define PIN2_DIR   PORT_LOW
#define PIN2_PPORT PORT_LOW
#elif (DIO_PIN2  == DIO_INPUT_PU)
#define PIN2_DIR   PORT_LOW
#define PIN2_PPORT PORT_HIGH
#elif (DIO_PIN2  == DIO_OUTPUT_HIGH)
#define PIN2_DIR   PORT_HIGH
#define PIN2_PPORT PORT_HIGH
#elif (DIO_PIN2  == DIO_OUTPUT_LOW)
#define PIN2_DIR   PORT_HIGH
#define PIN2_PPORT PORT_LOW
#else
#error "invalid pin2 configration"
#endif
#if (DIO_PIN3  == DIO_INPUT_HI)
#define PIN3_DIR   PORT_LOW
#define PIN3_PPORT PORT_LOW
#elif (DIO_PIN3  == DIO_INPUT_PU)
#define PIN3_DIR   PORT_LOW
#define PIN3_PPORT PORT_HIGH
#elif (DIO_PIN3  == DIO_OUTPUT_HIGH)
#define PIN3_DIR   PORT_HIGH
#define PIN3_PPORT PORT_HIGH
#elif (DIO_PIN3  == DIO_OUTPUT_LOW)
#define PIN3_DIR   PORT_HIGH
#define PIN3_PPORT PORT_LOW
#else
#error "invalid pin3 configration"
#endif
#if (DIO_PIN4  == DIO_INPUT_HI)
#define PIN4_DIR   PORT_LOW
#define PIN4_PPORT PORT_LOW
#elif (DIO_PIN4  == DIO_INPUT_PU)
#define PIN4_DIR   PORT_LOW
#define PIN4_PPORT PORT_HIGH
#elif (DIO_PIN4  == DIO_OUTPUT_HIGH)
#define PIN4_DIR   PORT_HIGH
#define PIN4_PPORT PORT_HIGH
#elif (DIO_PIN4  == DIO_OUTPUT_LOW)
#define PIN4_DIR   PORT_HIGH
#define PIN4_PPORT PORT_LOW
#else
#error "invalid pin4 configration"
#endif
#if    (DIO_PIN5  == DIO_INPUT_HI)
#define PIN5_DIR   PORT_LOW
#define PIN5_PPORT PORT_LOW
#elif  (DIO_PIN5  == DIO_INPUT_PU)
#define PIN5_DIR   PORT_LOW
#define PIN5_PPORT PORT_HIGH
#elif  (DIO_PIN5  == DIO_OUTPUT_HIGH)
#define PIN5_DIR   PORT_HIGH
#define PIN5_PPORT PORT_HIGH
#elif  (DIO_PIN5  == DIO_OUTPUT_LOW)
#define PIN5_DIR   PORT_HIGH
#define PIN5_PPORT PORT_LOW
#else
#error "invalid pin5 configration"
#endif
#if    (DIO_PIN6  == DIO_INPUT_HI)
#define PIN6_DIR   PORT_LOW
#define PIN6_PPORT PORT_LOW
#elif (DIO_PIN6  == DIO_INPUT_PU)
#define PIN6_DIR   PORT_LOW
#define PIN6_PPORT PORT_HIGH
#elif (DIO_PIN6  == DIO_OUTPUT_HIGH)
#define PIN6_DIR   PORT_HIGH
#define PIN6_PPORT PORT_HIGH
#elif (DIO_PIN6  == DIO_OUTPUT_LOW)
#define PIN6_DIR   PORT_HIGH
#define PIN6_PPORT PORT_LOW
#else
#error "invalid pin6 configration"
#endif
#if (DIO_PIN7  == DIO_INPUT_HI)
#define PIN7_DIR   PORT_LOW
#define PIN7_PPORT PORT_LOW
#elif (DIO_PIN7  == DIO_INPUT_PU)
#define PIN7_DIR   PORT_LOW
#define PIN7_PPORT PORT_HIGH
#elif (DIO_PIN7  == DIO_OUTPUT_HIGH)
#define PIN7_DIR   PORT_HIGH
#define PIN7_PPORT PORT_HIGH
#elif (DIO_PIN7  == DIO_OUTPUT_LOW)
#define PIN7_DIR   PORT_HIGH
#define PIN7_PPORT PORT_LOW
#else
#error "invalid pin7 configration"
#endif
#if (DIO_PIN8  == DIO_INPUT_HI)
#define PIN8_DIR   PORT_LOW
#define PIN8_PPORT PORT_LOW
#elif (DIO_PIN8  == DIO_INPUT_PU)
#define PIN8_DIR   PORT_LOW
#define PIN8_PPORT PORT_HIGH
#elif (DIO_PIN8  == DIO_OUTPUT_HIGH)
#define PIN8_DIR   PORT_HIGH
#define PIN8_PPORT PORT_HIGH
#elif (DIO_PIN8  == DIO_OUTPUT_LOW)
#define PIN8_DIR   PORT_HIGH
#define PIN8_PPORT PORT_LOW
#else
#error "invalid pin8 configration"
#endif
#if (DIO_PIN9  == DIO_INPUT_HI)
#define PIN9_DIR   PORT_LOW
#define PIN9_PPORT PORT_LOW
#elif (DIO_PIN9  == DIO_INPUT_PU)
#define PIN9_DIR   PORT_LOW
#define PIN9_PPORT PORT_HIGH
#elif (DIO_PIN9  == DIO_OUTPUT_HIGH)
#define PIN9_DIR   PORT_HIGH
#define PIN9_PPORT PORT_HIGH
#elif (DIO_PIN9  == DIO_OUTPUT_LOW)
#define PIN9_DIR   PORT_HIGH
#define PIN9_PPORT PORT_LOW
#else
#error "invalid pin9 configration"
#endif
#if (DIO_PIN10  == DIO_INPUT_HI)
#define PIN10_DIR   PORT_LOW
#define PIN10_PPORT PORT_LOW
#elif (DIO_PIN10  == DIO_INPUT_PU)
#define PIN10_DIR   PORT_LOW
#define PIN10_PPORT PORT_HIGH
#elif (DIO_PIN10  == DIO_OUTPUT_HIGH)
#define PIN10_DIR   PORT_HIGH
#define PIN10_PPORT PORT_HIGH
#elif (DIO_PIN10  == DIO_OUTPUT_LOW)
#define PIN10_DIR   PORT_HIGH
#define PIN10_PPORT PORT_LOW
#else
#error "invalid PIN10 configration"
#endif
#if (DIO_PIN11  == DIO_INPUT_HI)
#define PIN11_DIR   PORT_LOW
#define PIN11_PPORT PORT_LOW
#elif (DIO_PIN11  == DIO_INPUT_PU)
#define PIN11_DIR   PORT_LOW
#define PIN11_PPORT PORT_HIGH
#elif (DIO_PIN11  == DIO_OUTPUT_HIGH)
#define PIN11_DIR   PORT_HIGH
#define PIN11_PPORT PORT_HIGH
#elif (DIO_PIN11  == DIO_OUTPUT_LOW)
#define PIN11_DIR   PORT_HIGH
#define PIN11_PPORT PORT_LOW
#else
#error "invalid PIN11 configration"
#endif
#if (DIO_PIN12  == DIO_INPUT_HI)
#define PIN12_DIR   PORT_LOW
#define PIN12_PPORT PORT_LOW
#elif (DIO_PIN12  == DIO_INPUT_PU)
#define PIN12_DIR   PORT_LOW
#define PIN12_PPORT PORT_HIGH
#elif (DIO_PIN12  == DIO_OUTPUT_HIGH)
#define PIN12_DIR   PORT_HIGH
#define PIN12_PPORT PORT_HIGH
#elif (DIO_PIN12  == DIO_OUTPUT_LOW)
#define PIN12_DIR   PORT_HIGH
#define PIN12_PPORT PORT_LOW
#else
#error "invalid PIN12 configration"
#endif
#if (DIO_PIN13  == DIO_INPUT_HI)
#define PIN13_DIR   PORT_LOW
#define PIN13_PPORT PORT_LOW
#elif (DIO_PIN13  == DIO_INPUT_PU)
#define PIN13_DIR   PORT_LOW
#define PIN13_PPORT PORT_HIGH
#elif (DIO_PIN13  == DIO_OUTPUT_HIGH)
#define PIN13_DIR   PORT_HIGH
#define PIN13_PPORT PORT_HIGH
#elif (DIO_PIN13  == DIO_OUTPUT_LOW)
#define PIN13_DIR   PORT_HIGH
#define PIN13_PPORT PORT_LOW
#else
#error "invalid PIN13 configration"
#endif
#if (DIO_PIN14  == DIO_INPUT_HI)
#define PIN14_DIR   PORT_LOW
#define PIN14_PPORT PORT_LOW
#elif (DIO_PIN14  == DIO_INPUT_PU)
#define PIN14_DIR   PORT_LOW
#define PIN14_PPORT PORT_HIGH
#elif (DIO_PIN14  == DIO_OUTPUT_HIGH)
#define PIN14_DIR   PORT_HIGH
#define PIN14_PPORT PORT_HIGH
#elif (DIO_PIN14  == DIO_OUTPUT_LOW)
#define PIN14_DIR   PORT_HIGH
#define PIN14_PPORT PORT_LOW
#else
#error "invalid PIN14 configration"
#endif
#if (DIO_PIN15  == DIO_INPUT_HI)
#define PIN15_DIR   PORT_LOW
#define PIN15_PPORT PORT_LOW
#elif (DIO_PIN15  == DIO_INPUT_PU)
#define PIN15_DIR   PORT_LOW
#define PIN15_PPORT PORT_HIGH
#elif (DIO_PIN15  == DIO_OUTPUT_HIGH)
#define PIN15_DIR   PORT_HIGH
#define PIN15_PPORT PORT_HIGH
#elif (DIO_PIN15  == DIO_OUTPUT_LOW)
#define PIN15_DIR   PORT_HIGH
#define PIN15_PPORT PORT_LOW
#else
#error "invalid PIN15 configration"
#endif
#if (DIO_PIN16  == DIO_INPUT_HI)
#define PIN16_DIR   PORT_LOW
#define PIN16_PPORT PORT_LOW
#elif (DIO_PIN16  == DIO_INPUT_PU)
#define PIN16_DIR   PORT_LOW
#define PIN16_PPORT PORT_HIGH
#elif (DIO_PIN16  == DIO_OUTPUT_HIGH)
#define PIN16_DIR   PORT_HIGH
#define PIN16_PPORT PORT_HIGH
#elif (DIO_PIN16  == DIO_OUTPUT_LOW)
#define PIN16_DIR   PORT_HIGH
#define PIN16_PPORT PORT_LOW
#else
#error "invalid PIN16 configration"
#endif
#if (DIO_PIN17  == DIO_INPUT_HI)
#define PIN17_DIR   PORT_LOW
#define PIN17_PPORT PORT_LOW
#elif (DIO_PIN17  == DIO_INPUT_PU)
#define PIN17_DIR   PORT_LOW
#define PIN17_PPORT PORT_HIGH
#elif (DIO_PIN17  == DIO_OUTPUT_HIGH)
#define PIN17_DIR   PORT_HIGH
#define PIN17_PPORT PORT_HIGH
#elif (DIO_PIN17  == DIO_OUTPUT_LOW)
#define PIN17_DIR   PORT_HIGH
#define PIN17_PPORT PORT_LOW
#else
#error "invalid PIN17 configration"
#endif
#if (DIO_PIN18  == DIO_INPUT_HI)
#define PIN18_DIR   PORT_LOW
#define PIN18_PPORT PORT_LOW
#elif (DIO_PIN18  == DIO_INPUT_PU)
#define PIN18_DIR   PORT_LOW
#define PIN18_PPORT PORT_HIGH
#elif (DIO_PIN18  == DIO_OUTPUT_HIGH)
#define PIN18_DIR   PORT_HIGH
#define PIN18_PPORT PORT_HIGH
#elif (DIO_PIN18  == DIO_OUTPUT_LOW)
#define PIN18_DIR   PORT_HIGH
#define PIN18_PPORT PORT_LOW
#else
#error "invalid PIN18 configration"
#endif
#if (DIO_PIN19  == DIO_INPUT_HI)
#define PIN19_DIR   PORT_LOW
#define PIN19_PPORT PORT_LOW
#elif (DIO_PIN19  == DIO_INPUT_PU)
#define PIN19_DIR   PORT_LOW
#define PIN19_PPORT PORT_HIGH
#elif (DIO_PIN19  == DIO_OUTPUT_HIGH)
#define PIN19_DIR   PORT_HIGH
#define PIN19_PPORT PORT_HIGH
#elif (DIO_PIN19  == DIO_OUTPUT_LOW)
#define PIN19_DIR   PORT_HIGH
#define PIN19_PPORT PORT_LOW
#else
#error "invalid PIN19 configration"
#endif
#if (DIO_PIN20  == DIO_INPUT_HI)
#define PIN20_DIR   PORT_LOW
#define PIN20_PPORT PORT_LOW
#elif (DIO_PIN20  == DIO_INPUT_PU)
#define PIN20_DIR   PORT_LOW
#define PIN20_PPORT PORT_HIGH
#elif (DIO_PIN20  == DIO_OUTPUT_HIGH)
#define PIN20_DIR   PORT_HIGH
#define PIN20_PPORT PORT_HIGH
#elif (DIO_PIN20  == DIO_OUTPUT_LOW)
#define PIN20_DIR   PORT_HIGH
#define PIN20_PPORT PORT_LOW
#else
#error "invalid PIN20 configration"
#endif
#if (DIO_PIN21  == DIO_INPUT_HI)
#define PIN21_DIR   PORT_LOW
#define PIN21_PPORT PORT_LOW
#elif (DIO_PIN21  == DIO_INPUT_PU)
#define PIN21_DIR   PORT_LOW
#define PIN21_PPORT PORT_HIGH
#elif (DIO_PIN21  == DIO_OUTPUT_HIGH)
#define PIN21_DIR   PORT_HIGH
#define PIN21_PPORT PORT_HIGH
#elif (DIO_PIN21  == DIO_OUTPUT_LOW)
#define PIN21_DIR   PORT_HIGH
#define PIN21_PPORT PORT_LOW
#else
#error "invalid PIN21 configration"
#endif
#if (DIO_PIN22  == DIO_INPUT_HI)
#define PIN22_DIR   PORT_LOW
#define PIN22_PPORT PORT_LOW
#elif (DIO_PIN22  == DIO_INPUT_PU)
#define PIN22_DIR   PORT_LOW
#define PIN22_PPORT PORT_HIGH
#elif (DIO_PIN22  == DIO_OUTPUT_HIGH)
#define PIN22_DIR   PORT_HIGH
#define PIN22_PPORT PORT_HIGH
#elif (DIO_PIN22  == DIO_OUTPUT_LOW)
#define PIN22_DIR   PORT_HIGH
#define PIN22_PPORT PORT_LOW
#else
#error "invalid PIN22 configration"
#endif
#if (DIO_PIN23  == DIO_INPUT_HI)
#define PIN23_DIR   PORT_LOW
#define PIN23_PPORT PORT_LOW
#elif (DIO_PIN23  == DIO_INPUT_PU)
#define PIN23_DIR   PORT_LOW
#define PIN23_PPORT PORT_HIGH
#elif (DIO_PIN23  == DIO_OUTPUT_HIGH)
#define PIN23_DIR   PORT_HIGH
#define PIN23_PPORT PORT_HIGH
#elif (DIO_PIN23  == DIO_OUTPUT_LOW)
#define PIN23_DIR   PORT_HIGH
#define PIN23_PPORT PORT_LOW
#else
#error "invalid PIN23 configration"
#endif
#if (DIO_PIN24  == DIO_INPUT_HI)
#define PIN24_DIR   PORT_LOW
#define PIN24_PPORT PORT_LOW
#elif (DIO_PIN24  == DIO_INPUT_PU)
#define PIN24_DIR   PORT_LOW
#define PIN24_PPORT PORT_HIGH
#elif (DIO_PIN24  == DIO_OUTPUT_HIGH)
#define PIN24_DIR   PORT_HIGH
#define PIN24_PPORT PORT_HIGH
#elif (DIO_PIN24  == DIO_OUTPUT_LOW)
#define PIN24_DIR   PORT_HIGH
#define PIN24_PPORT PORT_LOW
#else
#error "invalid PIN24 configration"
#endif
#if (DIO_PIN25  == DIO_INPUT_HI)
#define PIN25_DIR   PORT_LOW
#define PIN25_PPORT PORT_LOW
#elif (DIO_PIN25  == DIO_INPUT_PU)
#define PIN25_DIR   PORT_LOW
#define PIN25_PPORT PORT_HIGH
#elif (DIO_PIN25  == DIO_OUTPUT_HIGH)
#define PIN25_DIR   PORT_HIGH
#define PIN25_PPORT PORT_HIGH
#elif (DIO_PIN25  == DIO_OUTPUT_LOW)
#define PIN25_DIR   PORT_HIGH
#define PIN25_PPORT PORT_LOW
#else
#error "invalid PIN25 configration"
#endif
#if (DIO_PIN26  == DIO_INPUT_HI)
#define PIN26_DIR   PORT_LOW
#define PIN26_PPORT PORT_LOW
#elif (DIO_PIN26  == DIO_INPUT_PU)
#define PIN26_DIR   PORT_LOW
#define PIN26_PPORT PORT_HIGH
#elif (DIO_PIN26  == DIO_OUTPUT_HIGH)
#define PIN26_DIR   PORT_HIGH
#define PIN26_PPORT PORT_HIGH
#elif (DIO_PIN26  == DIO_OUTPUT_LOW)
#define PIN26_DIR   PORT_HIGH
#define PIN26_PPORT PORT_LOW
#else
#error "invalid PIN26 configration"
#endif
#if (DIO_PIN27  == DIO_INPUT_HI)
#define PIN27_DIR   PORT_LOW
#define PIN27_PPORT PORT_LOW
#elif (DIO_PIN27  == DIO_INPUT_PU)
#define PIN27_DIR   PORT_LOW
#define PIN27_PPORT PORT_HIGH
#elif (DIO_PIN27  == DIO_OUTPUT_HIGH)
#define PIN27_DIR   PORT_HIGH
#define PIN27_PPORT PORT_HIGH
#elif (DIO_PIN27  == DIO_OUTPUT_LOW)
#define PIN27_DIR   PORT_HIGH
#define PIN27_PPORT PORT_LOW
#else
#error "invalid PIN27 configration"
#endif
#if (DIO_PIN28  == DIO_INPUT_HI)
#define PIN28_DIR   PORT_LOW
#define PIN28_PPORT PORT_LOW
#elif (DIO_PIN28  == DIO_INPUT_PU)
#define PIN28_DIR   PORT_LOW
#define PIN28_PPORT PORT_HIGH
#elif (DIO_PIN28  == DIO_OUTPUT_HIGH)
#define PIN28_DIR   PORT_HIGH
#define PIN28_PPORT PORT_HIGH
#elif (DIO_PIN28  == DIO_OUTPUT_LOW)
#define PIN28_DIR   PORT_HIGH
#define PIN28_PPORT PORT_LOW
#else
#error "invalid PIN28 configration"
#endif
#if (DIO_PIN29  == DIO_INPUT_HI)
#define PIN29_DIR   PORT_LOW
#define PIN29_PPORT PORT_LOW
#elif (DIO_PIN29  == DIO_INPUT_PU)
#define PIN29_DIR   PORT_LOW
#define PIN29_PPORT PORT_HIGH
#elif (DIO_PIN29  == DIO_OUTPUT_HIGH)
#define PIN29_DIR   PORT_HIGH
#define PIN29_PPORT PORT_HIGH
#elif (DIO_PIN29  == DIO_OUTPUT_LOW)
#define PIN29_DIR   PORT_HIGH
#define PIN29_PPORT PORT_LOW
#else
#error "invalid PIN29 configration"
#endif
#if (DIO_PIN30  == DIO_INPUT_HI)
#define PIN30_DIR   PORT_LOW
#define PIN30_PPORT PORT_LOW
#elif (DIO_PIN30  == DIO_INPUT_PU)
#define PIN30_DIR   PORT_LOW
#define PIN30_PPORT PORT_HIGH
#elif (DIO_PIN30  == DIO_OUTPUT_HIGH)
#define PIN30_DIR   PORT_HIGH
#define PIN30_PPORT PORT_HIGH
#elif (DIO_PIN30  == DIO_OUTPUT_LOW)
#define PIN30_DIR   PORT_HIGH
#define PIN30_PPORT PORT_LOW
#else
#error "invalid PIN30 configration"
#endif
#if (DIO_PIN31  == DIO_INPUT_HI)
#define PIN31_DIR   PORT_LOW
#define PIN31_PPORT PORT_LOW
#elif (DIO_PIN31  == DIO_INPUT_PU)
#define PIN31_DIR   PORT_LOW
#define PIN31_PPORT PORT_HIGH
#elif (DIO_PIN31  == DIO_OUTPUT_HIGH)
#define PIN31_DIR   PORT_HIGH
#define PIN31_PPORT PORT_HIGH
#elif (DIO_PIN31  == DIO_OUTPUT_LOW)
#define PIN31_DIR   PORT_HIGH
#define PIN31_PPORT PORT_LOW
#else
#error "invalid PIN31 configration"
#endif
#if (DIO_PIN32  == DIO_INPUT_HI)
#define PIN32_DIR   PORT_LOW
#define PIN32_PPORT PORT_LOW
#elif (DIO_PIN32  == DIO_INPUT_PU)
#define PIN32_DIR   PORT_LOW
#define PIN32_PPORT PORT_HIGH
#elif (DIO_PIN32  == DIO_OUTPUT_HIGH)
#define PIN32_DIR   PORT_HIGH
#define PIN32_PPORT PORT_HIGH
#elif (DIO_PIN32  == DIO_OUTPUT_LOW)
#define PIN32_DIR   PORT_HIGH
#define PIN32_PPORT PORT_LOW
#else
//#error "invalid PIN32 configration"
#endif


#endif


/**
 * \brief to initialize the ports configrations
 * 
 * \param void
 * 
 * \return void
 */
void PORT_voidInit(void){
#if (choosen_Mode == PRECOMPILER)
DDRA = CONCAT(PIN7_DIR, PIN6_DIR, PIN5_DIR, PIN4_DIR, PIN3_DIR, PIN2_DIR, PIN1_DIR, PIN0_DIR);
PORTA = CONCAT(PIN7_PPORT, PIN6_PPORT, PIN5_PPORT, PIN4_PPORT, PIN3_PPORT, PIN2_PPORT, PIN1_PPORT, PIN0_PPORT);
#if (NUM_OF_PORTS == TWO_PORTS || NUM_OF_PORTS == THREE_PORTS || NUM_OF_PORTS == FOUR_PORTS  )
DDRB = CONCAT(PIN15_DIR, PIN14_DIR, PIN13_DIR, PIN12_DIR, PIN11_DIR, PIN10_DIR, PIN9_DIR, PIN8_DIR);
PORTB = CONCAT(PIN15_PPORT, PIN14_PPORT, PIN13_PPORT, PIN12_PPORT, PIN11_PPORT, PIN10_PPORT, PIN9_PPORT, PIN8_PPORT);
#endif
#if (NUM_OF_PORTS == THREE_PORTS || NUM_OF_PORTS == FOUR_PORTS  )
DDRC = CONCAT(PIN23_DIR, PIN22_DIR, PIN21_DIR, PIN20_DIR, PIN19_DIR, PIN18_DIR, PIN17_DIR, PIN16_DIR);
PORTC = CONCAT(PIN23_PPORT, PIN22_PPORT, PIN21_PPORT, PIN20_PPORT, PIN19_PPORT, PIN18_PPORT, PIN17_PPORT, PIN16_PPORT);
#endif
#if (NUM_OF_PORTS == FOUR_PORTS  )
DDRD = CONCAT(PIN31_DIR, PIN30_DIR, PIN29_DIR, PIN28_DIR, PIN27_DIR, PIN26_DIR, PIN25_DIR, PIN24_DIR);
PORTD = CONCAT(PIN31_PPORT, PIN30_PPORT, PIN29_PPORT, PIN28_PPORT, PIN27_PPORT, PIN26_PPORT, PIN25_PPORT, PIN24_PPORT);
#endif
#endif
#if (choosen_Mode == POSTCOMPILER)
u8 i = 0;
extern DIO_enumConfig_t DIO_Pin_Cfg[NUM_OF_PINS*NUM_OF_PORTS];
PORT_enumPorts_t Loc_u8PortNum ;
u8 Loc_u8PinNum;
for(i=0; i < NUM_OF_PINS*NUM_OF_PORTS; i++){
	/* validation*/
	//if(DIO_Pin_Cfg[i] > DIO_enumInputExternalPD){
		////Ret_enumErrorState = DIO_enumWrongConfig;
	//}
	//else{
		Loc_u8PortNum = (PORT_enumPorts_t) (i/NUM_OF_PINS);
		Loc_u8PinNum = i%NUM_OF_PINS;
		switch (Loc_u8PortNum)
		{
			case PORT_enumPORTA:
			{
			switch (DIO_Pin_Cfg[i]){
				case DIO_enumOutputHigh:
				SET_BIT(DDRA, Loc_u8PinNum);
				SET_BIT(PORTA, Loc_u8PinNum);
				break;
				case DIO_enumOutputLow:
				SET_BIT(DDRA, Loc_u8PinNum);
				CLR_BIT(PORTA, Loc_u8PinNum);
				break;
				case DIO_enumInputInternalPU:
				CLR_BIT(DDRA, Loc_u8PinNum);
				SET_BIT(PORTA, Loc_u8PinNum);
				break;
				case DIO_enumInputExternalPD:
				CLR_BIT(DDRA, Loc_u8PinNum);
				CLR_BIT(PORTA, Loc_u8PinNum);
				break;
				default:
				break;
			}
}
			break;
			case PORT_enumPORTB:
			switch (DIO_Pin_Cfg[i]){
				case DIO_enumOutputHigh:
				SET_BIT(DDRB, Loc_u8PinNum);
				SET_BIT(PORTB, Loc_u8PinNum);
				break;
				case DIO_enumOutputLow:
				SET_BIT(DDRB, Loc_u8PinNum);
				CLR_BIT(PORTB, Loc_u8PinNum);
				break;
				case DIO_enumInputInternalPU:
				CLR_BIT(DDRB, Loc_u8PinNum);
				SET_BIT(PORTB, Loc_u8PinNum);
				break;
				case DIO_enumInputExternalPD:
				CLR_BIT(DDRB, Loc_u8PinNum);
				CLR_BIT(PORTB, Loc_u8PinNum);
				break;
				default:
				break;
			}
			break;
			case PORT_enumPORTC:
			switch (DIO_Pin_Cfg[i]){
				case DIO_enumOutputHigh:
				SET_BIT(DDRC, Loc_u8PinNum);
				SET_BIT(PORTC, Loc_u8PinNum);
				break;
				case DIO_enumOutputLow:
				SET_BIT(DDRC, Loc_u8PinNum);
				CLR_BIT(PORTC, Loc_u8PinNum);
				break;
				case DIO_enumInputInternalPU:
				CLR_BIT(DDRC, Loc_u8PinNum);
				SET_BIT(PORTC, Loc_u8PinNum);
				break;
				case DIO_enumInputExternalPD:
				CLR_BIT(DDRC, Loc_u8PinNum);
				CLR_BIT(PORTC, Loc_u8PinNum);
				break;
				default:
				break;
			}
			break;
			case PORT_enumPORTD:
			switch (DIO_Pin_Cfg[i]){
				case DIO_enumOutputHigh:
				SET_BIT(DDRD, Loc_u8PinNum);
				SET_BIT(PORTD, Loc_u8PinNum);
				break;
				case DIO_enumOutputLow:
				SET_BIT(DDRD, Loc_u8PinNum);
				CLR_BIT(PORTD, Loc_u8PinNum);
				break;
				case DIO_enumInputInternalPU:
				CLR_BIT(DDRD, Loc_u8PinNum);
				SET_BIT(PORTD, Loc_u8PinNum);
				break;
				case DIO_enumInputExternalPD:
				CLR_BIT(DDRD, Loc_u8PinNum);
				CLR_BIT(PORTD, Loc_u8PinNum);
				break;
				default:
				break;
			}
			break;
			default:
			break;
			
		}
	//}
}

#endif
}
















///************************************************************************* FOUR_PORTS *************************************************************************/
//#if (NUM_OF_PORTS ==  FOUR_PORTS)
//DIO_enumError_t DIO_enumSetPortConfig(DIO_enumPorts_t Copy_enumPortNum,DIO_enumConfig_t Copy_enumConfig){
	//DIO_enumError_t Ret_enumErrorState = DIO_enumNullPointer;/* initialization is not OK */
	///* validation */
	//if(Copy_enumPortNum > DIO_enumPortD){
		//Ret_enumErrorState = DIO_enumWrongPort;
	//}
	//else if(Copy_enumConfig > DIO_enumInputExternalPD){
		//Ret_enumErrorState = DIO_enumWrongConfig;
	//}
	///* CODE */
	//else{
		//Ret_enumErrorState = DIO_enumOk;
		///* choose the port */
		//switch (Copy_enumPortNum){
			//case DIO_enumPortA:/*portA*/
			//switch(Copy_enumConfig){/*switch for config*/
				//case DIO_enumOutput:/*PORTA output*/
				//DDRA = 0xFF;
				//break;
				//case DIO_enumInputInternalPU:/*PORTA input_ipu*/
				//DDRA = 0x00;
				//PORTA = 0xFF;
				//break;
				//case DIO_enumInputExternalPD:/*PORTA input_epd*/
				//DDRA = 0x00;
				//PORTA = 0x00;
				//break;
				//default:
				//break;
			//}
			//break;
			//case DIO_enumPortB:/*portB*/
			//switch(Copy_enumConfig){/*switch for config*/
				//case DIO_enumOutput:/*PORTB output*/
				//DDRB = 0xFF;
				//break;
				//case DIO_enumInputInternalPU:/*PORTB input_ipu*/
				//DDRB = 0x00;
				//PORTB = 0xFF;
				//break;
				//case DIO_enumInputExternalPD:/*PORTB input_epd*/
				//DDRB = 0x00;
				//PORTB = 0x00;
				//break;
				//default:
				//break;
			//}
			//break;
			//case DIO_enumPortC:/*portC*/
			//switch(Copy_enumConfig){/*switch for config*/
				//case DIO_enumOutput:/*PORTC output*/
				//DDRC = 0xFF;
				//break;
				//case DIO_enumInputInternalPU:/*PORTC input_ipu*/
				//DDRC = 0x00;
				//PORTC = 0xFF;
				//break;
				//case DIO_enumInputExternalPD:/*PORTC input_epd*/
				//DDRC = 0x00;
				//PORTC = 0x00;
				//break;
				//default:
				//break;
			//}
			//break;
			//case DIO_enumPortD:/*portD*/
			//switch(Copy_enumConfig){/*switch for config*/
				//case DIO_enumOutput:/*PORTD output*/
				//DDRD = 0xFF;
				//break;
				//case DIO_enumInputInternalPU:/*PORTD input_ipu*/
				//DDRD = 0x00;
				//PORTD = 0xFF;
				//break;
				//case DIO_enumInputExternalPD:/*PORTD input_epd*/
				//DDRD = 0x00;
				//PORTD = 0x00;
				//break;
				//default:
				//break;
			//}
			//break;
			//default:
			//break;
		//}
		//
	//}
	//return Ret_enumErrorState;
//}
//DIO_enumError_t DIO_enumSetPort(DIO_enumPorts_t Copy_enumPortNum,DIO_enumLogicState_t Copy_enumLogicState){
	//DIO_enumError_t Ret_enumErrorState = DIO_enumNullPointer;/* initialization is not OK */
	///* validation */
	//if(Copy_enumPortNum > DIO_enumPortD){
		//Ret_enumErrorState = DIO_enumWrongPort;
	//}
	//else if(Copy_enumLogicState > DIO_enumLogicHigh){
		//Ret_enumErrorState = DIO_enumWrongConfig;
	//}
	///*	CODE	*/
	//else{
		//Ret_enumErrorState = DIO_enumOk;
		//switch(Copy_enumPortNum){
			//case DIO_enumPortA:
			//switch(Copy_enumLogicState){
				//case DIO_enumLogicHigh:
				//PORTA = 0xFF;
				//break;
				//case DIO_enumLogicLow:
				//PORTA = 0x00;
				//break;
				//default:
				//break;
			//}
			//break;
			//case DIO_enumPortB:
			//switch(Copy_enumLogicState){
				//case DIO_enumLogicHigh:
				//PORTB = 0xFF;
				//break;
				//case DIO_enumLogicLow:
				//PORTB = 0x00;
				//break;
				//default:
				//break;
			//}
			//break;
			//case DIO_enumPortC:
			//switch(Copy_enumLogicState){
				//case DIO_enumLogicHigh:
				//PORTC = 0xFF;
				//break;
				//case DIO_enumLogicLow:
				//PORTC = 0x00;
				//break;
				//default:
				//break;
			//}
			//break;
			//case DIO_enumPortD:
			//switch(Copy_enumLogicState){
				//case DIO_enumLogicHigh:
				//PORTD = 0xFF;
				//break;
				//case DIO_enumLogicLow:
				//PORTD = 0x00;
				//break;
				//default:
				//break;
			//}
			//break;
			//default:
			//break;
		//}
	//}
	//
	//return Ret_enumErrorState;
//}
