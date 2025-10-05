// program to find the factorial of a number using recursion 

#include <stdio.h>

int factorial(int n)        // function to calculate factorial 
{
    if (n == 0) // base case
        return 1;
    else
        return n * factorial(n - 1); // recursive case
}

int main() 
{
    int num;
    printf("Enter a positive integer: ");             // input number
    scanf("%d", &num);


    if (num < 0)        // condition to check if the number is negative
    {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    else      // condition to check if the number is positive
     {
        printf("Factorial of %d = %d\n", num, factorial(num));
    }
    return 0;
}