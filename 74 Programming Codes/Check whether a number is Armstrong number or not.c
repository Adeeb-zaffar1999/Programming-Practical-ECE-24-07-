#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, sum = 0, digits = 0;

    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store the original number for comparison later
    originalNum = num;

    // Find the number of digits
    while (num != 0) {
        num /= 10;
        digits++;
    }

    // Reset num to the original value
    num = originalNum;

    // Calculate the sum of each digit raised to the power of the number of digits
    while (num != 0) {
        remainder = num % 10;
        sum += pow(remainder, digits);  // Raise each digit to the power of 'digits'
        num /= 10;  // Remove the last digit
    }

    // Check if the sum is equal to the original number
    if (sum == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}

