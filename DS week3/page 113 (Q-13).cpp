#include <stdio.h>
#include <limits.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size < 4) {
        printf("The array must have at least 4 elements to find second smallest and second largest.\n");
        return 1;
    }

    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int smallest = INT_MAX, second_smallest = INT_MAX;
    int largest = INT_MIN, second_largest = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < second_smallest && arr[i] != smallest) {
            second_smallest = arr[i];
        }
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    if (second_smallest == INT_MAX || second_largest == INT_MIN) {
        printf("Cannot find second smallest or second largest element.\n");
        return 1;
    }

    int *ptr_second_smallest = NULL;
    int *ptr_second_largest = NULL;

    for (int i = 0; i < size; i++) {
        if (arr[i] == second_smallest && ptr_second_smallest == NULL) {
            ptr_second_smallest = &arr[i];
        }
        if (arr[i] == second_largest && ptr_second_largest == NULL) {
            ptr_second_largest = &arr[i];
        }
    }

    if (ptr_second_smallest != NULL && ptr_second_largest != NULL) {
        swap(ptr_second_smallest, ptr_second_largest);
    }

    printf("Array after interchanging second smallest and second largest:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

