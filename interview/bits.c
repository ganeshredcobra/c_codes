#include <stdio.h>

int main()
{
    unsigned char Num= 0x0;  //Set
    unsigned char CL= 0xF;	//Clear
    unsigned char TL= 0xF;  //Toggle
    unsigned char GT= 0x8;  //Get
    unsigned char GTV;  // Variable for Get
    printf("Number %X\n",Num);
    printf("CL %X\n",CL);      
    printf("TL %X\n",TL);    

    Num |= 1 << 2;

    printf("Number %X\n",Num);
    CL &= ~(1 << 3);
    printf("CL %X\n",CL);
    TL=TL^(1<<0);
    printf("TL %X\n",TL);
    TL=TL^(1<<0);
    printf("TL %X\n",TL);
    GTV = GT&(1<<3);
    printf("GTV %X\n",GTV);
    return 0;
}
