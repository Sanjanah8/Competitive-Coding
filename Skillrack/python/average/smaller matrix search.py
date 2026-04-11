import sys
d = sys.stdin.read().split()
N, M = int(d[0]), int(d[1])
A = [d[i:i+N] for i in range(2, N*N+2, N)]
B = [d[i:i+M] for i in range(N*N+2, len(d), M)]
ans = "FALSE"
for r in range(N-M+1):
    for c in range(N-M+1):
        if all(A[r+i][c:c+M] == B[i] for i in range(M)):
            ans = "TRUE"
print(ans)
