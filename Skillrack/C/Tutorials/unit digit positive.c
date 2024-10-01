#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    int unitDigit = n % 10;
    printf("The unit digit of %d is: %d\n", n, unitDigit);

    return 0;
}
