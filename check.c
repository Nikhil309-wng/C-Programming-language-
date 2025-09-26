#include<stdio.h>

int main(){
    char n;
    printf("Enter the character:\n");
    scanf("%c",&n);

    if(n>=65 && n<=90)
      printf("Upper case\n");
    else if(n>=97 && n<=122)
      printf("Lower case\n");
    else if(n>=48 && n<=57)
      printf("numeric\n");
    else 
      printf("symbolic");

    return 0;
}