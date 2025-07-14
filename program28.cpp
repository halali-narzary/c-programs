//यह प्रोग्राम लाइब्रेरी फ़ंक्शंस का उपयोग किए बिना एक स्ट्रिंग की लंबाई ज्ञात करता है।
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
