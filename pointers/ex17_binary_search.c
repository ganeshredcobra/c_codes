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
	int i,n,item,a[20],position;
	printf("Enter the value of n \n");
	scanf("%d",&n);
	printf("Enter n values \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the item to search \n");
	scanf("%d",&item);
	search(item,a,n,&position);
	if(position == -1)
		printf("Item not found \n");
	else
		printf("Item found at %d position \n",position);	
}

int search(int item,int *a,int n,int *position)
{
	int low,high,mid;
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(item == *(a+mid))
		{
			*position=mid;
			return;
		}
		if(item<*(a+mid))
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	*position=-1;
}
