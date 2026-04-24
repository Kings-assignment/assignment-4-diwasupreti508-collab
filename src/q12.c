// Write a C program to read the contents of a text file and display them on the screen.
 
#include <stdio.h>

int main() {
FILE *file;
char filename[100], line[1000];
printf("Enter filename: ");
scanf("%s", filename);

file = fopen(filename, "r");

if (file == NULL) {
    printf("Cannot open file");
    return 1;
}

while (fgets(line, sizeof(line), file)) {
    printf("%s", line);
}

fclose(file);

return 0;
}
