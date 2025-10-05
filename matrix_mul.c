// program to multiply two matrices

#include <stdio.h>
#include<math.h>

int main()
 {
    int n, m, p, q, i, j, k;
    int matrix1[10][10], matrix2[10][10], result[10][10];    // declaring three 2D arrays to store the matrices and their product

    printf("Enter the number of rows and columns of the first matrix: ");       // input number of rows and columns of the first matrix
    scanf("%d %d", &n, &m);

    printf("Enter the number of rows and columns of the second matrix: ");    // input number of rows and columns of the second matrix
    scanf("%d %d", &p, &q);

    if (m != p)   // condition to check if matrix multiplication is possible
    {
        printf("Matrix multiplication is not possible (incompatible dimensions).\n");
        return 0;
    }

    printf("Enter the elements of the first matrix:\n");    // input elements of the first matrix
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");     //input elements of the second matrix
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Initialize result matrix to zero
    for (i = 0; i < n; i++) {
        for (j = 0; j < q; j++) {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (i = 0; i < n; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < m; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Resultant matrix after multiplication:\n");     // printing the resultant matrix
    for (i = 0; i < n; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}