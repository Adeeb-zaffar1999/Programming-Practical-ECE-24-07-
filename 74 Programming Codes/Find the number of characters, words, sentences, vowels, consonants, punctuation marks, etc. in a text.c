#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, sentences = 0;
    int vowels = 0, consonants = 0, punctuation = 0;

    fp = fopen("text.txt", "r"); // Open the file in read mode

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (isspace(ch)) { 
            words++; 
        } else if (ispunct(ch)) {
            punctuation++;
        } else if (isalpha(ch)) {
            if (tolower(ch) == 'a' || tolower(ch) == 'e' || tolower(ch) == 'i' || tolower(ch) == 'o' || tolower(ch) == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }

        if (ch == '.' || ch == '?' || ch == '!') { 
            sentences++; 
        }
    }

    // Adjust word count for potential extra space at the end
    if (characters > 0) { 
        words++; 
    }

    fclose(fp);

    printf("Number of characters: %d\n", characters);
    printf("Number of words: %d\n", words);
    printf("Number of sentences: %d\n", sentences);
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    printf("Number of punctuation marks: %d\n", punctuation);

    return 0;
}
