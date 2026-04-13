#include <stdio.h>

int main() {
    char s[16]; 
    if (scanf("%15s", s) == 1) {
        for (int i = 0; s[i] != '\0'; i++) {
            printf("%d", (s[i] - '0' + 2) % 10);
        }
    }
    return 0;
}
