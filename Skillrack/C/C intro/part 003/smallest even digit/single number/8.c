#include <stdio.h>

int main() {
    int smallest_even = 0;
    
    while (smallest_even % 2 != 0) {
        smallest_even++;
    }
    
    printf("Smallest even digit is %d\n", smallest_even);
    return 0;
}
