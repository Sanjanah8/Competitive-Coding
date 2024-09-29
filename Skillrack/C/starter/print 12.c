#include <stdio.h>

int main() {
    int m = 5, n;
    n = m + ++m;  // This will result in n = 12
    printf("m = %d, n = %d\n", m, n);  // Outputs: m = 6, n = 12
    return 0;
}
