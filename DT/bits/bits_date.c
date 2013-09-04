#include <stdio.h>
#include <string.h>

typedef struct
{
   int date : 5;
   int month : 2;
   int year : 12;
} var;


int main()
{
	var var1;
	printf( "size of var1 : %d\n", sizeof(var1));	
	/*var1.date = 20;
	var1.month=4;
	var1.year=2013;*/
	printf("Enter date  : ");
	scanf("%d",&var1.date);
	printf("Enter month : ");
	scanf("%d",&var1.month);	
	printf("Enter Year : ");
	scanf("%d",&var1.year);
	printf( "the values are %d- %d- %d\n ",var1.date,var1.month,var1.year);

}
