#include <stdio.h>

int isPrime(int num) {
    int i = 2;
    if (num <= 1) return 0; // 0 and 1 are not prime numbers
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) return 0; // If divisible by any number other than 1 and itself
    }
    return 1; // If not divisible by any number other than 1 and itself
}

int main() {
    int n, count = 0, num = 2;

    printf("Enter the number of prime numbers to print: ");
    scanf("%d", &n);

    printf("First %d prime numbers are:\n", n);
    while (count < n) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");

    return 0;
}
