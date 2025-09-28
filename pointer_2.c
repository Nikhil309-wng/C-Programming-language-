// program to fing largest and smallest element in an array using pointer
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, n, *a, largest, smallest;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    a = (int *) malloc(n * sizeof(int));
    for(i=0; i<n; i++)
    {
        scanf("%d", (a+i));
    }
    largest = *a;
    smallest = *a;
    for(i=1; i<n; i++)
    {
        if(*(a+i) > largest)
        {
            largest = *(a+i);
        }
        if(*(a+i) < smallest)
        {
            smallest = *(a+i);
        }
    }
    printf("Largest element is: %d\n", largest);
    printf("Smallest element is: %d\n", smallest);
    return 0;
}