// program to demonstrate the use of enumeration in C
#include <stdio.h>

enum Weekday {                    // defining an enumeration type named Weekday
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    enum Weekday today;     // declaring a variable of type Weekday
    today = WEDNESDAY;         // assigning a value to the variable

    printf("Day number: %d\n", today);
    printf("Day name: ");

    switch (today)              // switch case to print the name of the day
     {             
        case SUNDAY:    printf("Sunday\n"); break;
        case MONDAY:    printf("Monday\n"); break;
        case TUESDAY:   printf("Tuesday\n"); break;
        case WEDNESDAY: printf("Wednesday\n"); break;
        case THURSDAY:  printf("Thursday\n"); break;
        case FRIDAY:    printf("Friday\n"); break;
        case SATURDAY:  printf("Saturday\n"); break;
    }

    return 0;
}
