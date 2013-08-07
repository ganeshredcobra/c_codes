/*
 * =====================================================================================
 *
 *       Filename:  basic_data_types.c
 *
 *    Description: Print values of basic data types 
 *
 *        Version:  1.0
 *        Created:  Monday 05 August 2013 08:01:33  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ganesh.H (), ganeshredcobra@gmail.com
 *        Company:  SPACE
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <limits.h>

int main()
{
	printf("Storage size for char : %d \n",sizeof(char));
	printf("Storage size for int : %d \n",sizeof(int));
	printf("Storage size for float : %d \n",sizeof(float));
	printf("Storage size for double : %d \n",sizeof(double));
	
	return 0;
}
