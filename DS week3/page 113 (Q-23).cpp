#include <stdio.h>

int main() {
    int num, temp, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;

    while (temp != 0) {
        temp /= 10;
        count++;
    }

    int digits[count];
    for (int i = count - 1; i >= 0; i--) {
        digits[i] = num % 10;
        num /= 10;
    }

    for (int i = 0; i < count; i++) {
        printf("%d ", digits[i]);
    }

    return 0;
}

