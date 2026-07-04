#include <stdio.h>

int main() {
    
    int x = 2;

    if (x=0) {  // this op is 0 in if so false and 1 so first condition is run
        printf("x is equal to 1");
        printf("%d \n", x);
    } else {
        printf("x is not equal to 1");
    }

    return 0;
}