/*
 * =====================================================================================
 *
 *       Filename:  array1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Friday 16 August 2013 04:45:54  IST
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

void PrintStr(char *input);
int i;

int main()
{
	char input[256];
	printf("Enter the string : ");
	fgets( input, 256, stdin );

	for ( i = 0; i < 256; i++ )
	{
    		if ( input[i] == '\n' )
    		{
        		input[i] = '\0';
        		break;
    		}
	}
	
	PrintStr(input);	

	return 0;
}

void PrintStr(char *input)
{
	for( i=0;i<strlen(input);i++)
	{
		printf("The array elements are %c \n",input[i]);
	}
	
}
