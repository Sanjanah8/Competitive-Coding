#include <stdio.h>

int main() {
    int n, smallest_even = 10;
    printf("Enter an integer: ");
    scanf("%d", &n);

    char digits[20];
    sprintf(digits, "%d", n);  // Convert integer to string

    for (int i = 0; digits[i] != '\0'; i++) {
        int digit = digits[i] - '0';  // Convert character to integer
        if (digit % 2 == 0 && digit < smallest_even) {
            smallest_even = digit;
        }
    }

    if (smallest_even == 10) {
        printf("No even digit found\n");
    } else {
        printf("Smallest even digit is %d\n", smallest_even);
    }

    return 0;
}
