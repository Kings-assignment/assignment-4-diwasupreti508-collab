// Write a C program that stores student records (name, roll number, and marks) into a 
// file and then reads and displays all stored records.

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *file;
    struct Student s;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", s.name);

        printf("Roll: ");
        scanf("%d", &s.roll);

        printf("Marks: ");
        scanf("%f", &s.marks);

        fprintf(file, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(file);

    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("\nStored Student Records:\n");

    while (fscanf(file, " %[^\n] %d %f", s.name, &s.roll, &s.marks) != EOF) {
        printf("Name: %s\n", s.name);
        printf("Roll: %d\n", s.roll);
        printf("Marks: %.2f\n\n", s.marks);
    }

    fclose(file);

    return 0;
}