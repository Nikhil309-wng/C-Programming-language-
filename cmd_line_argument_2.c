// program to check whether number is armstrong or not using command line argument

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])         // argc is the argument count and argv is the argument vector
{
int n , d, m , sum = 0;
n = atoi(argv[1]);
m = n;
while (m > 0)             // while loop to extract each digit of the number
{
    d = m % 10;
    sum = sum + (d * d * d);
    m = m / 10;

}
if (sum == n)               // condition to check if the sum of cubes of each digit is equal to the number itself
    printf("%d is an Armstrong number\n", n);      // printing the value of armstrong number    
else                          // condition to check if the number is not an armstrong number
    printf("%d is not an Armstrong number\n", n);

  return 0;
}