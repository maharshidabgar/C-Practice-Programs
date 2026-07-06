#include <stdio.h>

struct student {  // First declare Structure after thats use Any Functions

    char name[100];
    int rollno;
    float cgpa;

};

void printInfo(struct student s1);

int main() {
    
    struct student s1 = {"Mahek", 492, 7.85};
    printInfo(s1); // Call by Value


     s1.rollno = 156;
    printf("Student.Roll with ptr = %d\n", s1.rollno);

    return 0;

}

void printInfo(struct student s1) {

    // Using dot(.) Operator

    printf("Student Information : \n\n");

    printf("Student.CGPA with ptr = %f\n", s1.cgpa);
    printf("Student.Roll with ptr = %d\n", s1.rollno);
    printf("Student.Name with ptr = %s\n", s1.name);

    s1.rollno = 156; // Call By Refrence

}