#include <avr/io.h>
void Led_Actuator()
{

DDRB|=(1<<PB0);       // Set B0=1 for LED
DDRD&=~(1<<PD0);      // Clear bit
PORTD|=(1<<PD0);      // Set D0=1 for switch
DDRD&=~(1<<PD4);      // Clear bit
PORTD|=(1<<PD4);      // Set D4=1 for switch

}
