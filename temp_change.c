// program to accept and change the unit of temperature

#include<stdio.h>
#include<math.h>

int main(){
    
    float c,f;
    printf("Enter the temperature in centigrade:");
    scanf("%f",&c);
    f=(9*c)/5+32;
    printf("Temperature in fahrenheit:");
    printf("%.2f",f);


    return 0;
}