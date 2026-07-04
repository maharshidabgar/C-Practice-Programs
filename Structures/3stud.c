#include <stdio.h>
#include <string.h>

struct student {

    char name[100];
    int rollno;
    float cgpa;

};

int main() {

    struct student s1;
    s1.rollno = 482;
    s1.cgpa = 6.98;
    strcpy(s1.name, "Taniya");

    printf("Girl name = %s\n",s1.name);
    printf("Girl roll-no = %d\n",s1.rollno);
    printf("Girl CGPA = %f\n\n",s1.cgpa);


    struct student s2;
    s2.rollno = 562;
    s2.cgpa = 8.95;
    strcpy(s2.name, "Nimisha");

    printf("Second Girl Name = %s\n",s2.name);
    printf("Second Girl Roll-No = %d\n",s2.rollno);
    printf("Girl CGPA = %f\n\n",s2.cgpa);

    
    struct student s3;
    s3.rollno = 982;
    s3.cgpa = 7.92;
    strcpy(s3.name, "KuldeepSinh");

    printf("Darbar name = %s\n",s3.name);
    printf("Darbar roll-no = %d\n",s3.rollno);
    printf("Darbar CGPA = %f\n\n",s3.cgpa);


    return 0;

}