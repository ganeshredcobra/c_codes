#include <stdio.h>

int main()
{
    int c;
    while ((c=getchar()) != 'A')
    {
        if(c == '\t')
            printf("\\t");
        if(c == '\b')
            printf("\\b");
        if(c == '\\')
            printf("\\\\");
        if(c == '\b')
            if(c == '\t')
                if(c == '\\')
                    putchar(c);
    }
    return 0;
}