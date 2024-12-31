#include <stdio.h>

int main() {
    int a, b, c, d;
    
    // Accept four integers as input
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    // Check if all sides are equal
    if (a == b && b == c && c == d) {
        printf("yes");
    } else {
        printf("no");
    }

    return 0;
}
