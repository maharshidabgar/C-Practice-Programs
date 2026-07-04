#include <stdio.h>

int main() {

    float price[3];

    printf("Enter Soap Price : ");
    scanf("%f",&price[0]);

    printf("Enter Powder Price : ");
    scanf("%f",&price[1]);

    printf("Enter Oil Price : ");
    scanf("%f",&price[2]);

    printf("Total price for Soap : %f\n",price[0]+(0.18*price[0]));
    printf("Total price for Powder : %f\n",price[1]+(0.18*price[1]));
    printf("Total price for Oil : %f\n",price[2]+(0.18*price[2]));


    return 0;

}