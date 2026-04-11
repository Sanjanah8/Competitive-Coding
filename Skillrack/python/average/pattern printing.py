n = int(input())
matrix = [[0] * n for _ in range(n)]
val = 1
for col in range(n):
    for row in range(n - col):
        matrix[row][col + row] = val
        val += 1
for row in matrix:
    print(*(num for num in row if num != 0))
