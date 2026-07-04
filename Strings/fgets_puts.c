#include <stdio.h>

int main(void) {
    char str[100];

    // if (fgets(str, sizeof(str), stdin) != NULL) {
    //     puts(str);
    // }

    // gets(str);
    // puts(str);

    fgets(str, 100, stdin);
    puts(str);

    return 0;
}