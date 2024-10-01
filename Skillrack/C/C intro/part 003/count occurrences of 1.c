#include <stdio.h>

int countOnes(int n) {
    int count = 0;
    while (n > 0) {
        if (n % 10 == 1) {
            count++;
        }
        n /= 10;
    }
    return count;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int result = countOnes(n);
    printf("Count of digit 1 in %d is: %d\n", n, result);

    return 0;
}
