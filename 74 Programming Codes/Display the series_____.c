#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of times to repeat: ");
    scanf("%d", &n);

    printf("Series: ");

    for (i = 1; i <= n; i++) { 
        for (j = 1; j <= 5; j++) { 
            printf("%d ", j); 
        }
    }

    printf("\n");

    return 0;
}
