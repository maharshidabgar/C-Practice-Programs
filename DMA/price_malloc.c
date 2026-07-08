#include <stdio.h>
#include <stdlib.h>
   // Runtime Memory Allocation
int main() {

    float *ptr;
    ptr = (float *) malloc(5 * sizeof(float));

    ptr[0] = 15;
    ptr[1] = 18;
    ptr[2] = 20;
    ptr[3] = 25;
    ptr[4] = 45;

    for (int i = 0; i < 5; i++) {

        printf("%f\n", ptr[i]);

    }

    return 0;

}