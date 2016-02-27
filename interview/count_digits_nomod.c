#include <stdio.h>

int main()
{
    int remainder,i,sum=0;
    char number[100];
    printf("Enter number :");
    scanf("%s",number);
    printf("Number is %s\n",number);
    for(i=0; number[i]!='\0'; i++)
    {
        sum =sum + (number[i] - '0');
    }
    printf("Sum is %d\n",sum);
    return 0;
}
