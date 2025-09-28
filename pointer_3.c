// program to find the sum of n elements using dynamic memory allocation and pointer

#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, n, sum = 0, *ptr;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    ptr = (int *) malloc(n * sizeof(int));
    
    if (ptr == NULL) {
        printf(" Error!  Memory not allocated.\n");
        exit (0);
    }
    printf("Enter the elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", (ptr + i));
        sum += *(ptr + i);
    }
    printf("Sum of the elements is: %d\n", sum);
    free(ptr); 
    return 0;
}