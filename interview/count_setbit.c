#include <stdio.h>

int main()
{
    int i,count=0;
    unsigned int BIT;
    unsigned char CL= 0x1F;	//Clear

    for(i=0; i<0xF; i++)
    {
        BIT=CL&(1<<i);
        if(BIT)
        {
            count++;

        }

    }
    printf("No of set Bits %d\n",count);
    return 0;
}
