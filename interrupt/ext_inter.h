/*
 * ext_inter.h
 *
 * Created: 4/21/2021 11:39:53 PM
 *  Author: omar.sayed
 */ 


#ifndef EXT_INTER_H_
#define EXT_INTER_H_
#include "ext_inter.cfg.h"
#include "BIT_Math.h"
#include "MCU.h"
#include "STD.h"

#define  GLOBAL_INTERRUPT_ENABLE  0
#define  GLOBAL_INTERRUPT_DISABLE  1
#define  TRIGGER_RISING   0
#define  TRIGGER_FALLING  1
#define  TRIGGER_ANY_LOGICAL_CHANGE 2
#define  TRIGGER_low_level   3


void Set_global_interrupt(void);

void External_INT0_INit(void);

void External_INT1_init(void);

void EXT_INT2_Init(void);






#endif /* EXT_INTER_H_ */