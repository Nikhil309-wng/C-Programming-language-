// program to read integer from input.txt and write even no on even.txt and odd no on odd.txt
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int ch;
    FILE *f1, *f2, *f3;

    f1 = fopen("input.txt", "r");
    f2 = fopen("even.txt", "a");
    f3 = fopen("odd.txt", "a");

    if (f1 == NULL || f2 == NULL || f3 == NULL) {
        printf("file does not exist\n");
        exit(0);
    }

    while ((ch = getw(f1)) != EOF) {
        if (ch % 2 == 0) {
            putw(ch, f2);
        } else {
            putw(ch, f3);
        }
    }

    fclose(f1);
    fclose(f2);
    fclose(f3);
    return 0;
}