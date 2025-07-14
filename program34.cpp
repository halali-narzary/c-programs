#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    
    printf("Value at ptr: %d\n", *ptr);
    printf("Address of ptr: %p\n", ptr);
    
    // Incrementing a pointer
    ptr++;
    printf("After incrementing, value at ptr: %d\n", *ptr);
    printf("After incrementing, address of ptr: %p\n", ptr);
    
    // Pointer addition
    printf("Value at ptr + 2: %d\n", *(ptr + 2));
    
    // Pointer subtraction
    int *ptr2 = &arr[3];
    printf("Pointer subtraction (ptr2 - ptr): %d\n", ptr2 - ptr);
    
    return 0;
}
