#include <stdio.h>

int readSize() {
    int size;
    printf("Enter the size of the square: ");
    scanf("%d", &size);
    return size;
}

void drawSquare(int size) {
    int i, j;
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int size;
    size = readSize();
    drawSquare(size);
    return 0;
}

