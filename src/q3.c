// Write a C program that checks if a given string is a palindrome using pointers.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char *start, *end;
    int isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    start = str;
    end = str + strlen(str) - 1;

    while (start < end) {
        if (*start != *end) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        printf("Palindrome");
    else
        printf("Not a palindrome");

    return 0;
}