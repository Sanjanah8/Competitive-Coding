def is_prime(n):
    if n<2:
        return False
    for i in range(2,int(n**0.5)+1):
        if n%i==0:
            return False
    return True
a=int(input())
b=int(input())
count=0
for i in range(a,b+1):
    if is_prime(i):
        count+=1
print(count)
