#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, X, Y;
    if (scanf("%d %d %d", &N, &X, &Y) != 3) return 0;
    
    int count = 0;
    int currentMultiple = X;
    
    while (count < N) {
        if (currentMultiple % Y != 0) {
            printf("%d ", currentMultiple);
            count++;
        }
        currentMultiple += X;
    }
    
    return 0;
}
