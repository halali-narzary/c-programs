//यह प्रोग्राम N पदों तक फिबोनाची श्रृंखला ज्ञात करता है।
#include <stdio.h>

int main() {
    int i, n, t1 = 0, t2 = 1, next_term;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        next_term = t1 + t2;
        t1 = t2;
        t2 = next_term;
    }
    return 0;
}
