

#include <avr/io.h>
#include"ReadADC.h"

int main(void)
{
    InitADC();
    uint16_t temp;

    while(1){
        temp = ReadADC(0);
    }
    return 0;
}
