import sys
x, y = sys.stdin.read().split()
s = str(int(x[::-1]) + int(y[::-1]))
print(int(s[::-1]))

