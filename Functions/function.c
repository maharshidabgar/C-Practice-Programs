#include <stdio.h>

// Declaration Prototype

void printHello(); // Function declare outside the main() function

int main() {  // int return int datatype

    printHello(); // Function Call
    return 0;

}

// Function Definition

void printHello() { // void not return Anything
    printf("Hello ! \n");
    printf("My name is Maharshi ! \n");
}