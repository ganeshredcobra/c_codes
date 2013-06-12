/*
 * =====================================================================================
 *
 *       Filename:  fork1.c
 *
 *    Description:  Fork
 *
 *        Version:  1.0
 *        Created:  Wednesday 12 June 2013 05:24:23  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ganesh H (gh), ganeshredcobra@gmail.com
 *        Company:  space-kerala.org
 *
 * =====================================================================================
 */

#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main()
{
	pid_t pid;
	char *message;
	int n;
	printf("fork program starting\n");
	pid = fork();
	switch(pid)
	{
	case -1:
		perror("fork failed");
		exit(1);
	case 0:
		message = "This is the child";
		n = 5;
		break;
	default:
		message = "This is the parent";
		n = 3;
		break;
	}
	for(; n > 0; n--) {
		puts(message);
		sleep(1);
		}
	exit(0);
}


