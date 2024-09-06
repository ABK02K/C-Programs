#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the matrix: ");
    scanf("%d", &size); 
    int matrix[size][size];
    int diagonalSum = 0;
    
    printf("Enter the elements of the %dx%d matrix:\n", size, size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j) {
                diagonalSum += matrix[i][j];
            }
        }
    }

    printf("The sum of the diagonal elements of the matrix is: %d\n", diagonalSum);

    return 0;
}
