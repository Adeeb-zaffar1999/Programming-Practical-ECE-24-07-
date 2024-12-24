#include <stdio.h>

// Define the constant PI with a value of 3.14159
#define PI 3.14159

int main() {
    // Declare a variable to hold the radius
    double radius, area;

    // Ask the user to input the radius of a circle
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate the area using the formula: Area = PI * radius^2
    area = PI * radius * radius;

    // Display the result
    printf("The area of the circle with radius %.2lf is: %.2lf\n", radius, area);

    return 0;
}

