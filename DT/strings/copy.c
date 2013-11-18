/*
 * =====================================================================================
 *
 *       Filename:  copy.c
 *
 *    Description:  stcpy implementation
 *
 *        Version:  1.0
 *        Created:  Tuesday 19 November 2013 12:03:40  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ganesh.H (), ganeshredcobra@gmail.com
 *        Company:  SPACE
 *
 * =====================================================================================
 */
#include <stdio.h>

int main()
{
    char src[25],dest[25];
    int i=0;
    printf("\nEnter the source string: ");
    gets(src);
    do
    {
        dest[i]=src[i];
    }while(src[i++]!='\0');
    printf("Copied string is %s \n",dest);
    return 0;
}
