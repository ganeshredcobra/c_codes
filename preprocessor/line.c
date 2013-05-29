#include <stdio.h>
#define LINE200 200

int main(void)
{
   func_1();
   func_2();
}

#line 100
func_1()
{
   printf("Func_1 - the current line number is %d\n",__LINE__);
}

#line LINE200
func_2()
{
   printf("Func_2 - the current line number is %d\n",__LINE__);
}
