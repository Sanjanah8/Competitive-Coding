n=int(input())
a=input().split()
for i in range(n//2):
    l,r=a[i],a[-i-1]
    if l!='*' and r!='*' and l!=r:
        print(-1);exit()
    a[i]=a[-i-1]=l if r=='*'else r if l =='*' else l
print(' '.join(str(x).replace('*','1')for x in a))
