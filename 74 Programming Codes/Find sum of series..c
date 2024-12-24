#include <stdio.h>

int main() {
    int n;
    float i, sum = 0.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate sum of series using loop
    for (i = 1; i <= n; i++) {
        sum += 1.0 / (2 * i); 
    }

    printf("Sum of the series 1 + 1/2 + 1/4 + ... + 1/%d is: %f\n", 2 * n, sum);

    return 0;
}
