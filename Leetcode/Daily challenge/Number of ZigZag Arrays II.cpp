class Solution {
    const int MOD = 1e9 + 7;
    using Matrix = vector<vector<long long>>;

    Matrix multiply(const Matrix& A, const Matrix& B) {
        int s = A.size();
        Matrix C(s, vector<long long>(s, 0));

        for (int i = 0; i < s; i++) {
            for (int k = 0; k < s; k++) {
                if (!A[i][k]) continue;
                for (int j = 0; j < s; j++) {
                    C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % MOD;
                }
            }
        }

        return C;
    }

public:
    int zigZagArrays(int n, int l, int r) {
        if (n == 1) return r - l + 1;

        int k = r - l + 1;
        int s = 2 * k;

        Matrix M(s, vector<long long>(s, 0));

        for (int i = 0; i < k; i++) {
            for (int j = 0; j < i; j++) {
                M[i][k + j] = 1;
            }

            for (int j = i + 1; j < k; j++) {
                M[k + i][j] = 1;
            }
        }

        Matrix res(s, vector<long long>(s, 0));

        for (int i = 0; i < s; i++) {
            res[i][i] = 1;
        }

        long long p = n - 1;

        while (p > 0) {
            if (p % 2 == 1) {
                res = multiply(res, M);
            }

            M = multiply(M, M);
            p /= 2;
        }

        long long ans = 0;

        for (int i = 0; i < s; i++) {
            for (int j = 0; j < s; j++) {
                ans = (ans + res[i][j]) % MOD;
            }
        }

        return (int)ans;
    }
};
