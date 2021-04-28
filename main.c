/*
 */

#include <avr/io.h>

int main(void)
{
    Led_Actuator();

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
