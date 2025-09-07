#include <stdio.h>

int main() {
    
    int size = 10;
    int array[size];
    int temp;

    for (int i = 0; i < size; i++) {
        array[i] = i + 1;
    }

    printf("Original array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    if (size >= 4) { 
        temp = array[1];
        array[1] = array[size - 2];
        array[size - 2] = temp;
    } else {
        printf("Array is too small to perform the interchange.\n");
    }

    printf("Array after interchange:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
