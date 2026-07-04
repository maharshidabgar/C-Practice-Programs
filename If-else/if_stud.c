#include <stdio.h>

int main() {
    
    int marks;

    printf("Enter Vinod Marks : ");
    scanf("%d", &marks);

    if (marks >= 90) {
        printf("Vinod Achive A Grade");
    }

    else if (marks >= 75) {
        printf("Vinod Achive B Grade");
    }

    else if (marks > 14 && marks <=> 70) {
        printf("Vinod is Perfect !");
    }

    else {
        printf("He is Fail...");
    }
    return 0;
}