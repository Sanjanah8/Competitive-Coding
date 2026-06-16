n = int(input())

x = 1
while x < n:
    x = (x << 1) | 1

print(x)
