// program to print all Armstrong numbers between two given numbers

#include <stdio.h>
#include <math.h>

int main(){
    int n , d , s , m;
    for (n = 100; n<= 999; n++)  // for loop to iterate through the range of numbers given 
    {
        s = 0;
        m = n;
        while (m > 0)   // while loop to extract each digit of the number
        {
            d = m % 10;
            s = s + (d * d * d);
            m = m / 10;
        }
        
        if (s == n) // condition to check if the sum of cubes of each digit is equal to the number itself
         {
            printf("%d is an Armstrong number\n", n);
        }
    }

    return 0;
}