#include <stdio.h>
#include <stdlib.h>

// Function to calculate the sum of digits of a number
int sum_of_digits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int N;
    scanf("%d", &N);

    int numbers[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }

    // Dictionary to store lists of numbers by their digit sum
    // Key: sum of digits, Value: array of numbers with that sum of digits
    int max_sum = -1;
    int digit_sum_map[82] = {0};  // Max possible sum of digits is 81 (for 999999999)

    // Traverse through the numbers and populate the map
    for (int i = 0; i < N; i++) {
        int digit_sum = sum_of_digits(numbers[i]);
        // Update the maximum sum of two numbers having the same digit sum
        for (int j = 0; j < i; j++) {
            if (digit_sum == sum_of_digits(numbers[j])) {
                int current_sum = numbers[i] + numbers[j];
                if (current_sum > max_sum) {
                    max_sum = current_sum;
                }
            }
        }
    }

    printf("%d\n", max_sum);
    return 0;
}
