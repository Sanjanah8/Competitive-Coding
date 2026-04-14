s = input().strip()
res, redo = [], []
i = 0
while i < len(s):
    if s[i:i+2] == '^z':
        if res: redo.append(res.pop())
        i += 2
    elif s[i:i+2] == '^y':
        if redo: res.append(redo.pop())
        i += 2
    else:
        res.append(s[i])
        redo = []
        i += 1
print("".join(res))
