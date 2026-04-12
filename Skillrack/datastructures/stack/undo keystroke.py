s = input()
res = []
for c in s:
    if c == '*':
        if res: res.pop()
    else:
        res.append(c)
print("".join(res))
