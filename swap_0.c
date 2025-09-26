//program to swap to values using third variable
#include<stdio.h>


int main(){
    int a,b,c;
    printf("Enter the two values:\n");
    scanf("%d%d",&a,&b);
    printf("Value before swapping:\n");
    printf("a = %d",a);
    printf("\tb = %d\n",b);
    
    c=a;
    a=b;
    b=c;

    printf("\nValue after swapping:\n");
    printf("a = %d",a);
    printf("\tb = %d\n",b);
       
    return 0;

}