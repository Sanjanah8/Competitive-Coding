from collections import Counter

r = input().strip()
m = input().strip()

count_r = Counter(r)
count_m = Counter(m)

can_construct = True
for char, count in count_r.items():
    if count_m[char] < count:
        can_construct = False
        break

print("true" if can_construct else "false")
