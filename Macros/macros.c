#include <stdio.h>

#define FOO (12)
//To create a macro with arguments, put them in parentheses separated by commas after the macro name
#define Square(x) ((x)*(x))
// use of parentheses inside the macro definition to avoid trouble with operator precedence
//then BadSquare(3+4) would give 3+4*3+4, which evaluates to 19, which is probably not what we intended
#define BadSquare(x) x*x
//multiple arguments to a macro
#define Average(x,y) (((x)+(y))/2.0)
//Variable-length argument lists
#define Warning(...) fprintf(stderr, __VA_ARGS__)
//It is possible to mix regular arguments with ..., as long as ... comes last
#define Useless(format, ...) printf(format, __VA_ARGS__)
//One macro can expand to another
#define FOOS BAR
#define BAR (12)
//Multiple expressions in a macro
//The comma operator evaluates both of its operands and returns the value of the one on the right-hand side
#define NoisyInc(x) (puts("Incrementing"),++x)
#define Max(a,b) (puts("Max is"),(a) > (b) ? (a) : (b))
//Non-syntactic macros
//tired of writing for(i = 0; i < n; i++) Write a Macro
//This is generally a good way to make your code completely unreadable
#define UpTo(i, n) for((i) = 0; (i) < (n); (i)++)
//Multiple statements in one macro
//Note that no construct except do..while will work here; just using braces will cause trouble with the semicolon before the else, and no other compound statement besides do..while expects to be followed by a semicolon in this way
#define HiHi() do { puts("hi"); puts("hi"); } while(0)
//String expansion
//Here #x expands to whatever the value of x is wrapped in double quotes.
//The resulting string constant is then concatenated with the adjacent string constant according to standard C string constant concatenation rules.
#define NoisyInc2(x) (puts("Incrementing " #x), x++)
//To concatenate things that aren't strings, use the ## operator, as in
#define PrintExpr(x) (printf("%s = %d\n", #x, (x)))
//Big Macros
//Nothing restricts a macro expansion to a single line, although you must put a backslash at the end of each line to keep it going
#define DeclareSort(prefix, type) \
static int \
_DeclareSort_ ## prefix ## _Compare(const void *a, const void *b) \
{ \
    const type *aa; const type *bb; \
    aa = a; bb = b; \
    if(aa < bb) return -1; \
    else if(bb < aa) return 1; \
    else return 0; \
} \
\
void \
prefix ## _sort(type *a, int n)\
{ \
    qsort(a, sizeof(type), n, _DeclareSort_ ## prefix ## _Compare); \
}
/* note: must appear outside of any function, and has no trailing semicolon */
DeclareSort(int, int)


int main(int argc, char **argv) {
    int SQ,AVG,NINC,I;
    int Inc=5;
    int *a=1;
    int n=9;
    printf("FOO is %d\n",FOO);
    SQ=Square(5+5);
    printf("Square is %d\n",SQ);
    printf("Square is %d\n",Square(5+5));
    printf("BadSquare is %d\n",Square(3+4));
    AVG=Average(2,4);
    printf("Average is %d\n",AVG);
    //Warning("%s: this program contains no useful code\n", argv[0]);
    Useless("%s\n","Hello World!");
    printf("FOOS is %d\n",FOO);
    NINC=NoisyInc(Inc);
    printf("NoisyInc is %d\n",NINC);
    printf("%d\n",Max(8,9));
    UpTo(I,5)
        printf("I is %d\n",I);
    printf("\n");
    HiHi();
    NINC=NoisyInc2(Inc);
    printf("NoisyInc is %d\n",NINC);
    PrintExpr(2+2);
    int_sort(a, n);

}
