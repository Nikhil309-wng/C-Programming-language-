// program to find the GCD of two numbers 

#include <stdio.h>


int gcd(int a, int b)       // function to calculate GCD
 {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int num1, num2;
    printf("Enter two positive integers: ");        // input two positive integers
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0)       // condition to check if the numbers are positive
     {
        printf("Please enter positive integers only.\n");
    }
     else           // condition to check if the numbers are positive
    {
        printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));
    }

    
    return 0;
}