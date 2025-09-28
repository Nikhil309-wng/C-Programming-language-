// program to input characters from the user and write them to a file
#include <stdio.h>                  
#include <stdlib.h>
int main() {
 char ch;
 FILE *f1;
 f1 = fopen("file.txt", "w");
    if (f1 == NULL) 
    {
    printf("Error in opening file\n");
    exit(0);
    }
    printf("Enter text to write to file (Press Ctrl+D to end input):\n");
    while((ch = getchar()) != EOF)
    {
        putc(ch, f1);
    }
    fclose(f1);
    return 0;
}