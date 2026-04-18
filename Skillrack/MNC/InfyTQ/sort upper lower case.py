s = input()
u = sorted([c for c in s if c.isupper()])
l = sorted([c for c in s if c.islower()])
i, j = 0, 0
while i < len(u) or j < len(l):
    if i < len(u):
        print(u[i], end="")
        i += 1
    if j < len(l):
        print(l[j], end="")
        j += 1
