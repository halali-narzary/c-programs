#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   

int main() {
   
    int array[100];
    int n = 100;

    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        array[i] = rand() % 101;
    }

    printf("Pairs of elements whose sum is 50:\n");
    int found_pair = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (array[i] + array[j] == 50) {
                printf("(%d, %d)\n", array[i], array[j]);
                found_pair = 1;
            }
        }
    }

    if (!found_pair) {
        printf("No pairs found with a sum of 50.\n");
    }

    return 0;
}
