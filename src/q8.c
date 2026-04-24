// Write a C program that defines a structure Book with members: title, author, and price. 
// Allow the user to enter details of n books and then display all books whose price is above a 
// user-defined value.
#include <stdio.h>
#include <stdlib.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    int n, i;
    float limit;

    printf("Enter number of books: ");
    scanf("%d", &n);

    struct Book b[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details for book %d\n", i + 1);

        printf("Title: ");
        scanf("%s", b[i].title);

        printf("Author: ");
        scanf("%s", b[i].author);

        printf("Price: ");
        scanf("%f", &b[i].price);
    }

    printf("\nEnter price limit: ");
    scanf("%f", &limit);

    printf("\nBooks with price above %.2f:\n", limit);
    for (i = 0; i < n; i++) {
        if (b[i].price > limit) {
            printf("\nTitle: %s\n", b[i].title);
            printf("Author: %s\n", b[i].author);
            printf("Price: %.2f\n", b[i].price);
        }
    }

    return 0;
}

