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
	if (pid == -1)
		perror ("fork");
		/* the child ... */
	if (!pid) {
		char *const argv[] ={"gedit", "hello.txt", NULL};
		int ret;
		ret = execv ("/usr/bin/gedit", argv);
		if (ret == -1) {
			perror ("execv");
			//exit (EXIT_FAILURE);
			}
		}

	
}
