#include<stdio.h>
#include<math.h>   

int main(){
    
    int a,b,c;
    float s, area;
    printf("Enter the value of a, b and c:\n");
     scanf("%d%d%d" ,&a,&b,&c);
    
    s = (a+b+c)/ 2 ;
     
    area= sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle id %f", area);

    return 0;
}