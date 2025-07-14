#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *ptr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory
    ptr = (int*)malloc(n * sizeof(int));
    
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &ptr[i]);
    }

    printf("The elements are:\n");
    for (i = 0; i < n; ++i) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(ptr);
    
    printf("Memory freed successfully.\n");
    return 0;
}
