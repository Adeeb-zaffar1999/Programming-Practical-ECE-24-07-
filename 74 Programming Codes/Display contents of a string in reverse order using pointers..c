#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char *ptr;

    printf("Enter a string: ");
    scanf("%s", str);

    ptr = str + strlen(str) - 1; // Point to the last character

    printf("String in reverse order: ");
    while (ptr >= str) {
        printf("%c", *ptr);
        ptr--; // Decrement the pointer to move to the previous character
    }
    printf("\n");

    return 0;
}
