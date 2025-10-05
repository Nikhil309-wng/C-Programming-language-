// program to read characters from a file and print them on the console


#include <stdio.h>
#include <stdlib.h>

int main() 
{
 char ch;
 FILE *f1;       // declaring file pointer
 f1 = fopen("fibo.c", "r");        // opening file in read mode

    if (f1 == NULL) 
    {
    printf("file does not exist\n");
    exit(0);
    }
    while((ch = getc(f1)) != EOF)
    {
        putchar(ch);       // printing each character on the console
    }
    fclose(f1);       // closing the file

    return 0;

}
   