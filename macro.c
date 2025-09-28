// program to illustrate the simple macro 

#include<stdio.h>
#define KEY 25
#define PRINT printf("%d\n",i)

int main()
{
    int i;
    for(i=0;i<KEY;i++)
    {
        PRINT;
    }

    return 0;
}