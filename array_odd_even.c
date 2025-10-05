// program to find odd and even numbers in an array and its count

#include <stdio.h>

int main(){
    int n , arr[100],  even_count=0, odd_count=0, i;
    printf("Enter the number of elements in the array: "); // size of the array
    scanf("%d", &n);

    printf("Enter the elements of the array: ");    // elements of the array
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // counting even and odd numbers
    for(i=0; i<n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }

    printf("Even numbers count: %d\n", even_count);  // printing the count of even numbers
    printf("Odd numbers count: %d\n", odd_count);    // printing the count of odd numbers

    return 0;
}