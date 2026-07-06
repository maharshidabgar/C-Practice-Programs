#include <stdio.h>  /*Enter 5 people Address Details...*/
#include <string.h>

struct address {

    int houseNo;
    int block;
    char city[50];
    char state[50];

};

void printAdds(struct address adds);

int main() {

    struct address adds[5];

    // Input

    printf("Enter Info for 1st Person : \n");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);

    printf("Enter Info for 2nd Person : \n");
    scanf("%d", &adds[1].houseNo);
    scanf("%d", &adds[1].block);
    scanf("%s", adds[1].city);
    scanf("%s", adds[1].state);

    printf("Enter Info for 3rd Person : \n");
    scanf("%d", &adds[2].houseNo);
    scanf("%d", &adds[2].block);
    scanf("%s", adds[2].city);
    scanf("%s", adds[2].state);

    printf("Enter Info for 4th Person : \n");
    scanf("%d", &adds[3].houseNo);
    scanf("%d", &adds[3].block);
    scanf("%s", adds[3].city);
    scanf("%s", adds[3].state);

    printf("Enter Info for 5th Person : \n");
    scanf("%d", &adds[4].houseNo);
    scanf("%d", &adds[4].block);
    scanf("%s", adds[4].city);
    scanf("%s", adds[4].state);

    printAdds(adds[0]);
    printAdds(adds[1]);
    printAdds(adds[2]);
    printAdds(adds[3]);
    printAdds(adds[4]);

    return 0;
}

void printAdds(struct address adds) {

    printf("Address is : %d, %d, %s, %s\n", adds.houseNo, adds.block, adds.city, adds.state);

}