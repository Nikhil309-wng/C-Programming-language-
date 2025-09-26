#include<stdio.h>

int main(){
    
    int n,m, sum,rem;
    printf("Enter the number:\n");
    scanf("%d",&n);
    m=n;
    while(m>0)
    {
      rem=m%10;
      sum=sum+rem;
      m=m/10;
    }
    
    printf("sum is %d\n",sum);


    return 0;
}