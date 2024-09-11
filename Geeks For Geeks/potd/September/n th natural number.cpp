class Solution {
public:
    long long findNth(long long n) {
        long long result = 0;
        long long base = 1;

        // Convert the number `n` to its base-9 equivalent
        while (n > 0) {
            result += (n % 9) * base;
            n /= 9;
            base *= 10;
        }

        return result;
    }
};
