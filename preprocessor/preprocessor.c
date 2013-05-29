#include <stdio.h>

#define MAX_ARRAY_LENGTH 20
#undef FILESIZE
#define FILESIZE 42
#define MESSAGE "yup!"
#ifndef MESSAGE
   #define MESSAGE "You Wish!"
#endif

#ifdef DEBUG
 //hello
#endif

void main()
{
	printf("File :%s\n",__FILE__);
	printf("Date :%s\n",__DATE__);
	printf("Time :%s\n",__TIME__);
	printf("Line :%d\n",__LINE__);
	printf("Ansi :%d\n",__STDC__);
	printf("Max_Array_len :%d\n",MAX_ARRAY_LENGTH);
	printf("FILESIZE :%d\n",FILESIZE);
	printf("Message :%s\n",MESSAGE);
}
