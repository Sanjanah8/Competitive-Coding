#include <stdio.h>
#include <string.h>

int main() {
    char S[101];
    scanf("%s", S);
    int len = strlen(S);
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", S[i]);
    }
    return 0;
}
