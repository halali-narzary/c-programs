#include <stdio.h>

int main() {
    float arr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int n = sizeof(arr) / sizeof(arr[0]);
    float new_num;
    int pos;

    printf("Enter the number to insert: ");
    scanf("%f", &new_num);
    printf("Enter the position to insert (0 to %d): ", n);
    scanf("%d", &pos);

    if (pos >= 0 && pos <= n) {
        float new_arr[n + 1];
        for (int i = 0; i < pos; i++) {
            new_arr[i] = arr[i];
        }
        new_arr[pos] = new_num;
        for (int i = pos; i < n; i++) {
            new_arr[i + 1] = arr[i];
        }
        n++;
        for (int i = 0; i < n; i++) {
            printf("%.1f ", new_arr[i]);
        }
    } else {
        printf("Invalid position.\n");
    }

    return 0;
}

