#include <stdio.h>
int main() {
 int number, sum = 0;
 printf("Aditya Sharma\n");
 printf("Enter a number: ");
 scanf("%d", &number);
 if (number < 0) {
 number = -number;
 }
 while (number > 0) {
 int digit = number % 10; // Get the last digit
 sum += digit; // Add the digit to the sum
 number /= 10; // Remove the last digit
 }
 printf("Sum of the digits: %d\n", sum);
 return 0;
}
