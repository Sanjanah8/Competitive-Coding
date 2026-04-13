#include <stdio.h>

int main() {
    int N;
    if (scanf("%d", &N) != 1) return 0;
    int a[N];
    for (int i = 0; i < N; i++) scanf("%d", &a[i]);
    
    for (int i = N - 1; i >= 0; ) {
        printf("%d ", a[i]);
        i -= (a[i] % 2 == 0) ? 2 : 3;
    }
    
    return 0;
}
