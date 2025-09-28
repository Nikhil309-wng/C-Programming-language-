// program to find the area and circumference of a circle using call by reference in function 
#include <stdio.h>
#define PI 3.14159

void circle(float radius, float *area, float *circumference) {
    *area = PI * radius * radius;
    *circumference = 2 * PI * radius;
}

int main() {
    float radius, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    circle(radius, &area, &circumference);

    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}
