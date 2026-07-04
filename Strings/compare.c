#include <stdio.h>
#include <string.h>

int main() {

    char fStr[] = "HHHA";
    char sStr[] = "HHHB";

    printf("%d\n", strcmp(fStr, sStr));

    return 0;

}