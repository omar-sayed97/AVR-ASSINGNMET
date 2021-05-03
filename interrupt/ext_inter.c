/*
 * ext_inter.c
 *
 * Created: 4/21/2021 11:39:25 PM
 *  Author: omar.sayed
 */ 

#include "ext_inter.h"


void Set_global_interrupt(void)
{
	#if GLOBAL_INTERRUPT == GLOBAL_INTERRUPT_ENABLE
	SET_BIT(SREG,7);
	
	#elif GLOBAL_INTERRUPT == GLOBAL_INTERRUPT_DISABLE
	CLR_BIT(SREG,7);
	
	
	#endif
}

void External_INT0_INit(void)
{
	//ENABLE glob intert
	Set_global_interrupt();
	
	//ENABL PERFL INT
	SET_BIT(GICR,6);
	
	#if EXT_INT0_TRIGGER  ==  TRIGGER_RISING
	  SET_BIT(MCUCR,0);
	  SET_BIT(MCUCR,1);
	
	#elif EXT_INT0_TRIGGER  == TRIGGER_FALLING
	 CLR_BIT(MCUCR,0);
	 SET_BIT(MCUCR,1);
	
	#elif EXT_INT0_TRIGGER   == TRIGGER_ANY_LOGICAL_CHANGE
	 SET_BIT(MCUCR,0);
	 CLR_BIT(MCUCR,1);

	#elif EXT_INT0_TRIGGER  == TRIGGER_low_level
	 CLR_BIT(MCUCR,0);
	 CLR_BIT(MCUCR,1);
	 
	
	#endif
	
}
//assi
void External_INT1_init(void)
{
	Set_global_interrupt();
	
	SET_BIT(GICR,7);
	
	#if EXT_INT0_TRIGGER  ==  TRIGGER_RISING
	SET_BIT(MCUCR,2);
	SET_BIT(MCUCR,3);
	
	#elif EXT_INT0_TRIGGER  == TRIGGER_FALLING
	CLR_BIT(MCUCR,2);
	SET_BIT(MCUCR,3);
	
	#elif EXT_INT0_TRIGGER   == TRIGGER_ANY_LOGICAL_CHANGE
	SET_BIT(MCUCR,2);
	CLR_BIT(MCUCR,3);

	#elif EXT_INT0_TRIGGER  == TRIGGER_low_level
	CLR_BIT(MCUCR,2);
	CLR_BIT(MCUCR,3);
	
	
	#endif
}
//ur assinment
void EXT_INT2_Init(void)
{
	Set_global_interrupt();
	
	SET_BIT(GICR,5);
	
	SET_BIT(MCUCSR,6);
}