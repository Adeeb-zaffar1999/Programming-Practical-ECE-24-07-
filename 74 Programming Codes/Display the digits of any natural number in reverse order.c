#include <stdio.h>

int main() {
    int num;

    // Ask the user to input a natural number
    printf("Enter a natural number: ");
    scanf("%d", &num);

    printf("The digits in reverse order are: ");

    // While loop to extract and print each digit in reverse order
    while (num > 0) {
        // Print the last digit of the number
        printf("%d ", num % 10);

        // Remove the last digit from the number
        num = num / 10;
    }

    printf("\n");  // New line after printing the reversed digits

    return 0;
}

