n=int(input())
a=list(map(int,input().split()))
s=set()
f=False
for i in range(n-1):
    sm=a[i]+a[i+1]
    if sm in s:
        f=True
        break
    s.add(sm)
print("true" if f else "false")
