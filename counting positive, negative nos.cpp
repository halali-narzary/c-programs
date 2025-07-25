#include <stdio.h>

int main() {
    int num;
    int positiveCount = 0;
    int negativeCount = 0;
    int i;
    int totalNumbers;

    printf("Enter the total number of integers you want to enter: ");
    scanf("%d", &totalNumbers);

    printf("Enter %d integers:\n", totalNumbers);
    for (i = 0; i < totalNumbers; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        if (num > 0) {
            positiveCount++;
        } else if (num < 0) {
            negativeCount++;
        }
    }

    printf("\n--- Results ---\n");
    printf("Total positive numbers: %d\n", positiveCount);
    printf("Total negative numbers: %d\n", negativeCount);

    return 0;
}

