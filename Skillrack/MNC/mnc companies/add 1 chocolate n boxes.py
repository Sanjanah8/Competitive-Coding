n = int(input())
a = list(map(int, input().split()))

for i in range(n - 1, -1, -1):
    if a[i] < 9:
        print(i + 1)
        exit()
print(-1)
