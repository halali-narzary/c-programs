#include <stdio.h>

int sumMainDiagonal(int *matrix, int size) {
    int sum = 0;
    int i;
    for (i = 0; i < size; i++) {
        sum += *(matrix + i * size + i);
    }
    return sum;
}

int main() {
    int size = 3;
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int diagonalSum = sumMainDiagonal(&matrix[0][0], size);
    printf("The sum of the main diagonal elements is: %d\n", diagonalSum);
    return 0;
}

