import sys

stack = []
for line in sys.stdin:
    parts = line.split()
    if not parts: continue
    cmd = int(parts[0])
    if cmd == 1:
        stack.append(" ".join(parts[1:]))
    elif cmd == -1:
        if stack: stack.pop()
    elif cmd == 2:
        if stack: print(stack[-1])
    elif cmd == 0:
        break
