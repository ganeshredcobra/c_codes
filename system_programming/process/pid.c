/*
 * =====================================================================================
 *
 *       Filename:  pid.c
 *
 *    Description:  pid of a program
 *
 *        Version:  1.0
 *        Created:  Tuesday 11 June 2013 03:18:00  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ganesh H (gh), ganeshredcobra@gmail.com
 *        Company:  space-kerala.org
 *
 * =====================================================================================
 */

#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

void main()
{

	pid_t getpid(void);
	pid_t getppid(void);

	printf("My pid is = %d \n",getpid());
	printf("My parent pid is = %d\n",getppid());
}
