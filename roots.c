#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;
    float d,x1,x2;

    printf("Enter the value of a,b,c: \n");
    scanf("%d%d%d",&a,&b,&c);
    d=((b*b)-(4*a*c));

    if(d>=0)
    {
        printf("Root are real:\n");
        x1=((-b+sqrt(d))/(2*a));
        x2=((-b-sqrt(d))/(2*a));
        printf("Root1 = %f\t  Root2 = %f",x1,x2);
    }
    else
    {
        printf("Roots are imaginary:\n");
    }

    return 0;
}