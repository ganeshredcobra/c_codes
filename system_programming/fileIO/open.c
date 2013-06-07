/*
 * =====================================================================================
 *
 *       Filename:  open.c
 *
 *    Description:  File open
 *
 *        Version:  1.0
 *        Created:  Saturday 08 June 2013 02:13:34  IST
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

int fd;
fd=open("hello.txt","r");
if(fd == -1)
{
	printf("Error");
}
