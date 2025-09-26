// program to reverse a string by using pointer

#include<stdio.h>
#include<string.h>

void str_rev(char *);


int main(){
    char name[100];
    int l;
    printf("Enter a string: ");
    gets(name);
    str_rev(name);
    printf("after reversing the string is:");
    puts(name);
    return 0;
}


void str_rev(char *s){
    int i=0; 
    char *l, t;
    l = s;
    while(*l != '\0'){
        l++;
        i++;
    } 
    l--;
    i=i/2;
    while (i>0)
    {
        t =*s;
        *s = *l;
        *l = t;
        s++;
        l--;
        i--;
    }
    

}