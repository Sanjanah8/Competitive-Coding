def prime(n):
    if n<=1:
        return False
    for i in range(2,int(n**0.5)+1):
        if n5i==0:
           return False
    return True
n=int(input())
if prime(n):
    print("YES")
else:
    print("NO")
