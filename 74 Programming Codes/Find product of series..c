#include <stdio.h>

int main() {
    int n, i;
    long long product = 1; // Use long long to handle large products

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate product of series using loop
    for (i = 1; i <= n; i++) {
        product *= i;
    }

    printf("Product of the series 1 * 2 * 3 * ... * %d is: %lld\n", n, product);

    return 0;
}
