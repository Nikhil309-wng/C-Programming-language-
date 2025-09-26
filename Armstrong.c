#include<stdio.h>


int main(){

     int n,m,rem,arm=0;
     printf("Enter the number:\n");
     scanf("%d",&n);

     m=n;
     while(m>0)
     {
        rem=m%10;
        arm=arm+(rem*rem*rem);
        m=m/10;
     }

     if(arm==n)
        printf("%d is an armstrong number\n",n);
    else
        printf("%d is not an armstrong number\n",n);


    return 0;
}