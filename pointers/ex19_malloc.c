//      
//      Copyright 2013 Ganesh <ganeshredcobra@gmail.com>
//      
//      This program is free software; you can redistribute it and/or modify
//      it under the terms of the GNU General Public License as published by
//      the Free Software Foundation; either version 2 of the License, or
//      (at your option) any later version.
//      
//      This program is distributed in the hope that it will be useful,
//      but WITHOUT ANY WARRANTY; without even the implied warranty of
//      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//      GNU General Public License for more details.
//      
//      You should have received a copy of the GNU General Public License
//      along with this program; if not, write to the Free Software
//      Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
//      MA 02110-1301, USA.

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int i,n;
	int *ptr;
	printf("Enter the no of elements : \n");
	scanf("%d",&n);
	ptr=(int *)malloc(sizeof(int)*n);
	if(ptr==NULL)
	{
		printf("Insufficient Memory \n");
		return;
	}
	printf("Enter the N elements \n");
	for(i=0;i<n;i++)
		scanf("%d",ptr+i);
	printf("The given elements are \n");
	for(i=0;i<n;i++)
		printf("%d \n",*(ptr+i));
}
