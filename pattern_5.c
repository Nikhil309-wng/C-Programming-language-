// program to print numbers in a specific order instead of stars in a pattern

#include <stdio.h>

int main() {
    int i, j;
    int start=10;

    for(i = 1; i <= 5; i++) 
    {
        for(j = 1; j < i; j++) {
            printf("%d ", start--);
        }
        printf("\n");
    }

    return 0;
}