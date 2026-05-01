n=int(input())
m=[list(map(int,input().split()))for _ in range(n)]
print(*[max(r)for r in m])
print(*[max(c)for c in zip(*m)])
