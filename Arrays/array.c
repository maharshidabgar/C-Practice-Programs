#include <stdio.h>

int main() {

    int marks[3];

    printf("Enter Physics_1 Marks : ");
    scanf("%d",&marks[0]);
    
    printf("Enter Maths_2 Marks : ");
    scanf("%d",&marks[1]);

    printf("Enter Chemistry_3 Marks : ");
    scanf("%d",&marks[2]);

    printf("Enter English_4 Marks : ");
    scanf("%d",&marks[4]);

    printf("Physics = %d, Maths = %d, Chemistry = %d, English = %d\n", marks[0], marks[1], marks[2], marks[3]);

    return 0;

}