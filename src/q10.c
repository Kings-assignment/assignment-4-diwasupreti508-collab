// Write a C program that defines a structure Car with members: model, year, and mileage. 
// Store information for 3 cars and find the car with the lowest mileage.

#include <stdio.h>

struct Car {
    char model[50];
    int year;
    float mileage;
};

int main() {
    struct Car car[3];
    int i, minIndex = 0;

    
    for (i = 0; i < 3; i++) {
        printf("Enter details for car %d\n", i + 1);

        printf("Model: ");
        scanf("%s", car[i].model);

        printf("Year: ");
        scanf("%d", &car[i].year);

        printf("Mileage: ");
        scanf("%f", &car[i].mileage);
    }

    
    for (i = 1; i < 3; i++) {
        if (car[i].mileage < car[minIndex].mileage) {
            minIndex = i;
        }
    }

    
    printf("\nCar with lowest mileage:\n");
    printf("Model: %s\n", car[minIndex].model);
    printf("Year: %d\n", car[minIndex].year);
    printf("Mileage: %.2f\n", car[minIndex].mileage);

    return 0;
}