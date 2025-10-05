// program to find the area and circumference of a circle using call by reference in function

#include <stdio.h>
#define PI 3.14159

// Function to calculate area and circumference
void circle(float radius, float *area, float *circumference) 
{
    *area = PI * radius * radius;              //formula to calculate area
    *circumference = 2 * PI * radius;          //formula to calculate circumference
}

int main() 
{
    float radius, area, circumference;

    printf("Enter the radius of the circle: ");    // input radius of the circle
    scanf("%f", &radius);

    circle(radius, &area, &circumference);     // function call to calculate area and circumference

    printf("Area of the circle: %.2f\n", area);   // printing the value of area
    printf("Circumference of the circle: %.2f\n", circumference);   // printing the value of circumference

    return 0;
}
