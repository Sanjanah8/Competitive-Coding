n = int(input())
m = [[0]*n for _ in range(n)]
val = 1
for j in range(n):
    for i in range(n - j):
        m[i][j + i] = val
        val += 1
for row in m:
    print(*(x for x in row if x != 0))
