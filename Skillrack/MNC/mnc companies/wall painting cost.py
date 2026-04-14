import sys
x, y = map(float, sys.stdin.readline().split())
m, n = map(int, sys.stdin.readline().split())
data = list(map(float, sys.stdin.read().split()))

cost = sum(data[:m]) * x + sum(data[m:]) * y
print(f"{cost:.2f}")
