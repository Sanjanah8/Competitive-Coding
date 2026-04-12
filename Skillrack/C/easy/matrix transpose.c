#include <stdio.h>

int N;

void printTranspose(int matrix[N][N]) {
    for (int col = 0; col < N; col++) {
        for (int row = 0; row < N; row++) {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }
}

int main() {
    scanf("%d", &N);
    int matrix[N][N];
    int row, col;
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            scanf("%d", &matrix[row][col]);
        }
    }
    printTranspose(matrix);
    return 0;
}
