#include <stdio.h>

struct Student {
    char name[50];
    int roll_number;
    float marks;
};

int main() {
    struct Student s1;
    printf("Enter student name: ");
    scanf("%s", s1.name);
    printf("Enter roll number: ");
    scanf("%d", &s1.roll_number);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    printf("\nDisplaying Student Information:\n");
    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.roll_number);
    printf("Marks: %.2f\n", s1.marks);
    return 0;
}
