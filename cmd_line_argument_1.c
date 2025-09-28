// program to find a factorial of a number using command line argument
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  int n , i , fact = 1;
  n = atoi(argv[1]);


  for(i = n; i >= 1; i--)
   {
    fact = fact * i;
  }
    printf("Factorial of %d is %d\n", n, fact);
    return 0;
}