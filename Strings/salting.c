#include <stdio.h>
#include <string.h> // This salting use for Hacking crete password 

void salting(char password[]);

int main() {
    
    char password[100];
    scanf("%s",password);
    salting(password);

    return 0;

}

void salting(char password[]) {
    char salt[] = "123";
    char newPass[200];

    strcpy(newPass,password); // newPass = "test"
    strcat(newPass, salt); // newPass = "test" = "123"
    puts(newPass);

}