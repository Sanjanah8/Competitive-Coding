n=int(input())
v="aeiouAEIOU"
ans=""
maxc=-1
for _ in range(n):
    s=input()
    c=sum(ch in v for ch in s)
    if c>maxc:
        maxc=c
        ans=s
print(ans)
