//यह प्रोग्राम जाँचता है कि एक संख्या अभाज्य है या नहीं।
#include <stdio.h>

int main() {
    int n, i, is_prime = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n == 0 || n == 1) {
        is_prime = 0;
    } else {
        for (i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }
    if (is_prime == 1) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
    return 0;
}
