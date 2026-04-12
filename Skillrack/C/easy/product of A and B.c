#include <stdio.h>

void printProduct(long long int A, long long int B) {
    printf("%lld", A * B);
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    printProduct(A, B);
    return 0;
}
