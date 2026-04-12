n, k = map(int, input().split())
a = input().split()
r = []
c = 0
for x in a:
    r.append(x)
    if x == '1':
        c += 1
        if c == k:
            r.append('0')
            c = 0
    else:
        c = 0
print(*r)
