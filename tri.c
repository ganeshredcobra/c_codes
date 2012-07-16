#include<stdio.h>

float triangle(float width,float height)
{
  float area;
  area=(width*height)/2.0;
  return(area);
}
int main()
{
  printf("The area of traingle1 is %f \n",triangle(1.8,9.5));
  printf("The area of traingle1 is %f \n",triangle(3.4,2.9));
  printf("The area of traingle1 is %f \n",triangle(7.6,6.4));
  printf("The area of traingle1 is %f \n",triangle(5.7,4.7));
  return(0);
}
