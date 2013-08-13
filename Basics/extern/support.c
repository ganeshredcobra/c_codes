/*
 * =====================================================================================
 *
 *       Filename:  support.c
 *
 *    Description:  support file for testing extern
 *
 *        Version:  1.0
 *        Created:  Wednesday 14 August 2013 03:46:38  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ganesh.H (), ganeshredcobra@gmail.com
 *        Company:  SPACE
 *
 * =====================================================================================
 */

#include <stdio.h>

extern int count;

void write_extern()
{
	printf("The count id %d \n",count);
}
