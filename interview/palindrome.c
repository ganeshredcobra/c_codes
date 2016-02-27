#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,len,pflag=1;
    char str[50];
    printf("Enter any string : ");
    scanf("%s",str);
    len=strlen(str);
    for(i=0, j=len-1; i<j ; i++, j--)
    {
        if(str[i]!=str[j])
        {
            pflag=0;
            printf("Break\n");
            break;
        }
    }
    if(pflag)
        printf("String is palindrome\n");
    else
        printf("string is not palindrome\n");
    return 0;
}
