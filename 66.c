#include <stdio.h>
#include <stdlib.h>

int main() {
    char octal[100];
    printf("Aditya Sharma\n");
    printf("Enter an octal number: ");
    scanf("%s", octal);

    int decimal = strtol(octal, NULL, 8); // Convert octal to decimal
    printf("Hexadecimal representation: %X\n", decimal);

    return 0;
}
