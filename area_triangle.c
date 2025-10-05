// program to find the area of triangle using heron's formula

#include<stdio.h>
#include<math.h>   

int main(){
    
    int a ,b ,c ;
    float s, area;
    printf("Enter the value of a, b and c:\n");
     scanf("%d%d%d" ,&a,&b,&c);
    
    s = (a+b+c)/ 2 ;   // calculating semi-perimeter
     
    area= sqrt(s*(s-a)*(s-b)*(s-c));       // calculating area using heron's formula
   
    printf("Area of triangle is %f", area);   // printing the value of area

    return 0;
}