#include <stdio.h>
#include <stdbool.h>

bool isPrime(int number) {
    if (number <= 1) return false;
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    printf("Aditya Sharma\n");
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
