//यह प्रोग्राम एक दी गई संख्या का गुणा तालिका प्रिंट करता है।
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; ++i) {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}
