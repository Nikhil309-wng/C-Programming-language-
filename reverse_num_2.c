// program to find the reverse of a number using function
#include <stdio.h>

// function to find the reverse of a number
int reverse(int num) {
    int rev = 0;
    while(num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

//main function
int main() {
    int number, reversedNumber;

    
    printf("Enter a number: ");
    scanf("%d", &number);
    reversedNumber = reverse(number);

    printf("Reversed Number: %d\n", reversedNumber);

    return 0;
}