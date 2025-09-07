#include <stdio.h>
int isLowerTriangular(int a[][10], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i][j] != 0) {
                return 0;
            }
        }
    }
    return 1;
}
int main() {
    int n, i, j;
    printf("Enter the size of the square matrix (max 10x10): ");
    scanf("%d", &n);
    int a[10][10];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    if (isLowerTriangular(a, n)) {
        printf("The matrix is lower triangular.\n");
    } else {
        printf("The matrix is not lower triangular.\n");
    }
    return 0;
}

