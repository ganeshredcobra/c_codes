#include <stdio.h>

int main()
{
    int remainder,t,number,sum=0;
    printf("Enter number :");
    scanf("%d",&number);
    printf("Number is %d\n",number);
    t=number;

    while(t!=0)
    {
        remainder = t%10;
        sum = sum+remainder;
        t=t/10;
    }

    printf("Sum is %d\n",sum);
}
