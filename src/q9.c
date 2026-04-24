// Write a C program that uses a structure Point with members x and y, representing coordinates. 
// Write a function that takes two Point structures and returns the distance between them.

#include <stdio.h>
#include <math.h>

struct Point {
    float x;
    float y;
};

float distance(struct Point p1, struct Point p2) {
    float dx = p2.x - p1.x;
    float dy = p2.y - p1.y;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    struct Point point1, point2;

    printf("Enter coordinates for first point (x y): ");
    scanf("%f %f", &point1.x, &point1.y);

    printf("Enter coordinates for second point (x y): ");
    scanf("%f %f", &point2.x, &point2.y);

    float dist = distance(point1, point2);
    printf("Distance between the points: %.2f\n", dist);

    return 0;
}