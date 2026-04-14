def f(n):
    s = list(n)
    for i in range(0, len(s)-1, 2):
        s[i], s[i+1] = s[i+1], s[i]
    return int("".join(s))

x, y = input().split()
print(f(x) + f(y))
