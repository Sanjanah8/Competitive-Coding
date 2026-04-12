import sys
d = sys.stdin.read().split()
if d:
    n, m = int(d[0]), int(d[1])
    b = [d[i:i+n] for i in range(2, n*n+2, n)]
    s = [d[i:i+m] for i in range(n*n+2, n*n+m*m+2, m)]
    res = "FALSE"
    for r in range(n-m+1):
        for c in range(n-m+1):
            if all(b[r+i][c:c+m] == s[i] for i in range(m)):
                res = "TRUE"
                break
    print(res)
