#include <stdio.h>

int main() {
    int n, d;
    if (scanf("%d %d", &n, &d) == 2) {
        while (n > 0) {
            printf("%d ", n);
            n -= d;
            if (d > 1) d--;
        }
    }
    return 0;
}
