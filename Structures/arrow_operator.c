#include <stdio.h>

struct student {
    char name[100];
    int rollno;
    float cgpa;
};

int main() {

    struct student s1 = {"Shaine", 2458, 8.9};
    printf("Student cgpa = %f\n", s1.cgpa);

    struct student*ptr = &s1;
    printf("Student.CGPA with ptr = %f\n", (*ptr).cgpa);

    // Arrow Operator Usage

    printf("Student->CGPA with ptr = %f\n", ptr->cgpa);
    printf("Student->Roll with ptr = %d\n", ptr->rollno);
    printf("Student-Name with ptr = %s\n", ptr->name);
    
    
    return 0;

}