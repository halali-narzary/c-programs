#include <stdio.h>

int main() {
    int n;
    int firstTerm = 0, secondTerm = 1;
    int nextTerm;
    int i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else if (n == 1) {
        printf("%d\n", firstTerm);
    } else {
        printf("%d, %d", firstTerm, secondTerm);
        for (i = 3; i <= n; ++i) {
            nextTerm = firstTerm + secondTerm;
            printf(", %d", nextTerm);
            firstTerm = secondTerm;
            secondTerm = nextTerm;
        }
        printf("\n");
    }

    return 0;
}
