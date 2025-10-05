// program to find the largest element in a matrix

#include <stdio.h>

int main()
 {
    int  i, j, largest;
    int matrix[4][4] , SIZE=2;

    printf("Enter the elements of the matrix :\n");    // input elements of the matrix
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    largest = matrix[0][0]; // Initialize largest with the first element

    for (i = 0; i < SIZE; i++)    // traversing the matrix to find the largest element
     {
        for (j = 0; j < SIZE; j++) {
            if (matrix[i][j] > largest) {
                largest = matrix[i][j];
            }
        }
    }

    printf("The largest element in the matrix is: %d\n", largest);     // printing the largest element

    return 0;
}