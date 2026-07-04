#include <stdio.h>

int main() {

    int n;
    printf("Enter N for Table : ");
    scanf("%d",&n);

    for(int i=1; i<=10; i++) {

        printf("%d \n",n*i);

    }

    return 0;

}