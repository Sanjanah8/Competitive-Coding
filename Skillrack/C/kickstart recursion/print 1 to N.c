#include <stdio.h>
#include <stdlib.h>

void print1ToN(int N) {
    if (N > 0) {
        print1ToN(N - 1);
        printf("%d ", N);
    }
}

int main() {
    int N;
    scanf("%d", &N);
    print1ToN(N);
    return 0;
}
