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
	int numerator;
	int denominator;
	
}FRACTION;
int multiply(int x,int y)
{
	return x*y;
}


void main()
{
	FRACTION a,b,c;
	printf("Enter fraction1 in the form x/y");
	scanf("%d/%d",&a.numerator,&a.denominator);
	printf("Enter fraction2 in the form x/y");
	scanf("%d/%d",&b.numerator,&b.denominator);	
	c.numerator=multiply(a.numerator,b.numerator);
	c.denominator=multiply(a.denominator,b.denominator);
	printf("%d/%d*%d/%d=%d/%d",a.numerator,a.denominator,b.numerator,b.denominator,c.numerator,c.denominator);
	
}
