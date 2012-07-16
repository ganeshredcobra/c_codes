#include <stdio.h>
int main(int argc,char *argv[])
{
  int ages[]={10,11,12,13,14,15};
  char *names[]={"ganesh","shyam","shaiju","sibin","shameem","nikhil"};
  int count=sizeof(ages)/sizeof(int);
  int i =0;
  for(i=0;i<count;i++)
  {
    printf("%s has %d years alive \n",names[i],ages[i]);
  }
  return 0;

}

