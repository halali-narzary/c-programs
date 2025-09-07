#include <stdio.h>

int main() {
    
    int rows = 3;
    int cols = 4;
    int array[rows][cols];
    int total_sum = 0;
    int total_elements = rows * cols;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array[i][j] = (i + 1) * (j + 1);
        }
    }

    printf("Two-dimensional array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%3d ", array[i][j]);
            total_sum += array[i][j];
        }
        printf("\n");
    }

    float mean = (float)total_sum / total_elements;

    printf("\nSum of elements: %d\n", total_sum);
    printf("Mean of elements: %.2f\n", mean);

    return 0;
}
