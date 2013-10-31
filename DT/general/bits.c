/*
 * =====================================================================================
 *
 *       Filename:  bits.c
 *
 *    Description:  Change case using bit manipulation
 *
 *        Version:  1.0
 *        Created:  Friday 16 August 2013 01:52:55  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ganesh.H (), ganeshredcobra@gmail.com
 *        Company:  SPACE
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
char *ChangeCase(char *string);
char PrintStr(char *string);

int main(void)
{
    char Str[20];
    char *conv = NULL;
    printf("Enter any string : ");
    scanf("%s",Str);
    conv = ChangeCase(Str);
    PrintStr(conv);
    return 0;
}

char *ChangeCase(char *string)
{
    char *converted = NULL;
    int  i = 0;
    converted = (char*)malloc(sizeof(char) * strlen(string) + 1);
    for(i=0; i<strlen(string); i++)
    {
        if(string[i] >='a' && string[i] <='z')
        {
            converted[i] = (char) (string[i] & 65503);//65 503 (decimal) = 1111 1111 1101 1111 (binary)
        }
	else if(string[i] >= 'A' && string[i] <= 'Z')
        {
            converted[i] = (char) (string[i] | 32);//32 (decimal) = 0000 0000 0010 0000 (binary)
        }
        else
        {
            converted[i] = string[i];
        }
    }
    converted[i] = '\0';
    return converted;
}
char PrintStr(char *string)
{
	if(string[0]>='a' && string[0]<='z')
	{
		printf("\nThe string in lowercase is : %s \n",string);
	}	
	else if(string[0]>='A' && string[0]<='Z')
	{
		printf("\nThe string in Uppercase is : %s \n",string);
	}
	else
	{
		printf("\nThe given input is not a sting \n");
	}
	
}
