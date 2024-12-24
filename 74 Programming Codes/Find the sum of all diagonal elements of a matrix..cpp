#include <stdio.h>

int main() {
    int n; // Size of the square matrix
    int sum = 0; // Variable to store the sum of diagonal elements

    // Prompt the user for the size of the matrix
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    // Declare a 2D array (matrix) based on user input
    int matrix[n][n];

    // Input the matrix elements from the user
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of the diagonal elements
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i]; // Add the primary diagonal element
    }

    // Display the sum of the diagonal elements
    printf("The sum of the diagonal elements is: %d\n", sum);

    return 0; // Exit the program successfully
}
