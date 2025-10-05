// program to illusttrate conditional compilation

#include <stdio.h>

#define code            // defining a macro named code

int main()
{
    printf("a\n");
    #ifdef code
       printf("b\n");
    #else
       printf("c\n");
    #endif
       printf("d\n");
        
    return 0;
}