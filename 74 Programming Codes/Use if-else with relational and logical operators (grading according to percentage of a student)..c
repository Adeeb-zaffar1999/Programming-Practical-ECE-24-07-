#include <stdio.h>

int main() {
    float percentage;

    // Ask the user to input the student's percentage
    printf("Enter the student's percentage: ");
    scanf("%f", &percentage);

    // Use if-else with relational and logical operators to determine the grade
    if (percentage >= 90 && percentage <= 100) {
        printf("Grade: A\n");
    } else if (percentage >= 70 && percentage < 90) {
        printf("Grade: B\n");
    } else if (percentage >= 50 && percentage < 70) {
        printf("Grade: C\n");
    } else if (percentage < 50 && percentage >= 0) {
        printf("Grade: D\n");
    } else {
        // If the percentage is less than 0 or greater than 100, it's invalid
        printf("Invalid percentage entered.\n");
    }

    return 0;
}

