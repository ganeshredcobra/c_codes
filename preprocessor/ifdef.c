#include <stdio.h>

#define ABC 120

#ifdef ABC
  #undef ABC
  #define ABC 50
#else
  #define ABC 20
#endif

int main()
{
	printf("value of ABC is %d \n",ABC);
}
