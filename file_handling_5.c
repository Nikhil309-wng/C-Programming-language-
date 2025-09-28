// program to read integer from file abc.txt and write its square on another file xyz.txt

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int num;
    FILE *f1, *f2;

    f1 = fopen("abc.txt", "r");
    f2 = fopen("xyz.txt", "a");

    if (f1 == NULL || f2 == NULL) {
        printf("file does not exist\n");
        exit(0);
    }

    while ((num = getw(f1)) != EOF) 
    {
        num = pow(num, 2);
        putw(num, f2);
    }

    fclose(f1);
    fclose(f2);
    return 0;
}