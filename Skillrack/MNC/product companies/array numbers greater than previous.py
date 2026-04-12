input()
l = list(map(int, input().split()))
m = -float('inf')
for x in l:
    if x > m:
        print(x, end=' ')
        m = x
