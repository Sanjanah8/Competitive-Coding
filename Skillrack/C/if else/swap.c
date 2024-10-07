#include <stdio.h>

int main() {
    int M, N;
    
    // Accept two integers M and N as input
    scanf("%d %d", &M, &N);

    // Check if M is greater than N
    if (M > N) {
        // Swap the digits of M
        int swapped_M = (M % 10) * 10 + (M / 10);
        M = swapped_M;
    } else {
        // Swap the digits of N
        int swapped_N = (N % 10) * 10 + (N / 10);
        N = swapped_N;
    }

    // Calculate and print the sum of M and N
    printf("%d\n", M + N);

    return 0;
}
