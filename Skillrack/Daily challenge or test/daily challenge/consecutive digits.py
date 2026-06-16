s=input().strip()
res=""
i=0
while i<len(s):
    j=i
    while j<len(s) and s[j]==s[i]:
        j+=1
    cnt=j-i
    if cnt==1:
        res+=s[i]*2
    else:
        res+=s[i]*cnt
    i=j
print(res)
