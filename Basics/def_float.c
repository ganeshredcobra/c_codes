/*
 * =====================================================================================
 *
 *       Filename:  sef_float.c
 *
 *    Description:  Size of float
 *
 *        Version:  1.0
 *        Created:  Monday 05 August 2013 08:47:52  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ganesh.H (), ganeshredcobra@gmail.com
 *        Company:  SPACE
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <float.h>

int main()
{
	
	printf("Storage size for float : %d \n",sizeof(float));
	printf("Minimum float Positive Value : %E \n",FLT_MIN);
	printf("Minimum float Positive Value : %E \n",FLT_MAX);
	printf("Precision float Value : %d \n",FLT_DIG);
}
