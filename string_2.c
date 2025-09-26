// program to count the character in the string 

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int len;
    printf("Enter a string: ");
    gets(str);
    len = strlen(str);
    printf("The length of the string is: %d", len);
    return 0;
}