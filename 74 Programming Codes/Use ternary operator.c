#include <stdio.h>

int main() {
    int number;

    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Use the ternary operator to check if the number is even or odd
    (number % 2 == 0) ? printf("%d is an even number.\n", number) : printf("%d is an odd number.\n", number);

    return 0;
}

