#include <stdio.h>

// Recursive function to print numbers from M to N
void printFromMtoN(int M, int N) {
    if (M <= N) {
        // Print the current value of M
        printf("%d ", M);
        // Call the function again, incrementing M to move toward N
        printFromMtoN(M + 1, N);
    }
}

int main() {
    int M, N;
    // Read M and N from input
    if (scanf("%d%d", &M, &N) == 2) {
        printFromMtoN(M, N);
    }
    return 0;
}
