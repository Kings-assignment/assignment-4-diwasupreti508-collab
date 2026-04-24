// Write a C program to create a file and write a user-entered string into it. Then display a 
// message confirming that the file has been written successfully.

#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    
    fp = fopen("output.txt", "w");

    if (fp == NULL) {
        printf("File cannot be created");
        return 1;
    }


    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    fputs(str, fp);

    
    fclose(fp);

    printf("File written successfully");

    return 0;
}