// program to passing an entire array to a function

#include <stdio.h>

//function to pass a array and traverse the array 
void display(int arr[], int size)  
{
    printf("Array elements are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}



int main()  //main function
{
    int myArray[] = {1, 2, 3, 4, 5};
    int size = sizeof(myArray) / sizeof(myArray[0]);
    display(myArray, size);
    return 0;
} 