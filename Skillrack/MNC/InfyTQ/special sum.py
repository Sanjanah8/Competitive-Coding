from itertools import combinations as cb
n, k, s = map(int, input().split())
a = list(map(int, input().replace(',', ' ').split()))
c = 0
for x in cb(a, k):
    if sum(x) == s:
        c += 1
print(c)
