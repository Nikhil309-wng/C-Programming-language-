// program to illustrate the argumrnt based macro

#include<stdio.h>

#define area(r) (3.14*r*r)          // defining a macro to calculate area of circle

int main()
{
    int r;
    float ac;
    
    printf("Enter the radius of circle\n");   // input radius of circle
    scanf("%d",&r);

    ac = area(r);        // calling the macro to calculate area of circle
    printf("Area of circle is %.2f\n",ac);

    
    return 0;
}