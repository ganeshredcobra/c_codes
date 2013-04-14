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
 FILE *fp;
 int a[10],n,i;
 char file_name[20];

 printf("Enter the file name \n");
 scanf("%s",file_name);
 printf("Enter the number of integers \n");
 scanf("%d",&n);

 if((fp=fopen(file_name,"rb"))==NULL)
 {
   printf("Error in opeining the file\n");
   return;
 }
 fread(a,sizeof(int),n,fp);
 for(i=0;i<n;i++)
 {
   printf("%d\n",a[i]);
 }

}
