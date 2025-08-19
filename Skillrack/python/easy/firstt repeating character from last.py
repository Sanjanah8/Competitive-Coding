s = input().strip()

# Count occurrences
count = {}
for ch in s:
    count[ch] = count.get(ch, 0) + 1

# Traverse from end to start to find the first repeating character
for ch in reversed(s):
    if count[ch] > 1:
        print(ch)
        break
