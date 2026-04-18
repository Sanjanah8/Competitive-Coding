#include <stdio.h>
#include <stdlib.h>

int main() {
    char x, y, z;
    if (scanf(" %c %c %c", &x, &y, &z) != 3) return 0;

    if ((x >= y && x <= z) || (x >= z && x <= y)) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
