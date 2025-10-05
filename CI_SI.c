//program to calculate simple interest and cumpound interest 

#include <stdio.h>
#include <math.h>

int main()
{
    float p, r, t, a, si, ci;
    printf("Enter principle: ");   // input principle amount
    scanf("%f", &p);
    printf("Enter Rate: ");   // input rate of interest
    scanf("%f", &r);
    printf("Enter Time: ");   // input time period
    scanf("%f", &t);

    si = (p * r * t) / 100;      // calculating simple interest
    printf("Simple Interest: %f\n", si);

    a = p * pow((1 + r / 100), t);   // calculating amount
    ci = a - p;   // calculating compound interest

    printf("Compound Interest: %f\n", ci);    // printing compound interest

    return 0;
}