#include <stdio.h>

int getOddFactorCount(int N) {
    int count = 0;
    for (int i = 1; i <= N; i++) {
        if (N % i == 0 && i % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int N;
    scanf("%d", &N);
    printf("%d", getOddFactorCount(N));
    return 0;
}
