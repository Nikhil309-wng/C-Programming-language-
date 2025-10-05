// program to find a factorial of a number using command line argument

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])         // argc is the argument count and argv is the argument vector
{
  int n , i , fact = 1;
  n = atoi(argv[1]);     // converting string to integer using atoi function


  for(i = n; i >= 1; i--)           // loop to calculate factorial
   {
    fact = fact * i;
  }


    printf("Factorial of %d is %d\n", n, fact);    // printing the value of factorial
    return 0;
}