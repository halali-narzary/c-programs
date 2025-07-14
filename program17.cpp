//यह प्रोग्राम एक पूर्णांक में अंकों की संख्या गिनता है।
#include <stdio.h>

int main() {
    long long n;
    int count = 0;
    printf("Enter an integer: ");
    scanf("%lld", &n);
    if (n == 0) {
        count = 1;
    } else {
        while (n != 0) {
            n /= 10;
            ++count;
        }
    }
    printf("Number of digits: %d\n", count);
    return 0;
}
