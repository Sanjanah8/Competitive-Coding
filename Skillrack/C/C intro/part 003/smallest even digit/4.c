#include <stdio.h>

int find_smallest_even(int n, int smallest_even) {
    if (n == 0) return smallest_even;

    int digit = n % 10;
    if (digit % 2 == 0 && digit < smallest_even) {
        smallest_even = digit;
    }

    return find_smallest_even(n / 10, smallest_even);
}

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    int result = find_smallest_even(n, 10);  // 10 is larger than any digit
    if (result == 10) {
        printf("No even digit found\n");
    } else {
        printf("Smallest even digit is %d\n", result);
    }

    return 0;
}
