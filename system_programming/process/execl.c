/*
 * =====================================================================================
 *
 *       Filename:  execl.c
 *
 *    Description:  Exec Family of calls
 *
 *        Version:  1.0
 *        Created:  Tuesday 11 June 2013 04:11:35  IST
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

void main()
{
	int ret;
	ret=execl("/usr/bin/vi","vi","hello.txt",NULL)	;
	if(ret == -1)
	{
		perror("execl");
	}
}
