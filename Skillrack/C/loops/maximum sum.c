#include <stdio.h>

int main() {
    int n, num;
    int S1 = 0, S2 = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &num);

        int tenth_digit = (num / 10) % 10;  // Extract the 10th digit (tens place)

        if (tenth_digit % 2 == 0) {
            S2 += tenth_digit;  // Even digit
        } else {
            S1 += tenth_digit;  // Odd digit
        }
    }

    printf("%d\n", (S1 > S2) ? S1 : S2);  // Print the maximum of S1 and S2

    return 0;
}
