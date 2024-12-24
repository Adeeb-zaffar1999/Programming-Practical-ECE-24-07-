#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    // Open the file in write mode
    fp = fopen("my_file.txt", "w"); 

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1; // Exit with an error code
    }

    printf("Enter a string to write to the file: ");
    fgets(str, 100, stdin);

    // Write the string to the file
    fprintf(fp, "%s", str); 

    // Close the file
    fclose(fp);

    printf("String written to file successfully.\n");

    return 0;
}
