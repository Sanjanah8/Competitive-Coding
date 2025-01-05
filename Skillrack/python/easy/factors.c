n=int(input())
numbers=[]
for _ in range(n):
    numbers.append(int(input()))
smallest=min(numbers)

def finddivisors(num):
    divisors=[]
    for i in range(2,num+1):
        if num%i==0:
            divisors.append(i)
    return divisors
common=finddivisors(smallest)
validfactors=[]
for factor in common:
    if all(num%factor ==0 for num in numbers):
        validfactors.append(factor)
print(len(validfactors))
