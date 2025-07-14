//यह प्रोग्राम दो संख्याएँ इनपुट करता है और उनका योग प्रिंट करता है।
#include <stdio.h>

int main() {
    int num1, num2, sum;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("Sum = %d\n", sum);
    return 0;
}
