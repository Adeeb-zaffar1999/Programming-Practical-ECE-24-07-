#include <stdio.h>

#define PI 3.14159
#define SQUARE(x) (x * x)

int main() {
    float radius = 5.0;
    float area = PI * SQUARE(radius);

    printf("Area of circle: %.2f\n", area);

    int num = 10;
    printf("Square of %d is: %d\n", num, SQUARE(num));

    return 0;
}
