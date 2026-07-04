#include <Stdio.h>

int main() {

    char star = '*';
    char *ptr = &star;

    printf("ptr = %u\n",ptr);
    ptr++;
    printf("ptr = %u\n",ptr);
    ptr--;
    printf("ptr = %u\n",ptr);
    
    return 0;

}