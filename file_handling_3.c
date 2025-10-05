// program to read a character from a file abc.txt and write on file xyz.txt

#include <stdio.h>
#include <stdlib.h>

int main() 
{
 char ch;
 FILE *f1, *f2;         // declaring file pointers

 f1 = fopen("abc.txt", "r");      // opening file in read mode
 f2 = fopen("xyz.txt", "a");      // opening file in append mode

    if (f1 == NULL || f2 == NULL) 
    {
    printf("file does not exist\n");       // checking if file exists or not
    exit(0);
    }
 
    while((ch = getc(f1)) != EOF)          // reading characters from file until EOF
    {
        putc(ch, f2);          // writing each character to another file
    }


    fclose(f1);      // closing the file 1
    fclose(f2);      // closing the file 2


    return 0;
}