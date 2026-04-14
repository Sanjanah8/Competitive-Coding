from collections import Counter
s = input().split()
n = int(input())
counts = Counter(s)
print(sum(1 for word in counts if counts[word] == n))
