s = input().strip()
counts = {c: s.count(c) for c in s}
mx = max(counts.values())

res = "".join(c for c in s if counts[c] == mx)
print(res)
