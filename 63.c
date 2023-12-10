#include <stdio.h>
#include <stdlib.h>

int main() {
    char binary[100];
    printf("Aditya Sharma\n");
    printf("Enter a binary number: ");
    scanf("%s", binary);

    int decimal = strtol(binary, NULL, 2); // Convert binary to decimal
    printf("Hexadecimal representation: %X\n", decimal);

    return 0;
}
