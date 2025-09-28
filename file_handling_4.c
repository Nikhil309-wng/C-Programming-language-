// program to read integer from a file abc.txt and write on another file xyz.txt    

#include <stdio.h>
#include <stdlib.h> 
int main() {
 char ch;
 FILE *f1, *f2;

 f1 = fopen("abc.txt", "r");
 f2 = fopen("xyz.txt", "a");
 
    if (f1 == NULL || f2 == NULL) 
    {
    printf("file does not exist\n");
    exit(0);
    }
 
    while((ch = getw(f1)) != EOF)
    {
        putw(ch, f2);
    }
    fclose(f1);
    fclose(f2);
    return 0;
}