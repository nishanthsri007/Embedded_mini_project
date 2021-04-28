#include <avr/io.h>
#include"ReadADC.h"

void InitADC()
{

    ADMUX=(1<<REFS0);               // For Aref = AVcc
    ADCSRA=(1<<ADEN)|(7<<ADPS0);    // Enable ADC with Prescalar = Fcpu/128
}

uint16_t ReadADC(uint8_t ch)        // Select ADC channels ch must be 0-7
{
    ADMUX&=0xf8;
    ch=ch&0b00000111;
    ADMUX|=ch;
    ADCSRA|=(1<<ADSC);              // Start single conversion

    while(!(ADCSRA&(1<<ADIF)));

        ADCSRA|=(1<<ADIF);          // Clear ADIF by writing one to it

        return(ADC);
}
