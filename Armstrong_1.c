// program to print all Armstrong numbers between two given numbers

#include <stdio.h>
#include <math.h>

int main(){
    int n , d , s , m;
    for (n = 100; n<= 999; n++){
        s = 0;
        m = n;
        while (m > 0){
            d = m % 10;
            s = s + (d * d * d);
            m = m / 10;
        }
        
        if (s == n) {
            printf("%d is an Armstrong number\n", n);
        }
    }

    return 0;
}