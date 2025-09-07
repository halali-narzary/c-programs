#include <stdio.h>

int countNonZeroElements(int *matrix, int rows, int cols) {
    int count = 0;
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (*(matrix + i * cols + j) != 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int rows = 3;
    int cols = 4;
    int matrix[3][4] = {
        {1, 0, 2, 0},
        {3, 4, 0, 5},
        {0, 6, 0, 7}
    };
    int nonZeroCount;

    nonZeroCount = countNonZeroElements(&matrix[0][0], rows, cols);

    printf("The total number of non-zero elements is: %d\n", nonZeroCount);

    return 0;
}

