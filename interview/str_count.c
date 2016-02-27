#include <stdio.h>
#include <string.h>

int main()
{
    int i,count=0;
    char str[50];
    printf("Enter any string : ");
    scanf("%s",str);
    for(i=0; str[i]!='\0'; i++)
    {
        count++;
    }
    printf("The length of the string is %d\n",count);
    return 0;
}
