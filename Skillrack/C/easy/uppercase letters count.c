#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char S[101];
    int count = 0;
    scanf("%s", S);
    for (int i = 0; S[i] != '\0'; i++) {
        if (S[i] >= 'A' && S[i] <= 'Z') {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
