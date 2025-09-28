// program to illustrate the argumrnt based macro

#include<stdio.h>
#define area(r) (3.14*r*r)
int main()
{
    int r;
    float ac;
    
    printf("Enter the radius of circle\n");
    scanf("%d",&r);
    ac = area(r);
    printf("Area of circle is %.2f\n",ac);
    return 0;
}