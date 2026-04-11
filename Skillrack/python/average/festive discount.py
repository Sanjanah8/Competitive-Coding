import sys
d = [int(x) for x in sys.stdin.read().split()][1:]
t = 0
for p in d:
    if p >= 1000: p *= 0.5
    elif p > 500: p *= 0.75
    elif p > 400: p *= 0.8
    t += p
if t > 2000: t -= 100
print(f"{t:.2f}")
