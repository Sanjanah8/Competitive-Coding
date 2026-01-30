n=int(input())
a=[input().split() for _ in range(n)]
q=int(input())
ig=0
for _ in range(q):
    d,p,c=input().split()
    p=int(p)-1
    f=0
    if d=='L':
        for j in range(n):
            if a[p][j]==c:
                a[p][j]='*'
                f=1
                break
    elif d=='R':
        for j in range(n-1,-1,-1):
            if a[p][j]==c:
                a[p][j]='*'
                f=1
                break
    elif d=='T':
        for i in range(n):
            if a[i][p]==c:
                a[i][p]='*'
                f=1
                break
    elif d=='B':
        for i in range(n-1,-1,-1):
            if a[i][p]==c:
                a[i][p]='*'
                f=1
                break
    if f==0:
        ig+=1
for r in a:
    print(*r)
print(ig)
