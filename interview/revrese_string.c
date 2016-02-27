#include <stdio.h>

int main()
{
    int i=-1,j=0;
    char str[50];
    char rev[50];
    printf("Enter String:");
    scanf("%s",&str);
    //printf("String is %c",str[0]);
    /*for(i=0;str[i]!='\0';i++)
    {
        printf("String is %c\n",str[i]);
    }*/
    while(str[++i]!='\0')
    {
        while(i>=0)
        {
            rev[j++] = str[--i];
        }
    }
    rev[j]='\0';
    printf("Reverse of string is : %s",rev);

}
