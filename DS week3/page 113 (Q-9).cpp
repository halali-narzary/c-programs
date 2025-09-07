#include <stdio.h>

int productAboveMainDiagonal(int *matrix, int size) {
    int product = 1;
    int i;
    for (i = 0; i < size - 1; i++) {
        product *= *(matrix + i * size + i + 1);
    }
    return product;
}

void printMatrix(int *matrix, int size) {
    int i, j;
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%d ", *(matrix + i * size + j));
        }
        printf("\n");
    }
}

int main() {
    int size = 3;
    int matrixA[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int diagonalProduct;

    printf("Matrix A:\n");
    printMatrix(&matrixA[0][0], size);

    diagonalProduct = productAboveMainDiagonal(&matrixA[0][0], size);

    printf("\nProduct of the elements on the diagonal above the main diagonal is: %d\n", diagonalProduct);

    return 0;
}

