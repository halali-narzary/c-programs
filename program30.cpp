#include <stdio.h>

int main() {
    char s[100];
    int i, vowels = 0, consonants = 0, digits = 0, spaces = 0;
    printf("Enter a string: ");
    gets(s);
    for (i = 0; s[i] != '\0'; ++i) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
            vowels++;
        } else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            consonants++;
        } else if (s[i] >= '0' && s[i] <= '9') {
            digits++;
        } else if (s[i] == ' ') {
            spaces++;
        }
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("White spaces: %d\n", spaces);
    return 0;
}
