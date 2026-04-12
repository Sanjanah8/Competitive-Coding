l = list(map(int, input().split()))
r = []
m = -1
for x in reversed(l):
    if x > m:
        r.append(x)
        m = x
print(*(r[::-1]))
