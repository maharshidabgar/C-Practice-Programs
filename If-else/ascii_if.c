#include <stdio.h>

int main() {

    char ch;
    printf("Enter character : ");
    scanf("% c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("upperCase \n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("lowerCase \n");
    } else {
        printf("Not English !!!");
    }
    return 0;
}