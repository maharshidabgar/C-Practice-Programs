#include <stdio.h>

struct student {
    char name[100];
    int rollno;
    float cgpa;
};

int main() {

    struct student s1 = {"Shaine", 2458, 8.9};
    printf("Student cgpa = %f\n", s1.cgpa);

    return 0;

}