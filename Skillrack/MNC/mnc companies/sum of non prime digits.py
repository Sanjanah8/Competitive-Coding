n = input().strip()
p = "2357"
res = [int(d) for d in n if d not in p]
print(sum(res) if res else -1)
