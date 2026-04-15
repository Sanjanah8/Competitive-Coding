n1,n2=map(int,input().split())
u1=n1%10
u2=n2%10
if u1==u2:
    print(max(n1,n2))
else:
    if u1<u2:
        print(n1)
    else:
        print(n2)
