#include <stdio.h>

float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);

int main() {
    printf("Square Area = %.2f\n", squareArea(5));
    printf("Circle Area = %.2f\n", circleArea(3));
    printf("Rectangle Area = %.2f\n", rectangleArea(4, 6));

    return 0;
}

float squareArea(float side) {
    return side * side;
}

float circleArea(float rad) {
    return 3.14 * rad * rad;
}

float rectangleArea(float a, float b) {
    return a * b;
}