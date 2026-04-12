#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    long long int first = 0, second = 1, next;
    for (int i = 1; i <= N; i++) {
        printf("%lld ", first);
        next = first + second;
        first = second;
        second = next;
    }
    return 0;
}
