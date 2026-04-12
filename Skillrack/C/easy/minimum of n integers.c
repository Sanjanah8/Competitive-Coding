#include <stdio.h>

void printMin(int array[], int N) {
    int min = array[0];
    for (int i = 1; i < N; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    printf("%d", min);
}

int main() {
    int N, index;
    scanf("%d", &N);
    int array[N];
    for (index = 0; index <= N - 1; index++) {
        scanf("%d", &array[index]);
    }
    printMin(array, N);
    return 0;
}
