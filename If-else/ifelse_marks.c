#include <stdio.h>
#include <math.h>

int main() {

    int mark;
    printf("Enter Bache ka Mark (0-100) : ");
    scanf("%d", &mark);

    if (mark >= 90 && mark <= 100) {
        printf("Bacha achived A+ Grade... \n");
    } else if (mark >= 70 && mark < 90) {
        printf("Bacha achived A Grade... \n");
    } else if (mark >= 30 && mark < 70) {
        printf("Bacha achived B Grade... \n");
    } else if (mark < 30) {
        printf("Bacha achived C Grade... \n");
    } else {
        printf("Tamaru bachu Fail che...");
    }
    return 0;
}