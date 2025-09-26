#include<stdio.h>


int main(){
    int n,i,fac=0;
    printf("Enter the number:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       if(n%i==0)
         fac++;
    }

    if(fac==2)
       printf("Prime number");
    else
       printf("Not a prime number\n");


    return 0;

}