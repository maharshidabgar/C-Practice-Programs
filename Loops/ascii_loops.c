#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {

    int num, originalNum, remainder, result = 0;

    printf("Enter a Number : "); // ArmStronh num = 153 is simple number is equal to all three digits cube.
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {

        remainder = num % 10;
        result = result + (remainder * remainder * remainder);
        num = num / 10;

    }

    if (result == originalNum) {
        printf("ArmStrong Number");
    } else {
        printf("Not ArmStrong Number");
    }

    return 0;
}