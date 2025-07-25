#include <stdio.h>
#include <math.h>

int main() {
    long long decimalNum;
    long long binaryNum = 0;
    int remainder;
    int i = 1;

    printf("Enter a decimal number: ");
    scanf("%lld", &decimalNum);

    while (decimalNum != 0) {
        remainder = decimalNum % 2;
        decimalNum /= 2;
        binaryNum += remainder * i;
        i *= 10;
    }

    printf("Binary equivalent: %lld\n", binaryNum);

    return 0;
}
