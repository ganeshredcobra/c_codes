/*
 * =====================================================================================
 *
 *       Filename:  upper.c
 *
 *    Description:  Convert to upper case simple
 *
 *        Version:  1.0
 *        Created:  Thursday 27 June 2013 02:26:30  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ganesh H (), ganeshredcobra@gmail.com
 *        Company:  space-kerala.org
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
	int ch;
	while((ch=getchar())!=EOF)
	{
		putchar(toupper(ch));
	}
	exit(0);
}
