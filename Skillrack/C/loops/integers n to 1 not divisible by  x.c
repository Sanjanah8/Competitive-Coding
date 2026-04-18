#include <stdio.h>

int main() {
    int n, x, found = 0;
    scanf("%d %d", &n, &x);
    for (int i = n; i >= 1; i--) {
        if (i % x != 0) {
            if (found) printf(" ");
            printf("%d", i);
            found = 1;
        }
    }
    if (!found) printf("-1");
    return 0;
}
