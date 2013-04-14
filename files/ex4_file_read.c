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
int i, isquared;

/* open the file */
fp = fopen("results.dat", "r");
if (fp == NULL) {
 printf("I couldn't open results.dat for reading.\n");
 exit(0);
}

while (fscanf(fp, "%d,%d\n", &i, &isquared) == 2)
 printf("i: %d,  isquared: %d\n", i, isquared);

/* close the file */
fclose(fp);

return 0;
}
