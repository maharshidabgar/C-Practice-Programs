#include<stdio.h>

int sum(int a, int b); // Function Declare 1
void printTable(int n); // Function Declare 2

int main() {

    int n;
    printf("Enter N number : ");
    scanf("%d",&n);

    // Calling Function
    printTable(n); // Argument / Actual Parameter
    return 0;

}

// Function Definition

int sum(int x, int y) {
    return x + y;
}

void printTable(int n) { // Parameter / Formal Parameter
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}
