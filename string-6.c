// progra to reverse a string using  string function
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    gets(str);
    strrev(str);
    printf("The reversed string is:\n");
    puts(str);
    return 0;
}