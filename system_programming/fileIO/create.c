/*
 * =====================================================================================
 *
 *       Filename:  create.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Saturday 08 June 2013 01:11:47  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ganesh H (), ganeshredcobra@gmail.com
 *        Company:  space-kerala.org
 *
 * =====================================================================================
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

void main()
{
	int fd;
	fd=creat("file",644);
	if(fd == -1){
		printf("Error");
	}
}
