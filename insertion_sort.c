// program to implement insertion sort

#include<stdio.h>

int main()            // main function
{
    int i, j, n, key, a[100];
    printf("Enter the number of elements: ");     // size of the array
    scanf("%d", &n);
    printf("Enter the elements:\n");        // elements of the array
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    // implementing insertion sort
    for(i=1; i<n; i++)
    {
        key = a[i];
        j = i - 1;
        while(j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }


    // printing the sorted array
    printf("Sorted elements are:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    
    return 0;
}