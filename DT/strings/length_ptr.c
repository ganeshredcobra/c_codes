/*
 * =====================================================================================
 *
 *       Filename:  length.c
 *
 *    Description:  Find length with out using strlen
 *
 *        Version:  1.0
 *        Created:  Thursday 14 November 2013 10:17:58  IST
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
    char str[100];
    int len=0;
    printf("\nEnter the string: ");
    gets(str);
    len=length(str);
    printf("\nThe Length of the string is %d \n",len);
}
int length(char *s1)
{
    int l=0;
    while(*s1!='\0')
    {
        l++;
        s1++;
    }
    return l;
}
