#include <stdio.h>

void Hello(); // Declaration = Function banavo
void goodBye();

int main() {


    Hello(); // Call = Function Bolavo Use karva
    goodBye();
    Hello();
    goodBye();
    return 0;

}

void Hello() {

    printf("Hello ! \n");

}

void goodBye() { // Function Definition = Work

    printf("Good Bye : \n");

}