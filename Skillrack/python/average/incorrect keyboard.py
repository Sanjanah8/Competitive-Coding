w = input().strip()
c = sum(w.count(x) for x in "TDLF")
print(2**c)
