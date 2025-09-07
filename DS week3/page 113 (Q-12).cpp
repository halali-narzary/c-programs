#include <stdio.h>

void readArray(float arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        scanf("%f", &arr[i]);
    }
}

void mergeArrays(float arr1[], int size1, float arr2[], int size2, float mergedArr[]) {
    int i, j;
    for (i = 0; i < size1; i++) {
        mergedArr[i] = arr1[i];
    }
    for (j = 0; j < size2; j++) {
        mergedArr[size1 + j] = arr2[j];
    }
}

void displayReverse(float arr[], int size) {
    int i;
    for (i = size - 1; i >= 0; i--) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size1, size2;
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    float array1[size1];
    float array2[size2];
    float mergedArray[size1 + size2];

    printf("Enter the elements of the first array:\n");
    readArray(array1, size1);

    printf("Enter the elements of the second array:\n");
    readArray(array2, size2);

    mergeArrays(array1, size1, array2, size2, mergedArray);

    printf("The merged array in reverse order is:\n");
    displayReverse(mergedArray, size1 + size2);

    return 0;
}

