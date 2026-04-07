#include <stdio.h>
#include <string.h>

void printReverse(char *str) {
    if (*str) {
        printReverse(str + 1);
        printf("%c", *str);
    }
}

int main() {
    char str[101];
    if (scanf("%s", str) == 1) {
        printReverse(str);
    }
    return 0;
}
