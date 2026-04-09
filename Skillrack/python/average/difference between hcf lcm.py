import math
a = int(input())
b = int(input())
hcf = math.gcd(a, b)
lcm = (a * b) // hcf
print(lcm - hcf)
