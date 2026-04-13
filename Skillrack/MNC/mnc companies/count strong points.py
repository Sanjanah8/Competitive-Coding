R, C = map(int, input().split())
M = [list(map(int, input().split())) for _ in range(R)]
ans = 0
for r in range(R):
    for c in range(C):
        nb = [M[i][j] for i in range(r-1, r+2) for j in range(c-1, c+2) if 0<=i<R and 0<=j<C and (i!=r or j!=c)]
        if all(M[r][c] > x for x in nb): ans += 1
print(ans)
