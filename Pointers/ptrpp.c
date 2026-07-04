#include <stdio.h>

int main() {

    int age = 22;
    int *ptr = &age;

    printf("ptr = %u\n",ptr);
    ptr++; // 1 int add means 4 byte Increase in Value of ptr
    printf("ptr = %u\n",ptr);
    ptr--; // 1 int Decrease means 4 byte Decrease in value of ptr
    printf("ptr = %u",ptr);

    return 0;

}