/*
 * DIO.c
 *
 * Created: 4/12/2021 10:22:05 PM
 *  Author: omar.sayed
 */ 
#include "DIO.h"



void DIO_SetPortDir(uint8 Port,uint8 dir){
	switch (Port){
		case DIO_PORTA : 
		DDRA = dir;
		break;
		
		case  DIO_PORTB :
		DDRB = dir;
		break;
		
		case  DIO_PORTC :
		DDRC = dir;
		break;
		
		case DIO_PORTD :
		DDRD = dir;
		break;
		
		default:
		break;
	}
}
void DIO_SetPinDir(uint8 Port, uint8 pin ,uint8 dir){
	switch(dir){
		case DIO_PIN_OUTPUT:
		
		switch(Port){
			case DIO_PORTA:
		   SET_BIT(DDRA,pin);
		   break;
		   case DIO_PORTB:
		   SET_BIT(DDRB,pin);
		   break;
		   case DIO_PORTC:
		   SET_BIT(DDRC,pin);
		   break;
		   case DIO_PORTD:
		   SET_BIT(DDRD,pin);
		   break;
		}
		case DIO_PIN_INPUT:
		
		switch(Port){
			case DIO_PORTA:
			CLR_BIT(DDRA,pin);
			break;
			case DIO_PORTB:
			CLR_BIT(DDRB,pin);
			break;
			case DIO_PORTC:
			CLR_BIT(DDRC,pin);
			break;
			case DIO_PORTD:
			CLR_BIT(DDRD,pin);
			break;
			
		}
		break;
	}
}

void DIO_SetPortVal(uint8 Port,uint8 val){
	switch (Port){
		case DIO_PORTA :
		PORTA = val;
		break;
		
		case  DIO_PORTB :
		PORTB = val;
		break;
		
		case  DIO_PORTC :
		PORTC = val;
		break;
		
		case DIO_PORTD :
		PORTD = val;
		break;
		
		default:
		break;
	}
	
	
}
void DIO_SetPinVal(uint8 Port, uint8 pin ,uint8 val){
	switch(val){
		case DIO_PIN_HIGH:
		
		switch(Port){
			case DIO_PORTA:
			SET_BIT(PORTA,pin);
			break;
			case DIO_PORTB:
			SET_BIT(PORTB,pin);
			break;
			case DIO_PORTC:
			SET_BIT(PORTC,pin);
			break;
			case DIO_PORTD:
			SET_BIT(PORTD,pin);
			break;
		}
		case DIO_PIN_LOW:
		
		switch(Port){
			case DIO_PORTA:
			CLR_BIT(PORTA,pin);
			break;
			case DIO_PORTB:
			CLR_BIT(PORTB,pin);
			break;
			case DIO_PORTC:
			CLR_BIT(PORTC,pin);
			break;
			case DIO_PORTD:
			CLR_BIT(PORTD,pin);
			break;
			
		}
		break;
	}
	
}

uint8 DIO_GetPoetVal(uint8 Port){
	uint8 val;
	switch (Port){
		case DIO_PORTA :
		val = PINA;
		break;
		
		case  DIO_PORTB :
		val = PINB;
		break;
		
		case  DIO_PORTC :
		val = PINC;
		break;
		
		case DIO_PORTD :
		val = PIND;
		break;
		
		default:
		break;

	}
	return val;
}
void DIO_TogglePort(uint8 Port){
	switch (Port){
		case DIO_PORTA :
		DDRA ^= 0xff;
		break;
		
		case  DIO_PORTB :
		DDRB ^= 0xff;
		break;
		
		case  DIO_PORTC :
		DDRC ^= 0xff;
		break;
		
		case DIO_PORTD :
		DDRD ^= 0xff;
		break;
	}
	}

uint8 DIO_GetPinVal(uint8 Port,uint8 pin){
	uint8 val =0;
	
	switch(Port){
		case DIO_PORTA :
		val = GET_BIT(PINA,pin);
		break;
		case DIO_PORTB :
		val = GET_BIT(PINB,pin);
		break;
		case DIO_PORTC :
		val = GET_BIT(PINC,pin);
		break;
		case DIO_PORTD :
		val = GET_BIT(PIND,pin);
		break;
	}
	return val;
}

void DIO_TogglePin(uint8 Port,uint8 Pin){
	switch(Port){
		case DIO_PORTA :
		Toggle_BIT(PORTA,Pin);
		break;
		case DIO_PORTB:
		Toggle_BIT(PORTB,Pin);
		break;
		case DIO_PORTC :
		Toggle_BIT(PORTC,Pin);
		break;
		case DIO_PORTD :
		Toggle_BIT(PORTD,Pin);
		break;
		
		default:
		break;
	}
}