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
	int a,*p1,**p2;
	a=10;
	p1=&a;
	p2=&p1;
	printf("The value of a is %d \n",a);
	printf("The value of p1=%d , &p1=%u, *p1=%u \n",p1,&p1,*p1);
	printf("The value of p2=%d , &p2=%u, *p2=%u, **p2=%u \n",p2,&p2,*p2,**p2);

}
