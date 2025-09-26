// program to find odd and even numbers in an array and its count

#include <stdio.h>

int main(){
    int n , arr[100],  even_count=0, odd_count=0, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
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

    printf("Even numbers count: %d\n", even_count);
    printf("Odd numbers count: %d\n", odd_count);

    return 0;
}