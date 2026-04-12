#include <stdio.h>

void printArrayElementsSum(int arr[], int N) {
    long long int sum = 0;
    for (int index = 0; index < N; index++) {
        sum += arr[index];
    }
    printf("%lld", sum);
}

int main() {
    int N;
    scanf("%d", &N);
    int arr[N], index;
    for (index = 0; index < N; index++) {
        scanf("%d", &arr[index]);
    }
    printArrayElementsSum(arr, N);
    return 0;
}
