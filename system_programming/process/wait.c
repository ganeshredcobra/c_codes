/*
 * =====================================================================================
 *
 *       Filename:  wait.c
 *
 *    Description:  Wait in forking
 *
 *        Version:  1.0
 *        Created:  Thursday 27 June 2013 01:32:41  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ganesh H (), ganeshredcobra@gmail.com
 *        Company:  space-kerala.org
 *
 * =====================================================================================
 */

#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void main()
{
	pid_t pid;
	char *message;
	int n;
	int exit_code;

	pid=fork();
	switch(pid)
	{
		case -1:
			perror("Fork failed!!");
			exit(1);
		case 0:
			message="This is a child";
			n=5;
			exit_code=37;
			break;
		default:
			message="This a parent";
			n=3;
			exit_code=0;
			break;
	}
	for(;n > 0;n--)
	{
		puts(message);
		sleep(1);
	}
	if(pid!=0)
	{
		int stat_val;
		pid_t child_pid;
		child_pid=wait(&stat_val);
		printf("The child has finished : PID=%d \n",child_pid);
		if(WIFEXITED(stat_val))
			printf("Child exited with code %d\n", WEXITSTATUS(stat_val));
		else
			printf("Child terminated abnormally\n");
	
	}
	exit(exit_code);
}
