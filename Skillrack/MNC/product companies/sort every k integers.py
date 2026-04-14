n, k = map(int, input().split())
arr = list(map(int, input().split()))

for i in range(0, n, k):
    chunk = sorted(arr[i : i + k], reverse=True)
    print(*(chunk), end=" ")
