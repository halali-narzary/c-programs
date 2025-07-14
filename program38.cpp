#include <stdio.h>

int main() {
    FILE *file_ptr;
    char data[100];

    // Writing to a file
    file_ptr = fopen("example.txt", "w");
    if (file_ptr == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    printf("Enter data to write to the file: ");
    scanf(" %[^\n]", data);
    fprintf(file_ptr, "%s", data);
    fclose(file_ptr);
    printf("Data written to file successfully.\n");

    // Reading from a file
    file_ptr = fopen("example.txt", "r");
    if (file_ptr == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    printf("Data read from the file:\n");
    while (fgets(data, 100, file_ptr) != NULL) {
        printf("%s", data);
    }
    fclose(file_ptr);
    return 0;
}
