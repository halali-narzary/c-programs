#include <stdio.h>
int main() {
    int n, i, j, sum = 0;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    int a[n][n];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i > j) {
                sum += a[i][j];
            }
        }
    }
    printf("The sum of elements below the main diagonal is: %d\n", sum);
    return 0;
}

