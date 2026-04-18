#include <stdio.h>
#include <stdlib.h>

int main() {
    int m;
    if (scanf("%d", &m) != 1) return 0;
    
    int lastDigit = m % 10;
    int secondLastDigit = (m / 10) % 10;
    int sum = lastDigit + secondLastDigit;
    
    if (sum != 0 && m % sum == 0) {
        printf("YES");
    } else {
        printf("NO");
    }
    
    return 0;
}
