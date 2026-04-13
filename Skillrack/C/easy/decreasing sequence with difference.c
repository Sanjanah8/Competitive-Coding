#include <stdio.h>

int main() {
    int n, d;
    if (scanf("%d %d", &n, &d) == 2) {
        while (d > 0) {
            n -= d;
            printf("%d ", n);
            d--;
        }
    }
    return 0;
}
