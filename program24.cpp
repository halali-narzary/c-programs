#include <stdio.h>

int main() {
    int arr[100], n, i, pos, val;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: \n");
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position and value to insert: ");
    scanf("%d %d", &pos, &val);
    if (pos > n || pos < 1) {
        printf("Invalid position!\n");
    } else {
        for (i = n; i >= pos; --i) {
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = val;
        n++;
        printf("Array after insertion: \n");
        for (i = 0; i < n; ++i) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
