#include<stdio.h>
#include<math.h>

int main(){
    
    int r;
    float area, ci;
    printf("Enter the radius:");
    scanf("%d",&r);

    area= 3.14*r*r;
    printf("Area of circle: %.2f\n",area);
    ci= 2*3.14*r;
    printf("Circumfence of the circle: %.2f",ci);

    return 0;
    
}