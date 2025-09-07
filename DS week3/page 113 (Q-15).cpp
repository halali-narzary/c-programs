#include <stdio.h>
#define MAX_SIZE 10

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, cols;
    int sum = 0;

    printf("Enter the number of rows for the matrix: ");
    
    if (scanf("%d", &rows) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    printf("Enter the number of columns for the matrix: ");
    
    if (scanf("%d", &cols) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (rows != cols || rows > MAX_SIZE || cols > MAX_SIZE) {
        printf("\nError: The matrix must be a square matrix (rows = columns) and within the maximum size (%d).\n", MAX_SIZE);
        return 1;
    }

    printf("\nEnter elements for the %d x %d matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position [%d][%d]: ", i, j);
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Invalid input. Please enter an integer.\n");
                return 1;
            }
        }
    }

    printf("\nDisplaying the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++) {
        sum += matrix[i][i];
    }

    printf("\nSum of the diagonal elements is: %d\n", sum);

    return 0;
}

