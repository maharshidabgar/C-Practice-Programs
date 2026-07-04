#include <stdio.h>

void Namaste();
void Bonjour();

int main() {
    printf("Enter f for French & i for indian : ");
    char ch;
    scanf("%c", &ch);

    if(ch == 'i' || ch == 'I') {

        Namaste();

    } else if (ch == 'f' || ch == 'F') {

        Bonjour();

    } else {

        printf("Invalid Input ! Please enter 'f' OR 'i'.\n ");

    }

    return 0;

}

void Namaste() {
    printf("Namaste\n");
}

void Bonjour() {
    printf("Bonjour\n");
}