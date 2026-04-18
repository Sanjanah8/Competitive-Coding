a = input().split(',')
r = []
for x in a:
    s, n = x.split(':')
    v = sum(int(d)**2 for d in n)
    if v % 2 == 0:
        r.append(s[-1] + s[:-1])
    else:
        r.append(s[2:] + s[:2])
print(*(r))
