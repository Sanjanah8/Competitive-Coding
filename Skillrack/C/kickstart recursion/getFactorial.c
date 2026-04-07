#include <stdio.h>

// Recursive function to calculate factorial of N
int getFactorial(int N) {
    // Base case: factorial of 0 or 1 is 1
    if (N == 0 || N == 1) {
        return 1;
    }
    // Recursive case: N! = N * (N-1)!
    return N * getFactorial(N - 1);
}

int main() {
    int N;
    // Read integer N from input
    if (scanf("%d", &N) == 1) {
        // Print the result returned by the recursive function
        printf("%d", getFactorial(N));
    }
    return 0;
}
