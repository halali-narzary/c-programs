#include <stdio.h>

int main() {
    char s[100];
    int length = 0;
    printf("Enter a string: ");
    gets(s);
    while (s[length] != '\0') {
        length++;
    }
    printf("Length of the string: %d\n", length);
    return 0;
}
