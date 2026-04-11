import math
import sys
v = list(map(int, sys.stdin.read().split()))
d = math.sqrt((v[2]-v[0])**2 + (v[3]-v[1])**2)
print(f"{d:.2f}")
