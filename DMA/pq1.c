#include <stdio.h>
#include <stdlib.h>

int main() {

    int *ptr;

    ptr = (int *)calloc(5, sizeof(int));

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &ptr[i]);
    }

    ptr = (int *)realloc(ptr, 8 * sizeof(int));

    printf("Enter 3 more numbers:\n");
    for (int i = 5; i < 8; i++) {
        scanf("%d", &ptr[i]);
    }

    printf("\nAll numbers are:\n");
    for (int i = 0; i < 8; i++) {
        printf("Number %d is %d\n", i + 1, ptr[i]);
    }

    free(ptr);

    return 0;
}