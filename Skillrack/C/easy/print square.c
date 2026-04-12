#include <stdio.h>
int getSquare(int N) {
    return N * N;
}
int main() { 
    int N; 
    scanf("%d", &N); 
    printf("%d", getSquare(N)); 
    return 0;
}
