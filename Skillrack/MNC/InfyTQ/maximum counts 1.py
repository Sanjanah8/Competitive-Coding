n = int(input())
a = list(map(int, input().split()))
ans = 0
for i in range(n):
    for j in range(i, n):
        c = 0
        for k in range(n):
            v = a[k]
            if k >= i and k <= j:
                c += (1 - v)
            else:
                c += v
        if c > ans:
            ans = c
print(ans)
