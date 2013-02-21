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


void main(){
	struct subject
	{
		int marks1;
		int marks2;
		int marks3;
	};
	typedef struct
	{
		char name[10];
		int USN;
		struct subject marks;
	}STUDENT;

	STUDENT temp,a[9];
	int i,j,n;
	printf("Enter the no of students \n");
	scanf("%d",&n);
	printf("Enter the student details \n");
	for(i=0;i<n;i++)
	{
		printf("Details of %d student",i+1);
		printf("Name =");
		scanf("%s",a[i].name);
		printf("USN=");
		scanf("%d",&a[i].USN);
		printf("Marks1=");
		scanf("%d",&a[i].marks.marks1);
		printf("Marks2=");
		scanf("%d",&a[i].marks.marks2);
		printf("Marks3=");
		scanf("%d",&a[i].marks.marks3);
	}
	for(j=1;j<n;j++)
	{
		for(i=0;i<n-j;i++)
		{
			if(strcmp(a[i].name,a[i+1].name)>0)
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s%d%d%d%d \n",a[i].name,a[i].USN,a[i].marks.marks1,a[i].marks.marks2,a[i].marks.marks3);
	}
}
