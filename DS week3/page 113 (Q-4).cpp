#include <stdio.h>

int main() {
    
    int size = 5;
    int array[size];
    int sum_of_squares = 0;

    for (int i = 0; i < size; i++) {
        array[i] = i + 1;
    }

    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    for (int i = 0; i < size; i++) {
        sum_of_squares += array[i] * array[i];
    }

    printf("Sum of squares of elements: %d\n", sum_of_squares);

    return 0;
}
