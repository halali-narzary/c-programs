#include <stdio.h>
#include <string.h>

int main() {
    char text[200], sub[100];
    int i, j, k, found = 0, textLen, subLen;

    printf("Enter the main text: ");
    fgets(text, sizeof(text), stdin);

    printf("Enter the substring to delete: ");
    fgets(sub, sizeof(sub), stdin);

    text[strcspn(text, "\n")] = '\0';
    sub[strcspn(sub, "\n")] = '\0';

    textLen = strlen(text);
    subLen = strlen(sub);

    for (i = 0; i <= textLen - subLen; i++) {
        found = 1;
        for (j = 0; j < subLen; j++) {
            if (text[i + j] != sub[j]) {
                found = 0;
                break;
            }
        }
        if (found == 1) {
    
            for (k = i; k <= textLen - subLen; k++) {
                text[k] = text[k + subLen];
            }
            break;  
        }
    }

    printf("Text after deletion: %s\n", text);

    return 0;
}
