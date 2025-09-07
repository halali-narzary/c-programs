#include <stdio.h>
#include <stdlib.h>
#define MAX_DIM 10

void read_3d_matrix(int p, int q, int r, int matrix[MAX_DIM][MAX_DIM][MAX_DIM]) {
    printf("Enter elements for the %d x %d x %d matrix:\n", p, q, r);
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < r; k++) {
                printf("Enter element at position [%d][%d][%d]: ", i, j, k);
                
                if (scanf("%d", &matrix[i][j][k]) != 1) {
                    printf("Invalid input. Please enter an integer.\n");
                    while (getchar() != '\n');
                    k--; 
                }
            }
        }
    }
}

void display_3d_matrix(int p, int q, int r, int matrix[MAX_DIM][MAX_DIM][MAX_DIM]) {
    printf("Displaying the %d x %d x %d matrix:\n", p, q, r);
    for (int i = 0; i < p; i++) {
        printf("--- Layer %d ---\n", i);
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < r; k++) {
                printf("%d\t", matrix[i][j][k]);
            }
            printf("\n");
        }
    }
}

void read_2d_matrix(int rows, int cols, int matrix[MAX_DIM][MAX_DIM]) {
    printf("Enter elements for the %d x %d matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position [%d][%d]: ", i, j);
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Invalid input. Please enter an integer.\n");
                while (getchar() != '\n');
                j--;
            }
        }
    }
}

void display_2d_matrix(int rows, int cols, int matrix[MAX_DIM][MAX_DIM]) {
    printf("Displaying the %d x %d matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void add_matrices(int r1, int c1, int r2, int c2, int matrix1[MAX_DIM][MAX_DIM], int matrix2[MAX_DIM][MAX_DIM]) {
    if (r1 != r2 || c1 != c2) {
        printf("Matrices cannot be added. They must have the same dimensions.\n");
        return;
    }

    int sum[MAX_DIM][MAX_DIM];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Sum of the two matrices:\n");
    display_2d_matrix(r1, c1, sum);
}

void transpose_matrix(int rows, int cols, int matrix[MAX_DIM][MAX_DIM]) {
    int transpose[MAX_DIM][MAX_DIM];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("Transpose of the matrix:\n");
    display_2d_matrix(cols, rows, transpose);
}

void multiply_matrices(int r1, int c1, int r2, int c2, int matrix1[MAX_DIM][MAX_DIM], int matrix2[MAX_DIM][MAX_DIM]) {
    if (c1 != r2) {
        printf("Matrices cannot be multiplied. The number of columns in the first matrix must be equal to the number of rows in the second.\n");
        return;
    }

    int product[MAX_DIM][MAX_DIM];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            product[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Product of the two matrices:\n");
    display_2d_matrix(r1, c2, product);
}

int main() {
    int choice;
    int p, q, r;
    int matrix3D[MAX_DIM][MAX_DIM][MAX_DIM];
    int rows1, cols1, rows2, cols2;
    int matrix1[MAX_DIM][MAX_DIM], matrix2[MAX_DIM][MAX_DIM];

    do {
        printf("\n--- Matrix Operations Menu ---\n");
        printf("1. Read and Display a 3D Matrix\n");
        printf("2. Find the Sum of Two 2D Matrices\n");
        printf("3. Find the Transpose of a 2D Matrix\n");
        printf("4. Find the Product of Two 2D Matrices\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); 
            continue;
        }

        switch (choice) {
            case 1:
                printf("Enter dimensions p, q, r (max %d): ", MAX_DIM);
                if (scanf("%d %d %d", &p, &q, &r) != 3 || p > MAX_DIM || q > MAX_DIM || r > MAX_DIM) {
                    printf("Invalid dimensions. Please enter positive integers within the limit.\n");
                    while (getchar() != '\n');
                    break;
                }
                read_3d_matrix(p, q, r, matrix3D);
                display_3d_matrix(p, q, r, matrix3D);
                break;

            case 2:
                printf("--- Sum of Two Matrices ---\n");
                printf("Enter dimensions for the first matrix (rows cols): ");
                if (scanf("%d %d", &rows1, &cols1) != 2 || rows1 > MAX_DIM || cols1 > MAX_DIM) {
                    printf("Invalid dimensions. Exiting operation.\n");
                    while (getchar() != '\n');
                    break;
                }
                read_2d_matrix(rows1, cols1, matrix1);

                printf("Enter dimensions for the second matrix (rows cols): ");
                if (scanf("%d %d", &rows2, &cols2) != 2 || rows2 > MAX_DIM || cols2 > MAX_DIM) {
                    printf("Invalid dimensions. Exiting operation.\n");
                    while (getchar() != '\n');
                    break;
                }
                read_2d_matrix(rows2, cols2, matrix2);

                add_matrices(rows1, cols1, rows2, cols2, matrix1, matrix2);
                break;

            case 3:
                printf("--- Transpose of a Matrix ---\n");
                printf("Enter dimensions for the matrix (rows cols): ");
                if (scanf("%d %d", &rows1, &cols1) != 2 || rows1 > MAX_DIM || cols1 > MAX_DIM) {
                    printf("Invalid dimensions. Exiting operation.\n");
                    while (getchar() != '\n');
                    break;
                }
                read_2d_matrix(rows1, cols1, matrix1);
                transpose_matrix(rows1, cols1, matrix1);
                break;

            case 4:
                printf("--- Product of Two Matrices ---\n");
                printf("Enter dimensions for the first matrix (rows cols): ");
                if (scanf("%d %d", &rows1, &cols1) != 2 || rows1 > MAX_DIM || cols1 > MAX_DIM) {
                    printf("Invalid dimensions. Exiting operation.\n");
                    while (getchar() != '\n');
                    break;
                }
                read_2d_matrix(rows1, cols1, matrix1);

                printf("Enter dimensions for the second matrix (rows cols): ");
                if (scanf("%d %d", &rows2, &cols2) != 2 || rows2 > MAX_DIM || cols2 > MAX_DIM) {
                    printf("Invalid dimensions. Exiting operation.\n");
                    while (getchar() != '\n');
                    break;
                }
                read_2d_matrix(rows2, cols2, matrix2);
                
                multiply_matrices(rows1, cols1, rows2, cols2, matrix1, matrix2);
                break;

            case 5:
                printf("Exiting program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please enter a number between 1 and 5.\n");
                break;
        }
    } while (choice != 5);

    return 0;
}

