// program to find any element in an array using linear search

#include <stdio.h>

int main(){

    int i, n, arr[100], item;

    printf ("Enter number of elements in array: ");  // size of the array
    scanf("%d", &n);

    printf("Enter the elements of array \n");   // elements of the array
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the element to be searched: ");       // element to be searched
    scanf("%d", &item);


    // implementing linear search
    for(i=0; i<n; i++)
    {
        if(arr[i] == item){
            printf("Element found at position %d\n", i+1);
            break;
        }
    }

    // condition to check if the element is not found in the array
    if (i == n)
        printf("Element not found in the array\n"); 

    
    return 0;

}