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

int strlen(char str[]);//To avoid implicit declaration of built-in function warning

int main()
{
    for(;;)
    {
        int num=0;
        char str[100];
        printf("\nEnter the string : ");
        gets(str);
        num=strlen(str);
        printf("Length of the string is %d\n",num);
    }
}

int strlen(char str[])
{
    int len=0;
    while(str[len]!='\0')
        len++;
    return len;
}
