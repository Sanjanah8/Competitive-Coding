import sys
d = list(map(int, sys.stdin.read().split()))
n = d[0]
m = [d[i:i+n] for i in range(1, len(d), n)]
s = 0
for i in range(n):
    s += m[i][i]
    if i != n-1-i:
        s += m[i][n-1-i]
print(s)
