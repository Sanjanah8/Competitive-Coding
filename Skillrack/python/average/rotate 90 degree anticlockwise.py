m = int(input())
n = int(input())
mat = [input().split() for _ in range(m)]

for j in range(n - 1, -1, -1):
    print(*(mat[i][j] for i in range(m)))
