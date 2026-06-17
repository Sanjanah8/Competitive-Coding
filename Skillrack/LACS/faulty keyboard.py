s = input().strip()
f = []

for char in s:
    if char == 'i':
        f.reverse()
    else:
        f.append(char)

print("".join(f))
