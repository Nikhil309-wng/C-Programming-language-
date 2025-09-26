//program to calculate simple interest and cumpound interest 

#include <stdio.h>
#include <math.h>

int main()
{
    float p, r, t, a, si, ci;
    printf("Enter principle: ");
    scanf("%f", &p);
    printf("Enter Rate: ");
    scanf("%f", &r);
    printf("Enter Time: ");
    scanf("%f", &t);

    si = (p * r * t) / 100;
    printf("Simple Interest: %f\n", si);

    a = p * pow((1 + r / 100), t);
    ci = a - p;
    printf("\n");
    printf("Compound Interest: %f\n", ci);

    return 0;
}