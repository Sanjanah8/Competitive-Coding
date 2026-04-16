int getDigitXCount(int n, int x) {
    int count = 0;
    if (n == 0 && x == 0) return 1;
    if (n < 0) n = -n; 
    
    while (n > 0) {
        if (n % 10 == x) {
            count++;
        }
        n /= 10;
    }
    return count;
}
