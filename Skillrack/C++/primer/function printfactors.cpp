#include <iostream>
using namespace std;

// Function to print all factors of N in ascending order
void printFactors(int N) {
    for (int i = 1; i <= N; i++) {
        // If N is divisible by i, then i is a factor
        if (N % i == 0) {
            cout << i << " ";
        }
    }
}

int main() {
    int N;
    // Reading input N
    if (cin >> N) {
        printFactors(N);
    }
    return 0;
}
