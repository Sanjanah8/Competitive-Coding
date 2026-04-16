m = int(input())
n = int(input())
matrix = [input().split() for _ in range(m)]

for j in range(n):
    row = [matrix[i][j] for i in range(m-1, -1, -1)]
    print(*(row))
