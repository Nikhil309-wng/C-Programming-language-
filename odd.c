// Program to check whether a number is odd or even

#include<stdio.h>

int main()   // main function
{

    int a;
    printf("Enter the number:\n");      // input number
    scanf("%d",&a);

    if(a%2==0)    // condition to check if the number is even
    {
        printf("Even number");
    }
    else        
    {
        printf("Odd  number");
    }
      
     return 0;
}