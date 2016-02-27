#include <stdio.h>

int SwapNibbles(unsigned char x)
{
    return( (x & 0x0F)<<4|(x & 0xF0)>>4 );
}

int main()
{
    printf("Swapped Val is %X \n",SwapNibbles(0xFD));
    return 0;
}
