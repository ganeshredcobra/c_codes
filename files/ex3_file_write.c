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
#include <stdlib.h>
   
int main(void)
{
    FILE *fp;
    int i;
    fp = fopen("results.dat", "w");
    if (fp == NULL) {
        printf("I couldn't open results.dat for writing.\n");
        exit(0);
     }
    for (i=0; i<=10; ++i)
    {
     fprintf(fp, "%d, %d\n", i, i*i);
    }
   
     return 0;
}
//Note that the exit() function requires the header file stdlib.h to be included.
