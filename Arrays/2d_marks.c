#include <stdio.h> // 2 students ke 3 subject ke marks

int main() {

    int marks[2][3]; // _ _ _ | _ _ _
    marks[0][0] = 90;
    marks[0][1] = 89;
    marks[0][2] = 75;

    marks[1][0] = 90;
    marks[1][1] = 89;
    marks[1][2] = 75;

    printf("%d", marks[0][0]);
    
    return 0;

}