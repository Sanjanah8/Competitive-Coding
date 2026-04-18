#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    if (scanf("%d", &N) != 1) return 0;
    
    for (int i = 1; i <= N; i++) {
        printf("%d ", i);
    }
    
    for (int i = N - 1; i >= 1; i--) {
        printf("%d ", i);
    }
    
    return 0;
}
