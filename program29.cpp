#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, length, is_palindrome = 1;
    printf("Enter a string: ");
    gets(s);
    length = strlen(s);
    for (i = 0; i < length / 2; ++i) {
        if (s[i] != s[length - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }
    if (is_palindrome == 1) {
        printf("%s is a palindrome.\n", s);
    } else {
        printf("%s is not a palindrome.\n", s);
    }
    return 0;
}
