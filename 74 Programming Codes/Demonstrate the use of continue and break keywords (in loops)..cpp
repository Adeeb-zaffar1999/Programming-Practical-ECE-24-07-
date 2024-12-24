#include <stdio.h>

int main() {
    // Demonstrate continue keyword
    printf("Even numbers between 1 and 10:\n");
    for (int i = 1; i <= 10; i++) {
        if (i % 2 != 0) {
            continue; // Skip odd numbers
        }
        printf("%d ", i);
    }
    printf("\n");

    // Demonstrate break keyword
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            printf("%d is not a prime number.\n", num);
            break; // Exit the loop if a divisor is found
        }
    }

    if (num == 1) {
        printf("1 is neither prime nor composite.\n");
    } else if (num > 1) {
        printf("%d is a prime number.\n", num);
    }

    return 0;
}
