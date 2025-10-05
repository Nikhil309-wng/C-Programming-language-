//program to check a number whether it is a palindrome or not 

#include<stdio.h>

int main(){

    int n,m,rev=0,rem;
    printf("Enter the number:\n");   // enter the number
    scanf("%d",&n);
    m=n;

    while(m>0)   // to get the reverse of the given number
    {
        rem=m%10;
        rev=rev*10+rem;
        m=m/10;
    }

    if(rev==n)  // if condition satisfied , number is palindrome number 
       printf("%d is a palindrome numbeer\n",n);
    else 
       printf("%d is not a palindrome numbeer\n",n);


    return 0;
}