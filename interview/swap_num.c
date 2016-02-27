#include <stdio.h>

int main()
{
    int x,y,temp;
    printf("Enter number 1:\n");
    scanf("%d",&x);
    printf("Enter number 2:\n");
    scanf("%d",&y);
    printf("Before swapping X is %d and Y is %d \n",x,y);

    temp=x;
    x=y;
    y=temp;
    printf("After swapping X is %d and Y is %d \n",x,y);
    return 0;

}
