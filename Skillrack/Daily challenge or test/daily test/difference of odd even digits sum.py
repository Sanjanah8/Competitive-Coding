n=input().strip()
o=e=0
for d in n:
    if int(d)%2:
        o+=int(d)
    else:
        e+=int(d)
print(abs(o-e))
