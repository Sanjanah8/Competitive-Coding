long long getFactorial(int n) {
    long long f = 1;
    for (int i = 2; i <= n; i++) {
        f *= i;
    }
    return f;
}
