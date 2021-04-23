/*
 */

#include <avr/io.h>

int main(void)
{
DDRB|=(1<<PB0);
DDRD&=~(1<<PD0);
PORTD|=(1<<PD0);
DDRD&=~(1<<PD4);
PORTD|=(1<<PD4);
    // Insert code

    while(1){

         if((!(PIND&(1<<PD0)))&&(!(PIND&(1<<PD4))))
         {
             PORTB|=(1<<PB0);
         }
         else{
            PORTB&=~(1<<PB0);
         }

    }


    return 0;
}
