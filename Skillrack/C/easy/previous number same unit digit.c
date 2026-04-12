#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i < N; i++) {
        if (abs(arr[i] % 10) == abs(arr[i - 1] % 10)) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
