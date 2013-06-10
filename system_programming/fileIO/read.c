/*
 * =====================================================================================
 *
 *       Filename:  read.c
 *
 *    Description:  Read a file
 *
 *        Version:  1.0
 *        Created:  Monday 10 June 2013 12:37:21  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ganesh H (gh), ganeshredcobra@gmail.com
 *        Company:  space-kerala.org
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

void main()
{
	unsigned long words;
	ssize_t nr;
	int fd;
	fd=open("hello.txt",O_RDONLY);
	if(fd == -1)
	{
		printf("open Error \n");
	}
	nr = read (fd, &words, sizeof (unsigned long));
	if(nr == -1)
	{
		printf("Read Error \n");
	}
	else
	{
		printf("%d",nr);
	}
	
}
