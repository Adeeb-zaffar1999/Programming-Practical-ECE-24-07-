#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[200];

    // 1. strlen() - Find the length of a string
    printf("Enter string 1: ");
    scanf("%s", str1);
    printf("Length of string 1: %d\n", strlen(str1));

    // 2. strcpy() - Copy one string to another
    strcpy(str2, str1);
    printf("Copied string 2: %s\n", str2);

    // 3. strrev() - Reverse a string (Note: This function might not be standard in all C implementations)
    strrev(str2);
    printf("Reversed string 2: %s\n", str2);

    // 4. strcat() - Concatenate two strings
    strcpy(str3, str1); 
    strcat(str3, str2); 
    printf("Concatenated string: %s\n", str3);

    // 5. strcmp() - Compare two strings
    printf("Enter string 2: ");
    scanf("%s", str2);

    if (strcmp(str1, str2) == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    return 0;
}
