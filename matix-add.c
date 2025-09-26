// program to add two matrices

#include <stdio.h>
#include<math.h>

int main() {
    int n, m, i, j;
    int matrix1[10][10], matrix2[10][10], sum[10][10];

    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &n, &m);

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Matrix addition
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Resultant matrix after addition:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

  return 0;
}