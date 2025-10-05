// program to illustrate the simple macro 

#include<stdio.h>

#define KEY 25                  // defining a macro named KEY
#define PRINT printf("%d\n",i)         // defining a macro named PRINT

int main()
{
    int i;

    // using the macro KEY and PRINT
    for(i=0;i<KEY;i++)
    {
        PRINT;
    }

    return 0;
}