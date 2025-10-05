// program to read integer from file abc.txt and write its square on another file xyz.txt

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() 
{
    int num;
    FILE *f1, *f2;       // declaring file pointers 

    f1 = fopen("abc.txt", "r");         // opening file in read mode
    f2 = fopen("xyz.txt", "a");         // opening file in append mode

    if (f1 == NULL || f2 == NULL) {
        printf("file does not exist\n");
        exit(0);
    }

    while ((num = getw(f1)) != EOF)     // reading integers from file until EOF
    {
        num = pow(num, 2);
        putw(num, f2);
    }

    fclose(f1);     // closing the file 1   
    fclose(f2);     // closing the file 2

    
    return 0;
}