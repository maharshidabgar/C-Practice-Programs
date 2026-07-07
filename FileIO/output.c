#include <stdio.h>

int main() {

    FILE *fptr;

    fptr = fopen("test.txt", "w");   // if running from repo root

    if (fptr == NULL) {
        printf("File not opened\n");
        return 1;
    }

    fprintf(fptr, "MANGO");

    fclose(fptr);
    return 0;

}