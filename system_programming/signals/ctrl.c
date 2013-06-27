/*
 * =====================================================================================
 *
 *       Filename:  ctrl.c
 *
 *    Description:  React to Ctrl+C
 *
 *        Version:  1.0
 *        Created:  Friday 28 June 2013 02:04:47  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ganesh H (), ganeshredcobra@gmail.com
 *        Company:  space-kerala.org
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void ouch(int sig)
{
	printf("OUCH! I got the signal %d\n",sig);
	(void) signal(SIGINT,SIG_DFL);
}
int main()
{
	(void) signal(SIGINT,ouch);
	while(1)
	{
		printf("Hello world\n");
		sleep(1);
	}

}
