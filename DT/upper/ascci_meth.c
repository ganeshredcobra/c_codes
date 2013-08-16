/*
 * =====================================================================================
 *
 *       Filename:  ascci_meth.c
 *
 *    Description:  Ascci Method
 *
 *        Version:  1.0
 *        Created:  Friday 16 August 2013 12:56:15  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ganesh.H (), ganeshredcobra@gmail.com
 *        Company:  SPACE
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>

char ChngCase(char *Str);
char PrintStr(char *Str);
int i;
int main()
{
	char Str[20];
	printf("Enter any string : ");
	scanf("%s",Str);
	ChngCase(Str);		
	PrintStr(Str);	
	return 0;
}
char ChngCase(char *Str)
{
	for(i=0;i<=strlen(Str);i++)
	        {
        	       		
			if(Str[i]>='a' && Str[i]<='z')
                	{
                       		Str[i]=Str[i]-32;
                	}
			else if(Str[i]>='A' && Str[i]<='Z')
                	{
                       		Str[i]=Str[i]+32;
                	}
               }

}
char PrintStr(char *Str)
{
	if(Str[0]>='a' && Str[0]<='z')
	{
		printf("\nThe string in lowercase is : %s \n",Str);
	}	
	else if(Str[0]>='A' && Str[0]<='Z')
	{
		printf("\nThe string in Uppercase is : %s \n",Str);
	}
	else
	{
		printf("\nThe given input is not a sting \n");
	}
	
}
