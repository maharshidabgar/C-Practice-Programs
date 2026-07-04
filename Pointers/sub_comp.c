#include <stdio.h>

int main() {

    int age = 22;
    char _age = 'a';
    int *ptr = &age;
    char *_ptr = &_age;

    printf("%u, %uDifference = %u\n",ptr, _ptr, ptr-_ptr);
    
    return 0;

}