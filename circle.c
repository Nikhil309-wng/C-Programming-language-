// program to find the area and circumference of a circle

#include<stdio.h>
#include<math.h>

int main(){
    
    int r;
    float area, ci;
    printf("Enter the radius:");            // input radius of the circle
    scanf("%d",&r);

    area= 3.14*r*r;                      // formula to calculate area
    printf("Area of circle: %.2f\n",area);           // printing the value of area


    ci= 2*3.14*r;             // formula to calculate circumference
    printf("Circumference of the circle: %.2f\n",ci);    // printing the value of circumference

    return 0;
    
}