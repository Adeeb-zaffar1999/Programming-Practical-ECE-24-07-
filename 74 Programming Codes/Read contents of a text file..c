#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    // Open the file in read mode
    fp = fopen("my_file.txt", "r"); 

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1; // Exit with an error code
    }

    printf("Contents of the file:\n");
    while ((ch = fgetc(fp)) != EOF) { 
        printf("%c", ch);
    }

    // Close the file
    fclose(fp);

    return 0;
}
