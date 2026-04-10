s,n=input().split();n=int(n)
print("".join(dict.fromkeys([c for c in s if s.count(c)==n])))
