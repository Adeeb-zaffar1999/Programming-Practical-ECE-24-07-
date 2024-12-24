#include <stdio.h>
#include <string.h> // Include string.h for strlen()

int main() {
    char str[100];
    int i, len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str); // Get the length of the string

    printf("String in reverse order: ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
