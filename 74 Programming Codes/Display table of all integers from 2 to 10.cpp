#include <stdio.h>

int main() {
    int i, j;

    printf("Multiplication Table:\n\n");

    for (i = 2; i <= 10; i++) {
        printf("Table of %d:\n", i);
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); 
    }

    return 0;
}
