/*
 * =====================================================================================
 *
 *       Filename:  array.c
 *
 *    Description:  array to store string
 *
 *        Version:  1.0
 *        Created:  Friday 16 August 2013 04:05:32  IST
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

int main()
{
	char Str[25],ch;
	int i=0;
	printf("Enter the String :");
	while((ch=getchar())!='\n')
		Str[i++]=ch;
	Str[i]='\0';
	i=0;
	while(Str[i]!='\0')
		putchar(Str[i++]);
	return 0;
}
