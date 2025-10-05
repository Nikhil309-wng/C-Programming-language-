// program to input characters from the user and write them to a file

#include <stdio.h>                  
#include <stdlib.h>

int main() 
{
 char ch;
 FILE *f1;                // declaring file pointer
 f1 = fopen("file.txt", "w");       // opening file in write mode

    if (f1 == NULL) 
    {
    printf("Error in opening file\n");
    exit(0);
    }
    printf("Enter text to write to file:\n");            
    while((ch = getchar()) != EOF)              // reading characters from user until EOF
    {
        putc(ch, f1);          // writing each character to the file
    }


    fclose(f1); // closing the file   

    
    return 0;
}