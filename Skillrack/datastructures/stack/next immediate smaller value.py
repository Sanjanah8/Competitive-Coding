n, a = int(input()), list(map(int, input().split()))
res, s = [0]*n, []
for i in range(n-1, -1, -1):
    while s and s[-1] >= a[i]: s.pop()
    res[i] = s[-1] if s else a[i]
    s.append(a[i])
print(*res)
