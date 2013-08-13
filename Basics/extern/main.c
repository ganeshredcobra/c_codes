/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Test of extern
 *
 *        Version:  1.0
 *        Created:  Wednesday 14 August 2013 03:44:46  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ganesh.H (), ganeshredcobra@gmail.com
 *        Company:  SPACE
 *
 * =====================================================================================
 */

#include <stdio.h>

int count;
extern void write_extern();

int main()
{
	count=5;
	write_extern();
	return 0;
}
