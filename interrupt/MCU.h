/*
 * MCU.h
 *
 * Created: 4/7/2021 10:52:20 PM
 *  Author: omar.sayed
 */ 


#ifndef MCU_H_
#define MCU_H_

#define    PORTA    *((volatile uint8*) 0x3B)
#define    DDRA     *((volatile uint8*) 0x3A)
#define    PINA     *((volatile uint8*) 0x39)

#define    PORTB    *((volatile uint8*) 0x38)
#define    DDRB     *((volatile uint8*) 0x37)
#define    PINB     *((volatile uint8*) 0x36)

#define    PORTC    *((volatile uint8*) 0x35)
#define    DDRC     *((volatile uint8*) 0x34)
#define    PINC     *((volatile uint8*) 0x33)

#define    PORTD    *((volatile uint8*) 0x32)
#define    DDRD     *((volatile uint8*) 0x31)
#define    PIND     *((volatile uint8*) 0x30)

/******************************  Ext intrr*/

#define  SREG (*(volatile uint8*)(0x5F))
#define  GICR (*(volatile uint8*)(0x5B))
#define  GIFR (*(volatile uint8*)(0x5A))
#define  MCUCR (*(volatile uint8*)(0x55))
#define  MCUCSR (*(volatile uint8*)(0x54))




/*
# define DDRC  (*(volatile char*)(0x34))
# define PORTC (*(volatile char*)(0x35))
# define PINC (*(volatile char*)(0x33))

# define DDRA  (*(volatile char*)(0x3A))
# define PORTA (*(volatile char*)(0x3B))
# define PINA (*(volatile char*)(0x39))

# define DDRB  (*(volatile char*)(0x37))
# define PORTB (*(volatile char*)(0x38))
# define PINB (*(volatile char*)(0x36))

# define DDRD  (*(volatile char*)(0x31))
# define PORTD (*(volatile char*)(0x32))
# define PIND (*(volatile char*)(0x30))
*/






#endif /* MCU_H_ */