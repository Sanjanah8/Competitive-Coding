n=int(input().strip())
if n>0 and (n&(n-1))==0:
    print("YES")
else:
    print("NO")
