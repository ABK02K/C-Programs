#include <stdio.h>

int main() {
    int m, n, c, d;
    
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);
    int matrix1[m][n], matrix2[m][n], result[m][n];

    printf("Enter the elements of the first matrix: \n");
    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            scanf("%d", &matrix1[c][d]);

    printf("Enter the elements of the second matrix: \n");
    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            scanf("%d", &matrix2[c][d]);

    printf("Multiplication of the matrices:\n");
    for (c = 0; c < m; c++) {
        for (d = 0; d < n; d++) {
            result[c][d] = matrix1[c][d] * matrix2[c][d];
            printf("%d\t", result[c][d]);
        }
        printf("\n");
    }

    return 0;
}