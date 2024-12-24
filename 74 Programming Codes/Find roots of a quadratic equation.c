#include <stdio.h>
#include <math.h>  // Include math.h for sqrt() function

int main() {
    double a, b, c, discriminant, root1, root2;

    // Ask the user to input the coefficients of the quadratic equation
    printf("Enter the coefficient a: ");
    scanf("%lf", &a);

    printf("Enter the coefficient b: ");
    scanf("%lf", &b);

    printf("Enter the coefficient c: ");
    scanf("%lf", &c);

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Check the discriminant to determine the nature of the roots
    if (discriminant > 0) {
        // Two real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are real and distinct: %.2lf and %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
        // One real root (repeated root)
        root1 = -b / (2 * a);
        printf("The root is real and repeated: %.2lf\n", root1);
    } else {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("The roots are complex: %.2lf + %.2lfi and %.2lf - %.2lfi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}

