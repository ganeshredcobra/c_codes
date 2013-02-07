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
	int big,pos,i,n,a[10];
	printf("Enter the no of elements in array :");
	scanf("%d",&n);
	printf("Enter the data :\n");
	for(i=0;i<=n-1;i++)
		scanf("%d \n",a+i);
	big=*(a+0);
	pos=0;
	for(i=1;i<=n-1;i++)
	{
		if(*(a+i)>big)
		{
			big=*(a+i);
			pos=i;
		}
	}
	printf("The largest no is %d \n",big);
	printf("Position of largest no is %d",pos+1);
}
