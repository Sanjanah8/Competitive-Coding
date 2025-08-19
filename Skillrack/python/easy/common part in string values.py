s1 = input().strip()
s2 = input().strip()

# Find the maximum overlap
common = ""
min_len = min(len(s1), len(s2))

for i in range(1, min_len+1):
    if s1[-i:] == s2[:i]:
        common = s1[-i:]

print(common)
