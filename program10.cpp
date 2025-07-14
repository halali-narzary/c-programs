#include <stdio.h>

int main() {
    int n, reversed_n = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;
        reversed_n = reversed_n * 10 + remainder;
        n /= 10;
    }
    printf("Reversed number = %d\n", reversed_n);
    return 0;
}
