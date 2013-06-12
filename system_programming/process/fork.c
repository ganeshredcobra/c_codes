/*
 * =====================================================================================
 *
 *       Filename:  fork.c
 *
 *    Description:  Fork
 *
 *        Version:  1.0
 *        Created:  Wednesday 12 June 2013 01:23:42  IST
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
	pid_t fork(void);
	pid_t pid;

	pid=fork();
	if(pid>0)
	{
		printf("I am the parent of pid=%d\n",pid);
	}
	else if(!pid)
	{
		printf("I am the baby \n");
	}
	else if(pid == -1)
	{
		perror("fork");
	}
}
