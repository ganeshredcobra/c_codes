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

void main()
{
	int a[10][10];
	int b[10][10];
	int c[10][10];
	int m,n;
	printf("Enter the size of matrix \n");
	scanf("%d%d",&m,&n);
	printf("Enter the elements of matrix a\n");
	read_matrix(m,n,a);
	printf("Enter the elements of matrix b\n");
	read_matrix(m,n,b);
	add_matrix(m,n,a,b,c);
	printf("The sum of two matrices are \n");
	write_matrix(m,n,c);
}
int read_matrix(int m,int n,int (*a)[10])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",*(a+i)+j);
		}
	}
	
}
int write_matrix(int m,int n,int (*a)[10])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",*(*(a+i)+j));
		}
		printf("\n");
	}
}
int add_matrix(int m,int n,int (*a)[10],int (*b)[10],int (*c)[10])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			*(*(c+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
		}
	}
}
