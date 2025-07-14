#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file1, *file2, *file3;
    char ch;

    file1 = fopen("file1.txt", "r");
    file2 = fopen("file2.txt", "r");
    file3 = fopen("file3.txt", "w");

    if (file1 == NULL || file2 == NULL || file3 == NULL) {
        printf("Error in opening files.\n");
        exit(1);
    }

    // Copy contents of file1 to file3
    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, file3);
    }

    // Copy contents of file2 to file3
    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, file3);
    }
    
    printf("Files merged successfully into file3.txt\n");

    fclose(file1);
    fclose(file2);
    fclose(file3);
    return 0;
}
