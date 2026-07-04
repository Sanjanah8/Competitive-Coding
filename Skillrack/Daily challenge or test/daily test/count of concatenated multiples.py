s,p=map(int,input().split())
l=list(map(str,input().split()))
r=0
for i in range(len(l)):
    for j in range(len(l)):
        if l[i]!=l[j]:
            a=l[i]+l[j];
            if int(a)%p==0:
                r=r+1
        else:
            continue
print(r)
