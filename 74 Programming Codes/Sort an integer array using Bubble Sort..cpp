#include <stdio.h>

void bubbleSort(int arr[], int n) {
    // Loop through each element in the array
    for (int i = 0; i < n - 1; i++) {
        // Last i elements are already sorted, so we can skip them
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    // Print the elements of the array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    printf("Original array: \n");
    printArray(arr, n); // Print the original array

    bubbleSort(arr, n); // Sort the array using Bubble Sort

    printf("Sorted array: \n");
    printArray(arr, n); // Print the sorted array

    return 0; // Exit the program successfully
}
