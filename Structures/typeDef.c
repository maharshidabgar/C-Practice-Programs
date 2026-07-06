#include <stdio.h>
#include <string.h>

typedef struct ElectronicsAndCommunicationStudent {

    char name[100];
    int rollno;
    float cgpa;

} ecs;  // Declare typedef keyword for nickname of DataType

int main() {

    struct ElectronicsAndCommunicationStudent s1;

    s1.rollno = 847;
    s1.cgpa = 5.52;
    strcpy(s1.name, "Krunal");

    printf("ECE Third Student Name is %s\n",s1.name);
    printf("ECE Third Student Roll-No is %d\n",s1.rollno);
    printf("ECE Third Student CGPAis %f\n",s1.cgpa);

    return 0;

}
