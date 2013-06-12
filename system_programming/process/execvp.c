/*
 * =====================================================================================
 *
 *       Filename:  execvp.c
 *
 *    Description:  execvp
 *
 *        Version:  1.0
 *        Created:  Tuesday 11 June 2013 04:50:52  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ganesh H (gh), ganeshredcobra@gmail.com
 *        Company:  space-kerala.org
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void main()
{
	char *const ps_argv[] ={"ps", "ax", NULL};

	int ret;

	ret=execvp("ps",ps_argv);
	if(ret == -1)
		perror("execvp");
}
