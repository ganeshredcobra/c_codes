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


#include <stdio.h>
#include <string.h>


typedef struct
{
	char name[20];
	int marks;
	int year;
}STUDENT;

void insertion_sort(int n,STUDENT a[])
{
	STUDENT *first,*last,*i,*j;
	STUDENT item;
	first=&a[0];
	last=&a[n-1];
	for(i=first;i<=last;i++)
	{
		item=*i;
		j=i-1;
		while(strcmp(item.name,(*j).name)<0 && j>=first)
		{
			*(j+1)=*j;
			j=j-1;
		}
		*(j+1)=item;
	}
}

void main()
{
	int n,i;
	STUDENT a[10];
	printf("Enter the no of students \n");
	scanf("%d",&n);
	printf("Enter the student details \n");
	for(i=0;i<n;i++)
	{
		printf("Details of %d student",i+1);
		printf("Name =");
		scanf("%s",a[i].name);
		printf("Marks=");
		scanf("%d",&a[i].marks);
		printf("Year");
		scanf("%d",&a[i].year);
		
	}
	insertion_sort(n,a);
	printf("The sorted student records are \n");
	for(i=0;i<n;i++)
	{
		printf("%s%d%d\n",a[i].name,a[i].marks,a[i].year);
	}
	
}
