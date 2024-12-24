#include <stdio.h>

int main() {
    int choice;

    // Ask the user to enter a number
    printf("Enter a number (1, 2, or 3): ");
    scanf("%d", &choice);

    // Use switch-case to display the appropriate greeting
    switch (choice) {
        case 1:
            printf("Salaam\n");
            break;
        case 2:
            printf("Aadaab\n");
            break;
        case 3:
            printf("Hello\n");
            break;
        default:
            printf("Incorrect Option\n");
    }

    return 0;
}

