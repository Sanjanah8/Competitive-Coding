def is_prime(n):
    if num<2:
        return False
    for i in range(2,int(num**0.5)+1):
        if num%i==0:
            return False
        return True
n=int(input())
n+=1
while not is_prime(n):
    n+=1
print(n)
