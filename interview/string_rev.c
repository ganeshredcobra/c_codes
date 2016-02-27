#include <stdio.h>
#include <string.h>

int main()
{
	int i,len;
	char str[100];
	char rev[100];
	scanf("%s",str);
	len=strlen(str);
	printf("Len is %d\n",len);
	printf("The string is %s\n",str);
	for(i=0;i<len;i++)
	{
		rev[i]=str[len-(i+1)];
		//printf("Rev is rev[%d] is %c:\n",i,rev[i]);
	}
	rev[len] = '\0';
	printf("Rev string is %s\n",rev);
	return 0;
}
