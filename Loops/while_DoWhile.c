#include <stdio.h>

int main() {


    int n;

    do {

        printf("Enter a Number : ");
        scanf("%d",&n);
        printf("%d \n",n);

        if (n % 7 == 0) {

        break;  // Logic is the N is in Table means multiple of 7 
    }               // So break work is Terminate=stop the Loop

    } while (1);

    printf("Thanks for Check !");

    return 0;

}