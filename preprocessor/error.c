#include <stdio.h>
#include <math.h>

//#define VERSION 1.3

#ifndef VERSION
#error Version number not specified.
#endif

int main()
{
	float b=25;
	float a=sqrt(b);
	printf("%f",a);
	return 0;
}


