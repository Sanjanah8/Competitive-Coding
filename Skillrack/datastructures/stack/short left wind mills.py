n, h, s, res = int(input()), list(map(int, input().split())), [], []
for i, x in enumerate(h):
    while s and h[s[-1]] < x: s.pop()
    res.append(i - s[-1] - 1 if s else i); s.append(i)
print(*res)
