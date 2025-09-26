//program to swap to values without using third variable
#include<stdio.h>


int main(){
    int a,b;
    printf("Enter the two values:\n");
    scanf("%d%d",&a,&b);
    printf("Value before swapping:\n");
    printf("a = %d",a);
    printf("\tb = %d\n",b);
    
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nValue after swapping:\n");
    printf("a = %d",a);
    printf("\tb = %d\n",b);
       
    return 0;

}