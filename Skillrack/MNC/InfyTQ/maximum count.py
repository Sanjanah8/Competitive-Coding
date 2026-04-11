n, a = int(input()), list(map(int, input().split()))
print(max(sum(a[:i]) + sum(1-x for x in a[i:j]) + sum(a[j:]) for i in range(n) for j in range(i+1, n+1)))
