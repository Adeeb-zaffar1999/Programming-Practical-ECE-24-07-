#include <stdio.h>
#include <math.h>  // For sqrt() function

int main() {
    int num, i;
    int isPrime = 1;  // Assume the number is prime

    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // If the number is less than or equal to 1, it's not prime
    if (num <= 1) {
        isPrime = 0;
    } else {
        // Check divisibility from 2 to sqrt(num)
        for (i = 2; i <= sqrt(num); ++i) {
            if (num % i == 0) {  // If num is divisible by i
                isPrime = 0;  // Not a prime number
                break;  // Exit the loop early as we found a divisor
            }
        }
    }

    // Output the result
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}

