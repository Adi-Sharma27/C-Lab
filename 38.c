#include <stdio.h>

int main() {
    int number, reversedNumber = 0;
    printf("Aditya Sharma\n");
    printf("Enter an integer: ");
    scanf("%d", &number);

    while (number != 0) {
        reversedNumber = reversedNumber * 10 + number % 10;
        number /= 10;
    }

    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}
