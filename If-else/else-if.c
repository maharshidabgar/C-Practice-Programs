#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {

    int marks;
    printf("Enter Student Marks (0-100) : ");
    scanf("%d", &marks);

    if (marks >= 0 && marks <= 30) {
        printf("Student is Fail ! \n");
    } else if (marks > 30 && marks <= 100) {
        printf("Student is Pass ! \n");
    } else {
        printf("Wrong Marks !");
    }
    return 0;
    
}