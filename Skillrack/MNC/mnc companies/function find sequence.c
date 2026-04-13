int findSequence(int SIZE, int *arr) {
    int i = 0;
    while (i < SIZE - 1 && arr[i] > arr[i + 1]) i++;
    if (i == 0 || i == SIZE - 1) return 0;
    while (i < SIZE - 1 && arr[i] < arr[i + 1]) i++;
    return i == SIZE - 1;
}
