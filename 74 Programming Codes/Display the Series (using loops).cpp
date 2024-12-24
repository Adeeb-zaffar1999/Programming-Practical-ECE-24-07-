#include <stdio.h>

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Series: ");
    for (int i = n; i >= 1; i--) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
