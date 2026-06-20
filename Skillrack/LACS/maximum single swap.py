s=list(input().strip())
d={int(v):i for i,v in enumerate(s)}
for i,v in enumerate(s):
    curr=int(v)
    for j in range(9,curr,-1):
        if d.get(j,-1)>i:
            idx=d[j]
            s[i],s[idx]=s[idx],s[i]
            print("".join(s))
            exit()
print("".join(s))
