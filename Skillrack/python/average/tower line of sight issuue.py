import math

def d(p1, p2):
    return math.sqrt((p1[0]-p2[0])**2 + (p1[1]-p2[1])**2)

def on(p, a, b):
    return math.isclose(d(a, p) + d(p, b), d(a, b))

a = list(map(int, input().split()))
b = list(map(int, input().split()))
c = list(map(int, input().split()))
d_tow = list(map(int, input().split()))

if on(b, a, c) or on(d_tow, a, c) or on(a, b, d_tow) or on(c, b, d_tow):
    print("yes")
else:
    print("no")
