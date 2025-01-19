x,y=map(int,input().split())
m=[list(map(int,input().split())) for _ in range(x-1)]
r=list(map(int,input().split()))
c=list(map(int,input().split()))
for i in range(y):
    if r[i] in c:
        a,b=i,c.index(r[i])
        break
m.insert(b,r)
for i in range(x):
    if i!=b:
        m[i].insert(a,c[i])
for i in m:print(*i)
