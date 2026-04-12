s = input()
l = len(s)
m = l // 2
t = s[m:] + s[:m]
for i in range(1, l + 1):
    print("*" * (l - i) + t[:i])
