#include <stdio.h>
#include <math.h>

int main() {

    double num, square;

    printf("Enter a Number : ");
    scanf("%lf", &num);

    square = pow(num,2);

    printf("Square of %.21f = %.21f\n", num, square);
    
    return 0;

}