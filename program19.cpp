//यह प्रोग्राम एक ऐरे में सबसे बड़ा तत्व ज्ञात करता है।
#include <stdio.h>

int main() {
    int i, n;
    float arr[100];
    printf("Enter the number of elements (1 to 100): ");
    scanf("%d", &n);
    printf("Enter numbers: \n");
    for (i = 0; i < n; ++i) {
        scanf("%f", &arr[i]);
    }
    for (i = 1; i < n; ++i) {
        if (arr[0] < arr[i]) {
            arr[0] = arr[i];
        }
    }
    printf("Largest element = %.2f\n", arr[0]);
    return 0;
}
