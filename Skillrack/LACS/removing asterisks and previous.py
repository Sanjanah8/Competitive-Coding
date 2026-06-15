s=input()
a=[]
for i in range(len(s)):
    if s[i]!='*':
        a.append(s[i])
    elif s[i]=='*':
        if len(a)>0:
            a.pop()
print("".join(a))

