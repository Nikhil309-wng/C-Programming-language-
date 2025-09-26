// program to copy one string to another string
#include<stdio.h>
#include<string.h>

int main(){
    char str1[100], str2[100];
    printf("Enter a string: ");
    gets(str1);
    strcpy(str2, str1);
    printf("The copied string is:\n ");
    puts(str2);
    return 0;
}