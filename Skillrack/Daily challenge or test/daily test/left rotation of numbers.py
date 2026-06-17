a=list(map(int,input().split()))
r=list(map(int,input().split()))
for i in r:
    i=i%len(a)
    print(*a[i:]+a[:i])
