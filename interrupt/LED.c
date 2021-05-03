/*
 * LED.C
 *
 * Created: 4/12/2021 8:35:05 PM
 *  Author: omar.sayed
 */ 
#include "LED.h"

void LEDO_init(void){
	//SET_BIT(DDRC ,2);
	DIO_SetPinDir(DIO_PORTC,DIO_PIN2,DIO_PIN_OUTPUT);
	
}

void LED0_ON(void){
	DIO_SetPinVal(DIO_PORTC,DIO_PIN2,DIO_PIN_HIGH);
}
void LED0_OFF(void){
	//CLR_BIT(PORTC,2);
	DIO_SetPinVal(DIO_PORTC,DIO_PIN2,DIO_PIN_LOW);
}
void LED0_TOGGLE(void){
	//Toggle_BIT(PORTC,2);
	DIO_TogglePin(DIO_PORTC,DIO_PIN2);
}
