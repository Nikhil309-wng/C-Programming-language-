// program to add two numbers and store the result in a third variable

#include<stdio.h>

int main(){

    int a,b,c;
    printf("Enter the first number:\n");
      scanf("%d", &a);
    printf("Enter the second number:\n");
      scanf("%d", &b);

    c = a+b;     // value of a and b is added and stored in c
     
    printf("Sum is %d" , c);   // printing the value of sum 
    return 0;
}