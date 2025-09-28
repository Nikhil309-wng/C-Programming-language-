// program to swap the value of two variables using call by value
#include <stdio.h>

void swap(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("\nInside swap function:\n");
    printf("x = %d, y = %d\n", x, y);
}

int main() {
    int a, b;
    printf("Enter the two values:\n");
    scanf("%d %d", &a, &b);
    printf("Values before swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    swap(a, b);

    printf("\nValues after calling swap function (in main):\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}