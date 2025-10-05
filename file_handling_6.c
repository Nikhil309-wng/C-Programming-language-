// program to read integer from input.txt and write even no on even.txt and odd no on odd.txt

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
 {
    int ch;
    FILE *f1, *f2, *f3;     // declaring file pointers

    f1 = fopen("input.txt", "r");       // opening file in read mode
    f2 = fopen("even.txt", "a");         // opening file in append mode
    f3 = fopen("odd.txt", "a");          // opening file in append mode

    if (f1 == NULL || f2 == NULL || f3 == NULL)     // checking if file exists or not
     {
        printf("file does not exist\n");
        exit(0);
    }

    while ((ch = getw(f1)) != EOF)   // reading integers from file until EOF
     {
        if (ch % 2 == 0) {
            putw(ch, f2);    // writing even integers to even.txt
        } else {
            putw(ch, f3);    // writing odd integers to odd.txt
        }
    }

    fclose(f1);         // closing the file 1   
    fclose(f2);         // closing the file 2
    fclose(f3);         // closing the file 3   


    return 0;
}