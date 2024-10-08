#include <stdio.h>

int main() {
    int m, n, c, d;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);
    int matrix[m][n], transpose[n][m];

    printf("Enter the elements of the matrix: \n");
    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            scanf("%d", &matrix[c][d]);

    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            transpose[d][c] = matrix[c][d];

    printf("Transpose of the matrix:\n");
    for (c = 0; c < n; c++) {
        for (d = 0; d < m; d++)
            printf("%d\t", transpose[c][d]);
        printf("\n");
    }

    return 0;
}