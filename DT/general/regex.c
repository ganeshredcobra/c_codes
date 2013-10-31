#include <sys/types.h>
#include <regex.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    regex_t regex;
    int reti,i;
    char msgbuf[100];
    //char *name="1FFFFFFF";
    char *name=argv[1];
    int length = strlen(name);
    unsigned char str2[length];
    /* Compile regular expression */
    reti = regcomp(&regex, "^[a-fA-F0-9]+$", REG_EXTENDED);
    if( reti )
    {
        fprintf(stderr, "Could not compile regex\n");
        //exit(1);
    }

    /* Execute regular expression */
    reti = regexec(&regex, name, 0, NULL, 0);
    if( !reti )
    {
        puts("Hex No");
        strcpy(str2,name);
        printf("string is %s \n",str2);
        if(length==8)
        {
            if(str2[0] == '1' ||str2[0] == '0')
            {
                printf("Valid Hex\n");

            }
            else
            {
                printf("Hex out of range\n");
            }
        }

    }
    else if( reti == REG_NOMATCH )
    {
        puts("Not Hex");
    }
    else
    {
        regerror(reti, &regex, msgbuf, sizeof(msgbuf));
        fprintf(stderr, "Regex match failed: %s\n", msgbuf);
        //exit(1);
    }

    /* Free compiled regular expression if you want to use the regex_t again */
    regfree(&regex);

    return 0;
}
