#include <stdio.h>
#include <math.h>  // Include the math library

int main() {
    double base, exponent, number, result;

    // Ask the user to input a base and exponent for the power function
    printf("Enter the base: ");
    scanf("%lf", &base);
    
    printf("Enter the exponent: ");
    scanf("%lf", &exponent);

    // Calculate the power of the base raised to the exponent
    result = pow(base, exponent);
    printf("%.2lf raised to the power of %.2lf is: %.2lf\n", base, exponent, result);

    // Ask the user to input a number for the square root function
    printf("Enter a number to find its square root: ");
    scanf("%lf", &number);

    // Calculate the square root of the number
    if (number < 0) {
        printf("Cannot compute the square root of a negative number.\n");
    } else {
        result = sqrt(number);
        printf("The square root of %.2lf is: %.2lf\n", number, result);
    }

    return 0;
}

