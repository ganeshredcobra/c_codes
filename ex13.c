#include<stdio.h>

int main(int argc,char *argv[])
{
  if(argc!=2)
  {
    printf("ERROR:you need one argument \n");
    //this is how you abort a program
    return 1;
  }
  int i=0;
  for(i=0;argv[1][i]!='\0';i++)
  {
    char letter=argv[1][i];
    printf("The letter is %c \n",letter);
    switch(letter)
    {
      case 'a':
      case 'A':
        printf("%d :'A'\n",i);
        break;
      
      case 'e':
      case 'E':
        printf("%d :'E'\n",i);
        break;

      case 'i':
      case 'I':
        printf("%d :'I'\n",i);
        break;

      case 'o':
      case 'O':
        printf("%d :'O'\n",i);
        break;

      case 'u':
      case 'U':
        printf("%d :'U'\n",i);
        break;

      default:
        printf("%d : %c is not a valid character \n",i,letter);

    }
  }

  return 0;

}
