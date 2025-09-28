// program to implement selection sort

#include<stdio.h>
int main()
{
    int i, j, n, min, temp, a[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i=0; i<n; i++)
    {   
        scanf("%d", &a[i]);
    }
    for(i=0; i<n-1; i++)
    {
        min = i;
        for(j=i+1; j<n; j++)
        {
            if(a[j] < a[min])
            {
                min  = j;
            }
        }
        temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }
    printf("Sorted elements are:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}