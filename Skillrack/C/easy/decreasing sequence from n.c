#include <stdio.h>

int main() {
    long long N, D;
    if (scanf("%lld %lld", &N, &D) == 2) {
        for (long long i = N - D; i >= 1; i -= D) {
            printf("%lld ", i);
        }
    }
    return 0;
}
