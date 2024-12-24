#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract1(int a, int b) {
    return a - b;
}

int subtract2(int a, int b) {
    return b - a;
}

int main() {
    int num1, num2, sum, diff1, diff2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    sum = add(num1, num2);
    diff1 = subtract1(num1, num2);
    diff2 = subtract2(num1, num2);

    printf("Sum: %d\n", sum);
    printf("Difference (a-b): %d\n", diff1);
    printf("Difference (b-a): %d\n", diff2);

    return 0;
}
