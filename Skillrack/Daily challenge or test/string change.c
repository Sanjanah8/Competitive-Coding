#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char S[1001];
    scanf("%s", S);

    int prevAlphabetPos = 0;  // To track the position of the previous alphabet
    for (int i = 0; S[i] != '\0'; i++) {
        if (isalpha(S[i])) {
            if (prevAlphabetPos == 0) {
                // First occurring alphabet remains the same
                prevAlphabetPos = tolower(S[i]) - 'a' + 1;
            } else {
                // Shift current alphabet
                int shift = prevAlphabetPos;
                prevAlphabetPos = tolower(S[i]) - 'a' + 1;

                if (islower(S[i])) {
                    S[i] = 'a' + (S[i] - 'a' + shift) % 26;
                } else {
                    S[i] = 'A' + (S[i] - 'A' + shift) % 26;
                }
            }
        }
        // Non-alphabetic characters remain unchanged
    }

    printf("%s\n", S);
    return 0;
}
/*The program accepts a string **S** as input and encrypts it based on these rules:

1. **First Alphabet**: The first alphabet in the string remains unchanged.
2. **Subsequent Alphabets**: Each subsequent alphabet is shifted forward in the alphabet by the **position of the previous alphabet** (e.g., 'a' = 1, 'b' = 2, ..., 'z' = 26). Shifting wraps around circularly within the English alphabet.
3. **Non-Alphabets**: Non-alphabetic characters (e.g., numbers, symbols) remain unchanged.

Example
- **Input**: `hel#121#LO`
- **Output**: `hmq#121#XA`

### Steps:
- Keep the first alphabet as is.
- Calculate the position of each alphabet and shift the next alphabet accordingly.
- Ignore and retain non-alphabetic characters.

Circular wrapping is applied to alphabet shifting.*/
