#include <stdio.h>
#include <string.h>

int main() {

    char str[100];
    int i;

    printf("Enter a String : ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {

        if(str[i] == 'a')
            str[i] = 'A';

        else if (str[i]== 'e')
            str[i] = 'E';

        else if (str[i]== 'i')
            str[i] = 'I';

        else if (str[i]== 'o')
            str[i] = 'O';

        else if (str[i]== 'u')
            str[i] = 'U';

    }

    printf("Modified String : %s",str);
    
    return 0;

}