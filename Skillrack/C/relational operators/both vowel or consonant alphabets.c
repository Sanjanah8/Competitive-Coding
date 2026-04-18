#include <stdio.h>
#include <stdlib.h>

int isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    char a, b;
    if (scanf("%c %c", &a, &b) != 2) return 0;

    if (isVowel(a) == isVowel(b)) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
