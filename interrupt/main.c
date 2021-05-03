/*
 * interrupt.c
 *
 * Created: 4/21/2021 11:33:20 PM
 * Author : omar.sayed
 */ 

#include "ext_inter.h"
#include "LED.h"
#include "avr/interrupt.h"


int main(void)
{
	
	
   LEDO_init();
   //External_INT0_INit();
   EXT_INT2_Init();
   
    while (1) 
    {
    }
}

ISR(INT2_vect)
{
	LED0_TOGGLE();
	
}