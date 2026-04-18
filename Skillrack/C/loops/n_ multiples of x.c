#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, x, y;
    if (scanf("%d %d %d", &n, &x, &y) != 3) return 0;
    
    int first = 1;
    for (int i = 1; i <= n; i++) {
        int current = i * x;
        if (current % y != 0) {
            if (!first) {
                printf(" ");
            }
            printf("%d", current);
            first = 0;
        }
    }
    
    return 0;
}
