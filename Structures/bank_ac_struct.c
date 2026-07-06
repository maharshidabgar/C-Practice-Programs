#include <stdio.h>
#include <string.h>

typedef struct SBIBankAccountInfo {
    
    int accno;
    char name[100];

} acc; // Alias

int main() {

    acc acc1 = {123, "Maharshi"};
    acc acc2 = {124, "ShobhnaBen"};
    acc acc3 = {126, "MukeshBhai"};

    printf("Account-No = %d\n",acc1.accno);
    printf("Name = %s\n",acc1.name);

    return 0;

}