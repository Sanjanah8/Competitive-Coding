#include <stdio.h>
#include <stdlib.h>

// Recursive function to print numbers from N down to 1
void printNTo1(int N) {
    if (N > 0) {
        // Print current number first for descending order
        printf("%d ", N);
        // Then recurse with N-1
        printNTo1(N - 1);
    }
}

int main() {
    int N;
    // Read the input value N
    if (scanf("%d", &N) == 1) {
        printNTo1(N);
    }
    return 0;
}
