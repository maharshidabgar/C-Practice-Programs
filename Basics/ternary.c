#include <stdio.h>
#include <math.h>
                     // Using of Ternary Operator
int main() {

    int age;

    printf("Enter Age : ");
    scanf("%d", &age);

    age >=18 ? printf("Adult \n") : printf("Not Adult \n");
    
    return 0;
}