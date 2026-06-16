s = input().strip()
indices = list(map(int, input().split()))

shuffled = [''] * len(s)

for i in range(len(s)):
    shuffled[indices[i]] = s[i]

print("".join(shuffled))
