#include <stdio.h>

int doubleValue(int N) {
    return 2 * N;
}

int main() {
    int N;
    scanf("%d", &N);
    int twoTimesN = doubleValue(N);
    printf("%d", twoTimesN);
    return 0;
}
