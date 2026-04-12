n = int(input())
a = list(map(int, input().split()))
res = [0] * n
stack = []

for i in range(n - 1, -1, -1):
    while stack and stack[-1] <= a[i]:
        stack.pop()
    res[i] = stack[-1] if stack else a[i]
    stack.append(a[i])

print(*(res))
