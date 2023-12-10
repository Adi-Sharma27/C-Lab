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

    int sum = 0;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }
    printf("Sum of prime numbers between 1 and %d is: %d\n", n, sum);

    return 0;
}
