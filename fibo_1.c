// program to print Fibonacci series up to n terms using recursion

#include <stdio.h>

int fibonacci(int n)         // function to calculate Fibonacci number 
{
    if (n == 0) // base case
        return 0;
    else if (n == 1) // base case
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2); // recursive case
}   

int main()        // main function
 {
    int terms, i;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);
    printf("Fibonacci Series:\n");            
    for (i = 0; i < terms; i++)
 {
        printf("%d ", fibonacci(i));  // printing the Fibonacci series 
    }
    printf("\n");
    return 0;
}