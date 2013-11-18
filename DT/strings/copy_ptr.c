/*
 * =====================================================================================
 *
 *       Filename:  copy_ptr.c
 *
 *    Description:  strcpy using pointer
 *
 *        Version:  1.0
 *        Created:  Tuesday 19 November 2013 01:25:17  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ganesh.H (), ganeshredcobra@gmail.com
 *        Company:  SPACE
 *
 * =====================================================================================
 */
#include <stdio.h>
void copys(char *s1,char *s2);
void main()
{
    char src[25],dest[25];
    printf("\n Enter the source string : ");
    gets(src);
    copys(dest,src);
    printf("The destination string is %s \n",dest);
}

void copys(char *s1,char *s2)
{
    while(*s2!='\0')
    {
        *s1=*s2;
        s2++;
        s1++;
    }
    *s1='\0';
}
