#include <stdio.h>

int main() {
    int r, c, i, j;
    int a[10][10], b[10][10], sum[10][10];
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter elements of matrix 1:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of matrix 2:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nSum of the two matrices:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
