// program to print a pattern

#include <stdio.h>

int main() {
    int i, j, rows;

    printf("Enter the number of rows: ");    // Enter the rows
    scanf("%d", &rows);

    for(i = 1; i <= rows; ++i)   // loop  to print the pattern 
     {
        for(j = 1; j <= i; ++j) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}