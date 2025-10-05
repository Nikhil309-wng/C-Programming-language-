// program to implement bubble sort

#include<stdio.h>

int main()
{
    int i, j, n, temp, a[100];

    printf("Enter the number of elements: ");  // size of the array
    scanf("%d", &n);

    printf("Enter the elements:\n");        // elements of the array
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    // implementing bubble sort
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    // printing the sorted array
    printf("Sorted elements are:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");


    return 0;  // return statement executed successfully when program ends without any error
}