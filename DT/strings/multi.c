/*

Search a 1d array in a 2d array

*/

#include <stdio.h>

typedef int BOOL;
#define FALSE 0;
#define TRUE !FALSE;


char LoopupTable[4][25]= {{'<','c','r','>'},{'z'},{'d','p'},{'d','p','n'}};
BOOL status = FALSE;
int onedlength,twodlength;

int find_length(char input[])
{

    int length = 0;
    while(input[length]!='\0')
    {
        length++;
    }
    return length;

}


int twod_length(char a1 [4][25],int r)
{
    int length = 0;
    while(a1[r][length]!='\0')
    {
        length++;
    }
    return length;

}

int equal_arrays(char a1 [4][25], char a2 [], int r,int c)
{
    int i,j,result;
    for(i=0; i<r; i++)
    {
        int counts=0;
        twodlength=twod_length(a1,i);
        onedlength=find_length(a2);
        if(twodlength==onedlength)
        {
            for (j=0; a1[i][j]!='\0'; j++)
            {
                if (a1[i][j] != a2[j])
                    break;
                else
                {
                    counts++;
                    if(counts==twodlength)
                    {
                        //printf("Length of 2d array %d\n",twodlength);
                       // printf("j %d\n",j);
                        //printf("i %d\n",i);
                        //printf("counts %d\n",counts);
                        status=TRUE;
                       return i;
                    }

                }

            }
        }

    }

}

int main()
{
    int i,j,k;
    char test[25];

    printf("\nEnter the source string: ");
    gets(test);

    //printf("Length of 1d array %d\n",onedlength);
    k=equal_arrays(LoopupTable,test,4,25);

    char name[]="hello1";
    if(status)
        printf("Matching found \n");
    else
        printf("No Match \n");
    //i=equal_arrays(name,test,7);
    printf("The Index No is %d\n",k);
    //printf("Length of array: %d\n", sizeof(test) / sizeof(char));
    return 0;
}
