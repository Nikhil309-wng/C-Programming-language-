// program to check whether a number is an armstrong number or not

#include<stdio.h>


int main()
{

     int n ,m  ,rem , arm=0;
     printf("Enter the number:\n");
     scanf("%d",&n);

     m=n;    // copying the value of n into m for perform further operations


     while(m>0)     // while loop to extract each digit of the number
     {
        rem=m%10;
        arm=arm+(rem*rem*rem);
        m=m/10;
     }

     if(arm==n)                           // condition to check if the sum of cubes of each digit is equal to the number itself
        printf("%d is an armstrong number\n",n);
    else
        printf("%d is not an armstrong number\n",n);  


    return 0;
}