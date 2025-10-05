// program to check whether the given year is leap year or not

#include<stdio.h>

int main(){
        
    int year;
    printf("Enter the year:\n");  // input year
    scanf("%d",&year);

    if((year%4==0 && year%100!=0) || year%400==0)      // condition to check whether the year is leap year or not
    {
        printf("%d is a leap year", year);
    }
    else {
        printf("%d is a not leap year", year);

    }

    return 0;
}