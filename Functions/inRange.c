#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    
    int low, high;

    printf("Enter the lower bound: ");
    scanf("%d", &low);

    printf("Enter the upper bound: ");
    scanf("%d", &high);

    if (low > high) {
        int temp = low;
        low = high;
        high = temp;
    }

    printf("Prime numbers between %d and %d:\n", low, high);
    for (int n = low; n <= high; n++) {
        if (isPrime(n)) {
            printf("%d ", n);
        }
    }
    printf("\n");

    return 0;
}
