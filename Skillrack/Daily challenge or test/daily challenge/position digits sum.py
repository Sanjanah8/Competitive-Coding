a,b=map(int,input().split())
results=[]
while a>0 or b>0:
    aa=a%10
    bb=b%10
    results.append(str(aa+bb))
    a//=10
    b//=10
print(" ".join(results))
