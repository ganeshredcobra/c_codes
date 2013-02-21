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

typedef struct
{
	int hrs;
	int min;
	int sec;
}CLOCK;

void increment(CLOCK *clock)
{
	clock->sec++;
	if(clock -> sec==60)
	{
		clock->sec=0;
		clock->min++;
		if(clock->min==60)
		{
			clock->min=0;
			clock->hrs++;
			if(clock->hrs==24)
				clock->hrs=0;
		}
	}
}

void show(CLOCK *clock)
{
	printf("%2d:%2d:%2d \n",clock->hrs,clock->min,clock->sec);
}

void main()
{
	CLOCK clock={11,59,57};
	int i;
	for(i=0;i<=10;i++)
	{
		increment(&clock);
		show(&clock);
	}
}
