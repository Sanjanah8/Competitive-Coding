s=input().strip()
r=[]
for char in s:
    if char=='i':
        r.reverse()
    else:
        r.append(char)
print("".join(r))
