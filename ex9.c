#include<stdio.h>
int main(int argc,char *argv[])
{

  int numbers[4]={0};
  char name[4]={'a'};
  //printing the raw
  printf("Numbers are : %d %d %d %d \n",numbers[0],numbers[1],numbers[2],numbers[3]);
  printf("Name of each : %c %c %c %c \n",name[0],name[1],name[2],name[3]);
  printf("Name is : %s \n",name);

  //setup the numbers
  numbers[0]=1;
  numbers[1]=2;
  numbers[2]=3;
  numbers[3]=4;
  //setup the name
  name[0]='G';
  name[1]='A';
  name[2]='N';
  name[3]='\0';
  //printing after intialising
  printf("Numbers are : %d %d %d %d \n",numbers[0],numbers[1],numbers[2],numbers[3]);
  printf("Name of each : %c %c %c %c \n",name[0],name[1],name[2],name[3]);
  printf("Name is : %s \n",name);
  //another way to use name
  char *another="Ganesh";
  printf("another is : %s \n",another);
  //printf("another each is %c %c %c %c \n",another[0],another[1],another[2],another[3],another[4]);
  return 0;


}
