#include<stdio.h>

int main(){

    int n,m,rev=0,rem;
    printf("Enter the number:\n");
    scanf("%d",&n);
    m=n;

    while(m>0)
    {
        rem=m%10;
        rev=rev*10+rem;
        m=m/10;
    }

    if(rev==n)
       printf("%d is a palindrome numbeer\n",n);
    else 
       printf("%d is not a palindrome numbeer\n",n);


    return 0;
}