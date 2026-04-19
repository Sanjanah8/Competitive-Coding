s = input().strip()
while s != s[::-1]:
    s = str(int(s) + int(s[::-1]))
print(len(s))
