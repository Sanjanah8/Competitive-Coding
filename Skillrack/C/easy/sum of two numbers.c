#include <stdio.h>

void printSum(int X, int Y) {
    printf("%d", X + Y);
}

int main() {
    int X, Y;
    scanf("%d%d", &X, &Y);
    printSum(X, Y);
    return 0;
}
