/*
 * =====================================================================================
 *
 *       Filename:  alarm.c
 *
 *    Description:  Alarm function using signal
 *
 *        Version:  1.0
 *        Created:  Friday 28 June 2013 02:26:23  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ganesh H (), ganeshredcobra@gmail.com
 *        Company:  space-kerala.org
 *
 * =====================================================================================
 */

#include <signal.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>

static int alarm_fired=0;
void ding(int sig)
{
	alarm_fired=1;
}
int main()
{
	pid_t pid;
	printf("Alarm app starting\n");
	pid=fork();
	switch(pid)
	{
		case -1:
			/*Failure*/
			perror("Fork failed\n ");
			exit(1);
		case 0:
			/*Child*/
			sleep(5);
			kill(getppid(),SIGALRM);
			exit(0);
		default:
			printf("Parent\n");
	}
	printf("Waiting for alarm to go off\n");
	(void) signal(SIGALRM,ding);
	pause();
	if(alarm_fired)
	{
		printf("Ding \n");
	}
	printf("Done\n");
	exit(0);
}
