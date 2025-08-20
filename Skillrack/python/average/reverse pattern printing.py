n = int(input().strip())

# column tops
starts = []
s = n * (n + 1) // 2          # 15 when n=5
for j in range(n):             # 15, 10, 6, 3, 1
    starts.append(s)
    s -= (n - j)

# print rows; each column drops by 1 per row
for i in range(n):
    print(*[starts[j] - i for j in range(n - i)])
