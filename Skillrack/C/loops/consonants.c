#include <stdio.h>

int main() {
    char ch;

    scanf("%c", &ch);

    // Start from the next character after ch
    for (char c = ch + 1; c <= 'z'; c++) {
        // Check if the character is a consonant (not a vowel)
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            printf("%c ", c);
        }
    }

    printf("\n");

    return 0;
}
