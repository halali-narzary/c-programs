//यह प्रोग्राम एक संख्या के अंकों का योग ज्ञात करता है।
#include <stdio.h>

int main() {
    int n, sum = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;
        sum += remainder;
        n /= 10;
    }
    printf("Sum of digits = %d\n", sum);
    return 0;
}
