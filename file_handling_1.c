// program to read chaeracters from a file and print them on the console
#include <stdio.h>
#include <stdlib.h>
int main() {
 char ch;
 FILE *f1;
 f1 = fopen("fibo.c", "r");
    if (f1 == NULL) 
    {
    printf("file does not exist\n");
    exit(0);
    }
    while((ch = getc(f1)) != EOF)
    {
        putchar(ch);
    }
    fclose(f1);
    return 0;

}
   