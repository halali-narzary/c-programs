#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int array2D[rows][cols];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &array2D[i][j]);
        }
    }

    int evenArray[rows * cols];
    int oddArray[rows * cols];
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (array2D[i][j] % 2 == 0) {
                evenArray[evenCount] = array2D[i][j];
                evenCount++;
            } else {
                oddArray[oddCount] = array2D[i][j];
                oddCount++;
            }
        }
    }

    printf("Odd elements:\n");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", oddArray[i]);
    }
    printf("\n");

    printf("Even elements:\n");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", evenArray[i]);
    }
    printf("\n");

    return 0;
}

