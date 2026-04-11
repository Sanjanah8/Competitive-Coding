s1 = input().strip()
s2 = input().strip()
print(sum(min(s1.count(c), s2.count(c)) for c in set(s1) & set(s2)))
