from collections import Counter
s = input().strip()
n = int(input())
c = Counter(s)
for char in reversed(s):
    if c[char] == n:
        print(char)
        exit()
print(-1)
