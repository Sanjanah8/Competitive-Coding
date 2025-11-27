arr = list(map(int, input().split()))
n = len(arr)

left = [1]*n
right = [1]*n
res = [0]*n

for i in range(1, n):
    left[i] = left[i-1] * arr[i-1]

for i in range(n-2, -1, -1):
    right[i] = right[i+1] * arr[i+1]

for i in range(n):
    res[i] = left[i] * right[i]

print(*res)
