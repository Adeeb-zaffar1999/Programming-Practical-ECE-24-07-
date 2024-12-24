#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *ptr;

    ptr = arr; // Assign the base address of the array to the pointer

    printf("Array elements using pointer:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *ptr); 
        ptr++; // Increment the pointer to point to the next element
    }
    printf("\n");

    return 0;
}
