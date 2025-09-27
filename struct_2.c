// program to check whether two given dates are equal or not using structure
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
}d1, d2 ;

int main(){
    // taking input from the user
    printf("Enter first date (dd mm yyyy): ");
    scanf("%d %d %d", &d1.day, &d1.month, &d1.year);
    printf("Enter second date (dd mm yyyy): ");
    scanf("%d %d %d", &d2.day, &d2.month, &d2.year);

    // checking whether the two dates are equal or not
    if(d1.day == d2.day && d1.month == d2.month && d1.year == d2.year){
        printf("The two dates are equal.\n");
    } else {
        printf("The two dates are not equal.\n");
    }

    return 0;
}