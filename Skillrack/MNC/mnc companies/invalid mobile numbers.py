import sys
c = 0
for s in sys.stdin.read().split():
    if s.lower() == 'q': break
    if not (len(s) == 10 and s.isdigit()): c += 1
print(c)
