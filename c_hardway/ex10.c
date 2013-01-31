#include<stdio.h>

int main(int argc, char *argv[])
{
  int i=0;
  //printf("%d",argc);
  for (i=0;i<6;i++){
    printf("arg %d :%s  \n",i,argv[i]);
   // printf("Hello\n");
  }
  char *states[]={
    "space","first","second","third"
  };
  int num_states=4;
  for(i=0;i<num_states;i++){
    printf("state %d :%s \n",i,states[i]);
  }
  return 0;
}
