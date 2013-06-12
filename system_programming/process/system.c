/*
 * =====================================================================================
 *
 *       Filename:  system.c
 *
 *    Description:  Calling system
 *
 *        Version:  1.0
 *        Created:  Wednesday 12 June 2013 03:40:44  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ganesh H (gh), ganeshredcobra@gmail.com
 *        Company:  space-kerala.org
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Running ps with system \n")	;
	system("ps aux &");
	printf("Done");
	exit(0);
}
