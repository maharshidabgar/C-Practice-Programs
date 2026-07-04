#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    
    int no;
    printf("Enter number : ");
    scanf("%d", &no);

    if (no >= 0) {
        printf("Number is Positive ! \n");

        if (no % 2 == 0) {
                printf("Number is Even ! \n");
        } else {
            printf("Number is Odd ! \n");
        }
 
    } else {
        printf("Number is  Negative");
    }

    return 0;
}