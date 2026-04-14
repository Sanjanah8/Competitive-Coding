import sys
sys.setrecursionlimit(2500)
r, c, *m = map(int, sys.stdin.read().split())
g = [m[i*c : (i+1)*c] for i in range(r)]

def f(i, j):
    if 0 <= i < r and 0 <= j < c and g[i][j]:
        g[i][j] = 0
        return 1 + f(i+1, j) + f(i-1, j) + f(i, j+1) + f(i, j-1)
    return 0

ans = 0
for i in range(r):
    for j in range(c):
        if g[i][j]:
            ans = max(ans, f(i, j))
print(ans)
