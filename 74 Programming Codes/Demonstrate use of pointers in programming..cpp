#include <stdio.h>

int main() {
    int num = 10;
    int *ptr; // Declare a pointer variable

    // Assign the address of num to the pointer
    ptr = &num;

    // Accessing the value using the pointer
    printf("Value of num: %d\n", num); 
    printf("Value of num using pointer: %d\n", *ptr); 

    // Modifying the value using the pointer
    *ptr = 20;

    printf("Value of num after modification: %d\n", num);

    return 0;
}
