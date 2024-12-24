#include <stdio.h>

int main() {
    int n, i;
    int term = 2; // Starting term of the series

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Geometric Series: ");

    for (i = 1; i <= n; i++) {
        printf("%d ", term);
        term *= 2; // Calculate the next term in the series
    }

    printf("\n");

    return 0;
}
