s = input().strip()
n = len(s)

for i in range(n):
    for j in range(n):
        # Primary diagonal: i == j
        # Secondary diagonal: i + j == n - 1
        if j == i or j == n - 1 - i:
            print(s[j], end="")
        else:
            print(" ", end="")
    print()
