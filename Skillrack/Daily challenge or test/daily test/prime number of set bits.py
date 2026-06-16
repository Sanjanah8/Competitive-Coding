def prime(n):
    if n<2:
        return False
    for i in range(2,int(n**0.5)+1):
        if n%i==0:
            return False
    return True
m,n=map(int,input().split())
res=[]
for i in range(m,n+1):
    if prime(bin(i).count('1')):
        res.append(str(i))
print(' '.join(res)if res else -1)
