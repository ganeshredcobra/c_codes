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
	int a[]={10,20,30,40,50};
	int *p;
	int i,sum;
	p=a; /* Same as p=&a[0]*/
	sum=0;
	for(i=0;i<=4;i++)
	{
		sum=sum+*p;
		p++;
	}
	printf("The total sum is : %d \n",sum);
}
