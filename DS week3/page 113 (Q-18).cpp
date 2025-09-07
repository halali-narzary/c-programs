#include <stdio.h>
int isUpperTriangular(int a[][10], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
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
    if (isUpperTriangular(a, n)) {
        printf("The matrix is upper triangular.\n");
    } else {
        printf("The matrix is not upper triangular.\n");
    }
    return 0;
}

