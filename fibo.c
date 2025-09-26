#include<stdio.h>

int main(){

    int n,a=-1,b=1,c=0,i,s=0;
    printf("Enter the number of terms to be generate:\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d\t",c);
        s=s+c;
        a=b;
        b=c;
    }

    printf("\n Sum of series: %d",s);

    return 0;

}