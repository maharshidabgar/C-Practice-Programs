#include <stdio.h>
#include <string.h>

// User Defined DataType
struct student { // Declaration of Structure
  
    int rollno;
    float cgpa;
    char name[100];

} ; // The SemiColumn is Very IMP in structure

int main() {

    struct student s1; // Variable assign for Structure
    s1.rollno = 395; // in variable assign parameters
    s1.cgpa = 7.75;

    //s1.name = "Maharshi";
    strcpy(s1.name, "Maharshi");

    printf("Student Name = %s\n",s1.name);
    printf("Student RollNo = %d\n",s1.rollno);
    printf("Student CGPA = %f\n",s1.cgpa);
    
    return 0;

}