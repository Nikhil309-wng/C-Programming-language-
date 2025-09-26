// program to print alphabets instead of stars in a pattern

#include <stdio.h>

int main() {
    int i, j, rows;


    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) 
    {
        for(j = 65; j <= 64 + i; j++)
         {
            printf("%c ", j);
        }
    
        printf("\n");
    }

    return 0;
}      
