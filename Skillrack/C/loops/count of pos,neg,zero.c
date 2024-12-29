#include <stdio.h>

int main() {
    int n, num;
    int positive_count = 0, negative_count = 0, zero_count = 0;

    // Read the number of integers
    scanf("%d", &n);

    // Loop to read 'n' integers
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);

        if (num > 0) {
            positive_count++;
        } else if (num < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }

    // Print the results on the same line
    printf("%d %d %d\n", positive_count, negative_count, zero_count);

    return 0;
}
