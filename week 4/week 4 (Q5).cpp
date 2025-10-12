#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j = 0, temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[j] != '\0') {
        if (str[j] == '\n') { 
            str[j] = '\0';
            break;
        }
        j++;
    }

    j = j - 1;  
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
