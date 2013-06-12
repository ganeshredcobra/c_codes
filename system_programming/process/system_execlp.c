/*
 * =====================================================================================
 *
 *       Filename:  system_execlp.c
 *
 *    Description:  execlp with system
 *
 *        Version:  1.0
 *        Created:  Wednesday 12 June 2013 04:40:24  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ganesh H (gh), ganeshredcobra@gmail.com
 *        Company:  space-kerala.org
 *
 * =====================================================================================
 */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* Example of an argument list */
	/* Note that we need a program name for argv[0] */
	char *const ps_argv[] ={"ps", "ax", 0};
	/* Example environment, not terribly useful */
	char *const ps_envp[] ={"PATH=/bin:/usr/bin", "TERM=console", 0};//add /bin to $PATH

	printf("Running ps with execlp\n");
	execlp("ps", "ps", "ax", 0);
	printf("Done.\n");
	exit(0);
}

/* Possible calls to exec functions */
/*execl(“/bin/ps”, “ps”, “ax”, 0);
execlp(“ps”, “ps”, “ax”, 0);
execle(“/bin/ps”, “ps”, “ax”, 0, ps_envp);*/
/* assumes ps is in /bin */
/* assumes /bin is in PATH */
/* passes own environment */
/*execv(“/bin/ps”, ps_argv);
execvp(“ps”, ps_argv);
execve(“/bin/ps”, ps_argv, ps_envp);*/

