#include <stdio.h>

int main() {
    char str[101];
    fgets(str, sizeof(str), stdin);
    printf("%s", str);
    return 0;
}
