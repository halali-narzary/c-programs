#include <stdio.h>

int main() {
    int arr[100], n, i, search_element, found = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: \n");
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &search_element);
    for (i = 0; i < n; ++i) {
        if (arr[i] == search_element) {
            found = 1;
            break;
        }
    }
    if (found == 1) {
        printf("Element %d found at position %d.\n", search_element, i + 1);
    } else {
        printf("Element %d not found in the array.\n", search_element);
    }
    return 0;
}
