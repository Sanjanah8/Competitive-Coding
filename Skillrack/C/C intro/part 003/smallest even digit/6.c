#include <stdio.h>

int main() {
    int n, smallest_even = 10; // Initialize smallest_even to a value larger than any digit
    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 == 0 && digit < smallest_even) {
            smallest_even = digit;
        }
        n /= 10;
    }

    if (smallest_even == 10) {
        printf("No even digit found\n");
    } else {
        printf("Smallest even digit is %d\n", smallest_even);
    }

    return 0;
}
