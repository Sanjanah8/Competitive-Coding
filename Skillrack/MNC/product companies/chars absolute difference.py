s1, s2 = set(input().strip()), set(input().strip())
common = len(s1 & s2)
uncommon = len(s1 ^ s2)
print(abs(common - uncommon))
