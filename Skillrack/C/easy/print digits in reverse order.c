#include <stdio.h>
int main() {
    int n;
    if(scanf("%d", &n) == 1) {
        if(n == 0) putchar('0'); //or printf instead of putchar
        while(n > 0) {
            printf("%d", n % 10);
            n /= 10;
        }
    }
    return 0;
}
