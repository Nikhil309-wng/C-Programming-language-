// Program to check whether the given character is uppercase, lowercase, numeric or symbolic

#include<stdio.h>

int main(){
    char n;

    printf("Enter the character:\n");  // input character
    scanf("%c",&n);

    if(n>=65 && n<=90)    // condition to check if the character is uppercase
      printf("Upper case\n");
    else if(n>=97 && n<=122)    // condition to check if the character is lowercase
      printf("Lower case\n");
    else if(n>=48 && n<=57)    // condition to check if the character is numeric
      printf("numeric\n");
    else                       // condition to check if the character is symbolic
      printf("symbolic");

    return 0;
}