#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char a, b, c;
    if (scanf("%c %c %c", &a, &b, &c) != 3) return 0;

    int diff1 = abs(a - b);
    int diff2 = abs(b - c);

    if (diff1 % 2 == 0 && diff2 % 3 == 0) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
