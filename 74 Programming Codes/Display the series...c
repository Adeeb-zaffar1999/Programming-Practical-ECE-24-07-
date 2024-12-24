#include <stdio.h>
#include <math.h>

int main() {
    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Series: ");

    for (i = 1; i <= n; i++) {
        printf("%.0f ", pow(2, pow(2, i - 1))); 
    }

    printf("\n");

    return 0;
}
