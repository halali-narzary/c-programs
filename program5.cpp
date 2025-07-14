//यह प्रोग्राम दो संख्याओं में सबसे बड़ी संख्या ज्ञात करता है।
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf("%d is the largest number.\n", a);
    } else {
        printf("%d is the largest number.\n", b);
    }
    return 0;
}
