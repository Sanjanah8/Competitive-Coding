n, c = map(int, input().split())
commands = input().split()

r, c_pos = 0, 0

for cmd in commands:
    if cmd == "UP":
        r -= 1
    elif cmd == "DOWN":
        r += 1
    elif cmd == "LEFT":
        c_pos -= 1
    elif cmd == "RIGHT":
        c_pos += 1

ans = (r * n) + c_pos
print(ans)
