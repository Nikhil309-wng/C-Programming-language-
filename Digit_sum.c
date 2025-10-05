// C program to calculate the sum of digits of a number

#include<stdio.h>

int main(){
    
    int n,m, sum = 0 ,rem;
    printf("Enter the number:\n");     // input number
    scanf("%d",&n);
    m=n;


    while(m>0)              // while loop to calculate the sum of digits
    {
      rem=m%10;
      sum=sum+rem;
      m=m/10;
    }
    
    printf("sum is %d\n",sum);    // printing the value of sum of digits


    return 0;
}