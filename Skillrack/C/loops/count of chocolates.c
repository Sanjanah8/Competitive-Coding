#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, val, total = 0;
    if (scanf("%d", &n) != 1) return 0;
    
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &val) == 1) {
            total += val;
            if (i > 0) {
                printf(" ");
            }
            printf("%d", total);
        }
    }
    
    return 0;
}
