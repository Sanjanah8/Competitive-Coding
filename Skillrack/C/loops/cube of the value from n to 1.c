#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    for (int i = N; i >= 1; i--) {
        printf("%d ", i * i * i);
    }
    return 0;
}
