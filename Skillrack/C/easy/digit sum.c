#include <stdio.h>

void printDigitSum(long long int N) {
    int sum = 0;
    while (N > 0) {
        sum += N % 10;
        N /= 10;
    }
    printf("%d", sum);
}

int main() {
    long long int N;
    scanf("%lld", &N);
    printDigitSum(N);
    return 0;
}
