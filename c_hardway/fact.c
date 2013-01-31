#include<stdio.h>
int main()
{
  int fact(int num)
  {
    if(num==0)
    {
      return(1);
    }
    else
    {
      return(num*fact(num-1));
    }
  }

fact(2);
return 0;
}
