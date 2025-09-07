#include <stdio.h>

void addMatrices(int *matrix1, int *matrix2, int *result, int size) {
    int i, j;
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            *(result + i * size + j) = *(matrix1 + i * size + j) + *(matrix2 + i * size + j);
        }
    }
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
    int matrixB[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    int sumMatrix[3][3];

    addMatrices(&matrixA[0][0], &matrixB[0][0], &sumMatrix[0][0], size);

    printf("Matrix A:\n");
    printMatrix(&matrixA[0][0], size);

    printf("\nMatrix B:\n");
    printMatrix(&matrixB[0][0], size);

    printf("\nSum of the matrices:\n");
    printMatrix(&sumMatrix[0][0], size);

    return 0;
}

