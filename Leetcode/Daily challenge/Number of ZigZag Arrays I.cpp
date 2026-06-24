class Solution {
public:
    int zigZagArrays(int n, int l, int r) {
        int m = r - l + 1, mod = 1e9 + 7;
        vector<long long> d0(m + 1), d1(m + 1);

        for (int x = 1; x <= m; ++x) {
            d0[x] = x - 1;
            d1[x] = m - x;
        }

        for (int i = 3; i <= n; ++i) {
            vector<long long> n0(m + 1), n1(m + 1);
            long long s1 = 0, s0 = 0;
            
            for (int y = 1; y <= m; ++y) {
                n0[y] = s1;
                s1 = (s1 + d1[y]) % mod;
            }
            for (int y = m; y >= 1; --y) {
                n1[y] = s0;
                s0 = (s0 + d0[y]) % mod;
            }
            d0 = move(n0);
            d1 = move(n1);
        }

        long long ans = 0;
        for (int x = 1; x <= m; ++x) {
            ans = (ans + d0[x] + d1[x]) % mod;
        }
        return ans;
    }
};
