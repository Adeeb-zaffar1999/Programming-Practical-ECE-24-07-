#include <stdio.h>

int main() {
    int i;

    printf("Even numbers from 1 to 100:\n");

    for (i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
