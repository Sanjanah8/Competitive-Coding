data = input().split()
x, y = 0, 0
for i in data:
    d, v = i[0], int(i[1:])
    if d == 'x': x = v
    elif d == 'y': y = v
    elif d == 'N': y += v
    elif d == 'S': y -= v
    elif d == 'E': x += v
    elif d == 'W': x -= v
print(f"x{x} y{y}")
